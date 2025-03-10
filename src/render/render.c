#include "render/render.h"
#include "bitops.h"
#include "raylib.h"
#include "render/render_constants.h"
#include <stddef.h>

static void draw_strip(uint8_t strip, size_t row, size_t col);

static inline size_t index_2d(size_t row, size_t col, size_t width) {
  return row * width + col;
}

void render_init(void) {
  InitWindow(SCR_WIDTH * SCR_SCALE, SCR_HEIGHT * SCR_SCALE, "Space Invaders");
  SetTargetFPS(60);
}

void render_screen(uint8_t pixels[]) {
  BeginDrawing();

  ClearBackground(BLACK);

  for (size_t memRow = 0, scrRow = 0; memRow < SCR_HEIGHT; ++memRow) {
    for (size_t memCol = 0, scrCol = 0; memCol < SCR_WIDTH / 8; ++memCol) {
      uint8_t strip = pixels[index_2d(memRow, memCol, SCR_WIDTH / 8)];

      draw_strip(strip, scrRow, scrCol);
      scrCol += 8;
    }

    scrRow++;
  }

  EndDrawing();
}

static void draw_strip(uint8_t strip, size_t row, size_t col) {
  for (int i = 0; i < 8; ++i) {
    if (bit_check(strip, 7 - i)) {
      DrawRectangle((col + i) * SCR_SCALE, row * SCR_SCALE, SCR_SCALE - 1,
                    SCR_SCALE - 1, RAYWHITE);
    }
  }
}
