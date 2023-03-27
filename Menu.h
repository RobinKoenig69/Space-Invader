#include "Import.h"

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