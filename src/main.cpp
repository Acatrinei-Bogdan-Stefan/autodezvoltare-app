#include <raylib.h>
#include <iostream>
#include "button.hpp"

int main() 
{
    
     int screenWidth = 600;
     int screenHeight = 1000;
    
    InitWindow(screenWidth, screenHeight, "RAYLIB button tutorial!");

    SetTargetFPS(60);

    Texture2D background = LoadTexture("");
    Button questsButton{"Graphics/menu_button.png", {0, 910}, 0.30};
    Button tasksButton{"Graphics/menu_button.png", {100, 910}, 0.30};
    Button storyButton{"Graphics/menu_button.png", {200, 910}, 0.30};
    Button huntingButton{"Graphics/menu_button.png", {300, 910}, 0.30};
    Button colectionButton{"Graphics/menu_button.png", {400, 910}, 0.30};
    Button tentButton{"Graphics/menu_button.png", {500, 910}, 0.30};
    
    

    bool exit = false;
    
    while (WindowShouldClose() == false && exit == false)
    {

        Vector2 mousePosition = GetMousePosition();
        bool mousePressed = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

        if (questsButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Quests Button" << std::endl;
        }
        else if (tasksButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Tasks Button" << std::endl;
        }
        else if (storyButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Story Button" << std::endl;
        }
        else if (huntingButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Hunting Button" << std::endl;
        }
        else if (colectionButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Colection Button" << std::endl;
        }
        else if (tentButton.isPressed(mousePosition, mousePressed)) {
            std::cout << "Tent Button" << std::endl;
        }


       


        BeginDrawing();
            ClearBackground(WHITE);
            DrawTexture(background ,0 ,0 ,WHITE);

            questsButton.Draw();
            tasksButton.Draw();
            storyButton.Draw();
            huntingButton.Draw();
            colectionButton.Draw();
            tentButton.Draw();
            DrawText("Quest", 6, 940, 30, BLACK);
            DrawText("Tasks", 104, 940, 30, BLACK);
            DrawText("Story", 206, 940, 30, BLACK);
            DrawText("Hunting", 306, 942, 25, BLACK);
            DrawText("Colection", 404, 945, 20, BLACK);
            DrawText("Tent", 513, 940, 30, BLACK);

        EndDrawing();
    }
    
    CloseWindow();
}