#include "render/render.h"
#include "bitops.h"
#include "raylib.h"
#include "render/render_constants.h"
#include <stddef.h>

#define INDEX(i, j, step) ((i) * step + (j))

void render_screen(uint8_t pixels[]) {
  BeginDrawing();

  ClearBackground(BLACK);

  for (size_t row = 0; row < SCR_WIDTH / 8; ++row) {
    for (size_t col = 0; col < SCR_HEIGHT; ++col) {
      uint8_t strip = pixels[INDEX(row, col, SCR_WIDTH)];

      for (size_t i = 0; i < 8; ++i) {
        if (bit_set(strip, 8 - i)) {
          DrawRectangle(row + i, col, SCR_SCALE, SCR_SCALE, WHITE);
        }
      }
    }
  }

  EndDrawing();
}
