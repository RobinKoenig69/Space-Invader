#include "Game.c"

int main() {

    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_EVENT_QUEUE* queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_EVENT event;

    ALLEGRO_BITMAP * SPACESHIP = NULL;
    ALLEGRO_BITMAP * EVIL_SPACESHIP = NULL;


    //MapColor(pCOLOR_SPACESHIP);
    // pCOLOR_SPACESHIP->BLACK;

    PCOLORS Colors_Spaceship = MapColor();

    assert(al_init());
    assert(al_init_primitives_addon());
    assert(al_install_keyboard());
    assert(al_init_image_addon());

    //EVIL_SPACESHIP = al_load_bitmap("FILES\\EVIL_SPACESHIP.png");
    SPACESHIP = al_load_bitmap("..\\FILES\\SPACESHIP.png");

    display = al_create_display(500, 500);
    //al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
    al_set_window_title(display, "Space Invader V1 - Robin KOENIG");

    timer = al_create_timer(1.0/24);
    al_start_timer(timer);

    queue = al_create_event_queue();
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_timer_event_source(timer));



    while (!end){
        while(Menu) {

        }
    }
}
