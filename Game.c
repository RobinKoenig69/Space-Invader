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

void Init_Allegro(){
    assert(al_init());
    assert(al_init_primitives_addon());
    assert(al_install_keyboard());
    assert(al_init_image_addon());
}

void Init_Allegro_Display(ALLEGRO_DISPLAY **pdisplay, int X, int Y, char *pTitle){
    *pdisplay = al_create_display(X, Y);
    //al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
    al_set_window_title(*pdisplay, pTitle);
}

void Init_Allegro_Event(ALLEGRO_EVENT_QUEUE **pqueue, ALLEGRO_DISPLAY **pdisplay, ALLEGRO_TIMER **ptimer){
    *pqueue = al_create_event_queue();
    al_register_event_source(*pqueue, al_get_keyboard_event_source());
    printf("erreur 1");
    al_register_event_source(*pqueue, al_get_display_event_source(*pdisplay));
    printf("erreur 2");
    al_register_event_source(*pqueue, al_get_timer_event_source(*ptimer));
}

void Set_Display_Refresh_Rate(ALLEGRO_TIMER** pTimer, int RefreshRate){
    *pTimer = al_create_timer(1.0/RefreshRate);
    al_start_timer(*pTimer);
}