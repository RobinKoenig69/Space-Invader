#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>

bool end = false;

int main() {
    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_EVENT_QUEUE* queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_EVENT event;

    assert(al_init());
    assert(al_init_image_addon());
    assert(al_init_primitives_addon());
    assert(al_install_keyboard());

    al_load_bitmap("FILES/EVIL_SPACESHIP.png");
    al_load_bitmap("FILES/SPACESHIP.png");

    display = al_create_display(1920, 1080);
    al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
    al_set_window_title(display, "Space Invader V1 - Robin KOENIG");

    timer = al_create_timer(1.0/60.0);
    al_start_timer(timer);

    queue = al_create_event_queue();
    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    while (!end){

    }
}
