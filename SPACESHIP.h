#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Import.h"

typedef struct{
    int x, y;
    int points;
    int damage;
}SPACESHIP;

typedef struct{
    int x, y;
    int damage;
    int HP;
}ENEMIES;

typedef struct {
    int x, y;
    int damage;
    int HP;
}BOSS;

typedef struct {
    int x, y;
    int damage;
}BULLET;

typedef struct {
    ALLEGRO_COLOR
    RED,
    GREEN,
    BLUE,
    YELLOW,
    PURPLE,
    BLACK;
}COLORS, *PCOLORS;

bool end = false;
bool Menu = true;
bool Game = false;
bool Credits = false;
bool Boss = false;

typedef struct {
    ALLEGRO_BITMAP
            *MENU,
            *CREDITS,
            *SPACESHIP,
            *EVIL_SPACESHIP,
            *BOSS,
            *BULLETS_TYPE_1,
            *BULLETS_TYPE_2,
            *BULLETS_TYPE_3,
            *BULLETS_TYPE_4,
            *BULLETS_TYPE_5;
}TEXTURES;

//prototypes

PCOLORS MapColor();
void Init_Allegro();
void Init_Allegro_Display(ALLEGRO_DISPLAY *pdisplay, int X, int Y, char* pTitle);
void Init_Allegro_Event(ALLEGRO_EVENT_QUEUE* pqueue, ALLEGRO_DISPLAY *pdisplay, ALLEGRO_TIMER*ptimer);
void Set_Display_Refresh_Rate(ALLEGRO_TIMER *pTimer, int RefreshRate);


#endif SPACESHIP_H