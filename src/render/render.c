#include "render/render.h"
#include "bitops.h"
#include "raylib.h"
#include "render/render_constants.h"
#include <stddef.h>

void render_screen(uint8_t pixels[]) {
  BeginDrawing();

  ClearBackground(BLACK);

  for (size_t row = 0; row < SCR_WIDTH / 8; ++row) {
    for (size_t col = 0; col < SCR_HEIGHT; ++col) {
      if (pixels)
        DrawRectangle(row, col, SCR_SCALE, SCR_SCALE, RAYWHITE);
    }
  }

  EndDrawing();
}
