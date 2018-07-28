#ifndef _MAP_H_
#define _MAP_H_

#include "main.h"

#define MAP_SIZE_X				18
#define MAP_SIZE_Y				13

#define MAP_NUMBER				2

#define MAP_WALL				1

#define MAP_BLOCK_SIZE			32
#define MAP_TEXTURE				_T("data/texture/map.png")


typedef struct MAP {
	UINT	mapData[MAP_SIZE_Y][MAP_SIZE_X];
	UINT	fogData[MAP_SIZE_Y][MAP_SIZE_X];
}MAP;

HRESULT InitMap(void);
void UpdateMap(void);
void DrawMap(void);
void UninitMap(void);

void RemoveFog();

MAP* GetMap(void);

void ChangeMap(int id);

#endif