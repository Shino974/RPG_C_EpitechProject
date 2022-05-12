/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** menu.c
*/

#include "rpg.h"

void launch_menu(window_t *window, asset_t *asset, music_t *music)
{
    static int status = 0;
    char *text[] = {"PLAY", "SETTINGS", "QUIT", NULL};
    int phases[] = {2, 3, -1};

    if (window->phase == 1 && status == 0) {
        *asset = init_menu();
        init_button(asset, text, (Vector4_t){80, 1.5, 900, 700});
        if (window->if_music == 0)
            init_music_menu(music);
        status = 1;
    }
    if (window->phase == 1 && status == 1) {
        analyse_event_menu(window, asset, text, phases);
        display_asset_menu(window, asset);
        draw_button(window, asset, text);
        sfRenderWindow_display(window->window);
    }
    if (window->phase != 1 && status == 1) {
        destroy_asset_menu(asset);
        destroy_button(asset, text);
        if (window->if_music == 0)
            destroy_music_menu(music);
        status = 0;
    }
}

void analyse_event_menu(window_t *win, asset_t *asset, char **text, int *phase)
{
    (void)asset;

    while (sfRenderWindow_pollEvent(win->window, &win->event)) {
        win->phase = (win->event.type == sfEvtClosed) ? (-1) : win->phase;
        check_button(win, asset, text, phase);
    }
}