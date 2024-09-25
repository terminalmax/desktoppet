//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include <ranges>

#include "Pet.h"
#include "helper.h"
#include "slime.h"

int main()
{
    // Set up window
    constexpr int window_width = 400;
    constexpr int sprite_size = 32;
    constexpr int window_height = sprite_size;
    int vertical = 0;

    SetConfigFlags(FLAG_WINDOW_TRANSPARENT | FLAG_WINDOW_ALWAYS_RUN | FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_MOUSE_PASSTHROUGH);
    InitWindow(window_width, window_height, "DesktopPet");
    SetTargetFPS(30);
    
    set_window_bottom_most(GetWindowHandle(), vertical);
    const int window_pos_x = GetMonitorWidth(0) - window_width;
    const int window_pox_y = vertical - sprite_size;

    SetWindowPosition(window_pos_x, window_pox_y);

    // Set up pet
    Slime slime(SLIME_DATA, SLIME_FORMAT, SLIME_HEIGHT, SLIME_WIDTH, 4, 8);
    
    for (const int i: std::views::iota(0, 16)) {
        slime.insert_frame({ i * 32.0f, 0, 8 ,8 });
    }

    // Run
    while (!WindowShouldClose()) {
        
        mousepos pos = get_global_mouse_pos();

        slime.move_towards(pos.x - window_pos_x);

        BeginDrawing();
        ClearBackground(BLANK);

        slime.animate();

        EndDrawing();
    }

    remove_tray_icon(GetWindowHandle());
    CloseWindow();

    return EXIT_SUCCESS;
}

