/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** pause
*/

#include "rpg.h"
#include "stdio.h"

void launch_pause(window_t *window, asset_t *asset, music_t *music)
{
    static int status = 0;
    char *text[] = {"BACK TO GAME", "BACK TO MENU", "QUIT GAME", NULL};
    int phases[] = {2, 1, -1};

    if (window->phase == 4 && status == 0) {
        init_pause(asset);
        init_button2(asset, text, (Vector4_t){80, 1.5, 900, 700});
        if (window->if_music == 0)
            init_music_pause(music);
        status = 1;
    }
    if (window->phase == 4 && status == 1) {
        analyse_event_pause(window, asset, text, phases);
        display_asset_pause(window, asset);
        draw_button(window, asset, text);
        sfRenderWindow_display(window->window);
    }
    if (window->phase != 4 && status == 1) {
        destroy_asset_pause(asset);
        destroy_button(asset, text);
        if (window->if_music == 0) {
            sfMusic_play(music->game_song);
            destroy_music_pause(music);
        }
        status = 0;
    }
}

void analyse_event_pause(window_t *win, asset_t *asset, char **text, int *phase)
{
    while (sfRenderWindow_pollEvent(win->window, &win->event)) {
        win->phase = (win->event.type == sfEvtClosed) ? (-1) : win->phase;
        check_button(win, asset, text, phase);
        if (sfKeyboard_isKeyPressed(sfKeyH)) {
            win->phase = 2;
        }
    }
}