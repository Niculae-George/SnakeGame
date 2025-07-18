#pragma once

#include <iostream>
#include <raylib.h>
#include <deque>
#include <raymath.h>
#include "Snake.h"
#include "Food.h"

extern int cellSize;
extern int cellCount;
extern int offset;
extern double lastUpdateTime;
extern bool allowMove;
extern bool ElementInDeque(Vector2 element, std::deque<Vector2> deque);

class Game
{
public:
    Snake snake;
    Food food;
    bool running = true;
    int score = 0;
    Sound eatSound;
    Sound wallSound;

    Game();
    ~Game();

    void Draw();
    void Update();
    void CheckCollisionWithFood();
    void CheckCollisionWithEdges();
    void GameOver();
    void CheckCollisionWithTail();
};
