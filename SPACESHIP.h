#include "Menu.h"

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