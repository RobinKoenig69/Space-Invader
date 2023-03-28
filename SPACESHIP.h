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


#endif SPACESHIP_H