/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_views
*/

#include "rpg.h"

void init_views(window_t *window)
{
    sfVector2f size = {0, 0};

    window->global_window = sfView_create();
    size.x = sfRenderWindow_getSize(window->window).x;
    size.y = sfRenderWindow_getSize(window->window).y;
    sfView_setSize(window->global_window, (sfVector2f){size.x, size.y});
    sfView_setCenter(window->global_window, (sfVector2f)
    {size.x / 2, size.y / 2});
    window->view = sfView_create();
    sfView_setSize(window->view, (sfVector2f){sfView_getSize(window->view).x,
    sfView_getSize(window->view).y - 300});
}