#include <raylib.h>
#include <iostream>
#include "button.hpp"
#include "quest.hpp"

int main() 
{
    
     int screenWidth = 600;
     int screenHeight = 1000;
    
    InitWindow(screenWidth, screenHeight, "RAYLIB button tutorial!");

    SetTargetFPS(60);

    // Texture2D background = LoadTexture("");
    Button questsButton{"Graphics/menu_button.png", {0, 910}, 0.30};
    Button tasksButton{"Graphics/menu_button.png", {100, 910}, 0.30};
    Button storyButton{"Graphics/menu_button.png", {200, 910}, 0.30};
    Button huntingButton{"Graphics/menu_button.png", {300, 910}, 0.30};
    Button colectionButton{"Graphics/menu_button.png", {400, 910}, 0.30};
    Button tentButton{"Graphics/menu_button.png", {500, 910}, 0.30};

    Quest quest;
    int menuState = 0;    

    bool exit = false;
    
    while (WindowShouldClose() == false && exit == false)
    {

        Vector2 mousePosition = GetMousePosition();
        bool mousePressed = IsMouseButtonPressed(MOUSE_BUTTON_LEFT);


        if (questsButton.isPressed(mousePosition, mousePressed)) {
            menuState = 1;
        }
        else if (tasksButton.isPressed(mousePosition, mousePressed)) {
            menuState = 2;
        }
        else if (storyButton.isPressed(mousePosition, mousePressed)) {
            menuState = 3;
        }
        else if (huntingButton.isPressed(mousePosition, mousePressed)) {
            menuState = 4;
        }
        else if (colectionButton.isPressed(mousePosition, mousePressed)) {
            menuState = 5;
        }
        else if (tentButton.isPressed(mousePosition, mousePressed)) {
            menuState = 6; 
        }
       


        BeginDrawing();
        switch(menuState)
        {
            case 1: 
            quest.Draw();
            break;

            case 2: 
            ClearBackground(BLUE);
            DrawText("Tasks", 130, 200, 100, BLACK);
            break;

            case 3: 
            ClearBackground(YELLOW);
            DrawText("Story", 150, 200, 100, BLACK);
            break;

            case 4: 
            ClearBackground(GREEN);
            DrawText("Hunting", 110, 200, 100, BLACK);
            break;

            case 5: 
            ClearBackground(RED);
            DrawText("Colection", 80, 200, 100, BLACK);
            break;

            case 6: 
            ClearBackground(ORANGE);
            DrawText("Tent", 180, 200, 100, BLACK);
            break;

            default: 
            quest.Draw();
            break;

        }

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