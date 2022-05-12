/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** pause
*/

#include "rpg.h"

void launch_setting(window_t *window, asset_t *asset, music_t *music)
{
    (void)music;
    static int status = 0;
    char *text[] = {"MUSIC", "HOW TO PLAY", "BACK MENU", NULL};
    int phases[] = {9, 11, 1};

    if (window->phase == 3 && status == 0) {
        init_setting(asset);
        init_button(asset, text, (Vector4_t){80, 1.5, 900, 700});
        status = 1;
    }
    if (window->phase == 3 && status == 1) {
        analyse_event_setting(window, asset, text, phases);
        display_asset_setting(window, asset);
        draw_button(window, asset, text);
        display_box(window, asset);
        if (window->if_music == 1) {
            display_box_off(window, asset);
        } else if (window->if_music == 0) {
            display_box_on(window, asset);
        }
        sfRenderWindow_display(window->window);
    }
    if (window->phase != 3 && status == 1) {
        destroy_button(asset, text);
        destroy_asset_setting(asset);
        status = 0;
    }
}

void analyse_event_setting(window_t *win, asset_t *asset, char **text, int *p)
{
    while (sfRenderWindow_pollEvent(win->window, &win->event)) {
        win->phase = (win->event.type == sfEvtClosed) ? (-1) : win->phase;
        check_button(win, asset, text, p);
    }
}