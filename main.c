#include "Game.c"

int main() {

    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_EVENT_QUEUE* queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_EVENT event;

    ALLEGRO_BITMAP * SPACESHIP = NULL;
    ALLEGRO_BITMAP * EVIL_SPACESHIP = NULL;

    PCOLORS Colors_Spaceship = MapColor();

    Init_Allegro();

    //EVIL_SPACESHIP = al_load_bitmap("FILES\\EVIL_SPACESHIP.png");
    SPACESHIP = al_load_bitmap("..\\FILES\\SPACESHIP.png");

    Init_Allegro_Display(display, 500, 500, "Space Invader");


    al_start_timer(timer);

    Init_Allegro_Event(queue,display,timer);

    Set_Display_Refresh_Rate(timer, 24);

    while (!end){
        while(Menu) {

        }

        while (Game){

        }

        while (Credits){

        }
    }
}
