#pragma once

#include "main.h"

#define WALL_SIZE			(32)

#define EXIT_TEXTURE		_T("data/texture/exit.png")
#define WALL_TEXTURE		_T("data/texture/wall.png")
#define FINISH_TEXTURE		_T("data/texture/monkey2.png")

HRESULT InitWall(void);
void UpdateWall(void);
void DrawWall(void);
void UninitWall(void);

void RemoveWall(int x, int y);