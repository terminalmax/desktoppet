#pragma once

/*Interface with winAPI without colliding with raylib namespace*/

struct mousepos {
	long x, y;
};

mousepos get_global_mouse_pos();
void set_window_bottom_most(void* handle, int& vertical);
void remove_tray_icon(void* handle);

