#include "SPACESHIP.h"

PCOLORS MapColor(){
    PCOLORS pCOLOR_SPACESHIP = malloc(sizeof (COLORS));
    pCOLOR_SPACESHIP->BLUE = al_map_rgb(51,38,223);
    pCOLOR_SPACESHIP->GREEN = al_map_rgb(40,255,97);
    pCOLOR_SPACESHIP->RED = al_map_rgb(245,23,15);
    pCOLOR_SPACESHIP->YELLOW = al_map_rgb(245,237,15);
    pCOLOR_SPACESHIP-> PURPLE = al_map_rgb(137,15,245);
    pCOLOR_SPACESHIP-> BLACK = al_map_rgb(0,0,0);

    return pCOLOR_SPACESHIP;
}
