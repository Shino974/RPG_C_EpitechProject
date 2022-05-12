/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** window
*/

#include "rpg.h"

void one_shot(asset_t *asset, window_t *win)
{
    sfFloatRect pos_gun = sfSprite_getGlobalBounds(win->weapon->gun.sprite);
    sfFloatRect pos_mob = sfSprite_getGlobalBounds(asset->mobs_d.sprite);

    if (sfFloatRect_intersects(&pos_gun, &pos_mob, NULL)) {
        sfSprite_setPosition(asset->mobs_d.sprite, V2F(-1000, -1000));
    }
}

void funct_clock(asset_t *asset)
{
    static int anim = 0;

    if (clock_move(asset->clock) == 1) {
        anim++;
        if (anim == 3) {
            anim = 0;
            move_down_left(asset);
            move_right_up(asset);
            interect_move(asset);
            move_mobs1(asset);
        }
    }
}

void analyse_event(window_t *window, asset_t *asset, music_t *music,
    stats_t *stats)
{
    while (sfRenderWindow_pollEvent(window->window, &window->event)) {
        if (window->event.type == sfEvtClosed) {
            sfRenderWindow_close(window->window);
            window->phase = -1;
        } else if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
            window->no_destroy_game = 1;
            if (window->if_music == 0)
                sfMusic_pause(music->game_song);
            window->phase = 4;
        }
        if (window->event.type == sfEvtMouseButtonPressed) {
            one_shot(asset, window);
        }
    }
    sfView_setCenter(window->view_map,
    sfSprite_getPosition(asset->player.sprite));
        if (sfKeyboard_isKeyPressed(sfKeyH))
            stats->disp = 1;
        else if (sfKeyboard_isKeyPressed(sfKeyJ))
            stats->disp = 0;
    funct_clock(asset);
}

void init_window(window_t *window)
{
    window->window = sfRenderWindow_create(sfVideoMode_getDesktopMode(),
        "MY_RPG", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window->window, 64);
    sfRenderWindow_setMouseCursorVisible(window->window, sfTrue);
    window->view_map = sfView_create();
    window->view_entity = sfView_create();
    sfView_setSize(window->view_map, V2F(250, 250));
    sfView_setSize(window->view_entity, V2F(820, 820));
    window->phase = 1;
    window->if_music = 0;
    window->win = 0;
    window->lose = 0;
}

void init_view_game(window_t *window)
{
    sfVector2f size = {0, 0};

    window->global_window = sfView_create();
    size.x = sfRenderWindow_getSize(window->window).x;
    size.y = sfRenderWindow_getSize(window->window).y;
    sfView_setSize(window->global_window, (sfVector2f){size.x, size.y});
    sfView_setCenter(window->global_window,
        (sfVector2f){size.x / 2, size.y / 2});
    window->view = sfView_create();
    window->view_vector = sfView_getSize(window->view);
    sfView_setSize(window->view, (sfVector2f){sfView_getSize(window->view).x,
    sfView_getSize(window->view).y - 300});
}