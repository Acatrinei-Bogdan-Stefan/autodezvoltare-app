#include "quest.hpp"

void Quest::Draw()
{
  ClearBackground(PURPLE);
  DrawText("Quest", 150, 200, 100, BLACK);
  DrawRectangle(100, 400, 400, 150, {243, 216, 63, 255});
}

