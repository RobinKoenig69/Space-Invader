#include "Game.c"

int main() {

    ALLEGRO_DISPLAY* display = NULL;
    ALLEGRO_EVENT_QUEUE* queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    ALLEGRO_EVENT event;

    ALLEGRO_BITMAP * SPACESHIP = NULL;
    ALLEGRO_BITMAP * EVIL_SPACESHIP = NULL;
    ALLEGRO_BITMAP * MENU_CHOICE_1 = NULL;
    ALLEGRO_BITMAP * MENU_CHOICE_2 = NULL;
    ALLEGRO_BITMAP * MENU_CHOICE_3 = NULL;
    ALLEGRO_BITMAP * MENU_BACKGROUND = NULL;

    PCOLORS Colors_Spaceship = MapColor();

    Mouse* Cursor = NULL;


    Init_Allegro();
    printf("erreur 1");
    //EVIL_SPACESHIP = al_load_bitmap("FILES\\EVIL_SPACESHIP.png");
    SPACESHIP = al_load_bitmap("..\\FILES\\SPACESHIP.png");
    MENU_CHOICE_1 = al_load_bitmap("..\\FILES\\ALLEGRO - Space-Invader - Menu 1.png");
    MENU_CHOICE_2 = al_load_bitmap("..\\FILES\\ALLEGRO - Space-Invader - Menu 2.png");
    MENU_CHOICE_3 = al_load_bitmap("..\\FILES\\ALLEGRO - Space-Invader - Menu 3.png");
    MENU_BACKGROUND = al_load_bitmap("..\\FILES\\MENU_BACKGROUND.png");
    Init_Allegro_Display(&display, 1920, 1080, "Space Invader");

    Set_Display_Refresh_Rate(&timer, 24);

    Init_Allegro_Event(&queue,&display,&timer);

    while (!end){
        while(Menu) {
            al_draw_scaled_bitmap(MENU_CHOICE_1, 0, 0 , al_get_bitmap_width(MENU_CHOICE_1), al_get_bitmap_height(MENU_CHOICE_1), 50, 200, 800, 200, 0  );
            al_draw_scaled_bitmap(MENU_CHOICE_2, 0, 0 , al_get_bitmap_width(MENU_CHOICE_2), al_get_bitmap_height(MENU_CHOICE_2), 50, 450, 1000, 200, 0 );
            al_draw_scaled_bitmap(MENU_CHOICE_3, 0, 0 , al_get_bitmap_width(MENU_CHOICE_3), al_get_bitmap_height(MENU_CHOICE_3), 50, 700, 1200, 200, 0 );
            al_draw_scaled_bitmap(MENU_BACKGROUND, 0, 0, al_get_bitmap_width(SPACESHIP), al_get_bitmap_height(SPACESHIP), 1000, 0, 1200, 600, 0);

            al_wait_for_event(queue, &event);

            if (event.mouse = )


            al_flip_display();
        }

        while (Game){

        }

        while (Credits){

        }
    }
}
