#include "SPACESHIP.h"

PCOLORS MapColor(){
    PCOLORS COLOR_SPACESHIPS = malloc(sizeof (COLORS));
    COLOR_SPACESHIPS->BLUE = al_map_rgb(51,38,223);
    COLOR_SPACESHIPS->GREEN = al_map_rgb(40,255,97);
    COLOR_SPACESHIPS->RED = al_map_rgb(245,23,15);
    COLOR_SPACESHIPS->YELLOW = al_map_rgb(245,237,15);
    COLOR_SPACESHIPS-> PURPLE = al_map_rgb(137,15,245);
    COLOR_SPACESHIPS-> BLACK = al_map_rgb(0,0,0);

    return COLOR_SPACESHIPS;
}
