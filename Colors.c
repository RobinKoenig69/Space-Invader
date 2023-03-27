#include "SPACESHIP.h"

PCOLORS MapColor(PCOLORS Clr){
    Clr->BLUE = al_map_rgb(51,38,223);
    Clr->GREEN = al_map_rgb(40,255,97);
    Clr->RED = al_map_rgb(245,23,15);
    Clr->YELLOW = al_map_rgb(245,237,15);
    Clr-> PURPLE = al_map_rgb(137,15,245);
    Clr-> BLACK = al_map_rgb(0,0,0);

    return Clr;
}
