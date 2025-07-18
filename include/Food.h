#pragma once

#include <raylib.h>
#include <deque>
extern int cellSize;
extern int cellCount;
extern int offset;
extern double lastUpdateTime;
extern bool allowMove;
extern Color blue;
extern Color darkBlue;
extern bool ElementInDeque(Vector2 element, std::deque<Vector2> deque);

class Food
{
public:
    Vector2 position;
    Texture2D texture;

    Food(); // Default constructor
    Food(std::deque<Vector2> snakeBody);
    ~Food();

    void Draw();
    Vector2 GenerateRandomCell();
    Vector2 GenerateRandomPos(std::deque<Vector2> snakeBody);
};
