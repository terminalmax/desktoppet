#include "helper.h"
#define WIN32_MEAN_AND_LEAN
#include <Windows.h>
#include <shellapi.h>
#include <iostream>

#define ID_TRAY_ICON 1001
#define ID_TRAY_EXIT 1002
#define WM_TRAYICON (WM_USER + 1)

static void _show_context_menu(HWND hwnd, POINT pt) {
    HMENU hMenu = CreatePopupMenu();
    if (hMenu) {
        InsertMenu(hMenu, -1, MF_BYPOSITION, ID_TRAY_EXIT, TEXT("Exit"));
        SetForegroundWindow(hwnd);
        TrackPopupMenu(hMenu, TPM_BOTTOMALIGN | TPM_LEFTALIGN, pt.x, pt.y, 0, hwnd, nullptr);
        DestroyMenu(hMenu);
    }
}

static void _create_tray_icon(HWND hwnd) {
    NOTIFYICONDATA nid = {};
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = ID_TRAY_ICON;
    nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    nid.uCallbackMessage = WM_TRAYICON;
    nid.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
    lstrcpy(nid.szTip, TEXT("Desktop Pet"));

    Shell_NotifyIcon(NIM_ADD, &nid);
}

static void _remove_tray_icon(HWND hwnd) {
    NOTIFYICONDATA nid = {};
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = ID_TRAY_ICON;

    Shell_NotifyIcon(NIM_DELETE, &nid);
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_DESTROY:
        _remove_tray_icon(hwnd);
        PostQuitMessage(0);
        return 0;
    case WM_TRAYICON:
        switch (LOWORD(lParam)) {
        case WM_RBUTTONUP: {
            POINT pt;
            GetCursorPos(&pt);
            _show_context_menu(hwnd, pt);
            break;
        }
        }
        break;
    case WM_COMMAND:
        switch (LOWORD(wParam)) {
        case ID_TRAY_EXIT:
            PostMessage(hwnd, WM_CLOSE, 0, 0);
            break;
        }
        break;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

static void _hide_from_taskbar(void* handle)
{
    HWND hwnd = static_cast<HWND>(handle);

    LONG exStyle = GetWindowLong(hwnd, GWL_EXSTYLE);
    // Remove the WS_EX_APPWINDOW style
    exStyle &= ~WS_EX_APPWINDOW;
    // Add the WS_EX_TOOLWINDOW style
    exStyle |= WS_EX_TOOLWINDOW;
    // Set the modified extended window style
    SetWindowLong(hwnd, GWL_EXSTYLE, exStyle);

    // Force a window redraw to apply the style changes
    ShowWindow(hwnd, SW_HIDE);
    ShowWindow(hwnd, SW_SHOW);

}

mousepos get_global_mouse_pos()
{
    POINT p;
    GetCursorPos(&p);
    return { p.x, p.y };
}

void set_window_bottom_most(void* handle, int& vertical)
{
	HWND hwnd = static_cast<HWND>(handle);

    //Set Bottom
	SetWindowPos(hwnd, HWND_BOTTOM, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);

    //Get Taskbar height
	RECT rect = {};
	SystemParametersInfo(SPI_GETWORKAREA, 0, &rect, 0);
	vertical = rect.bottom;

    //Set custom procedure
    SetWindowLongPtr(hwnd, GWLP_WNDPROC, (LONG_PTR)WindowProc);

    //Hide from taskbar
    _hide_from_taskbar(hwnd);

    //Create Tray
    _create_tray_icon(hwnd);

}

void remove_tray_icon(void* hwnd) {
    _remove_tray_icon(static_cast<HWND>(hwnd));

    /*Add other clean up if necessary*/

}
