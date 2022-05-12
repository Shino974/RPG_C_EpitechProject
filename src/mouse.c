/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** mouse.c
*/

#include "rpg.h"

void mouse_window(window_t *win)
{
    win->mouse = sfMouse_getPositionRenderWindow(win->window);
    win->rwv = sfRenderWindow_getView(win->window);
    win->mouse.x = sfRenderWindow_mapPixelToCoords(win->window, win->mouse,
    win->rwv).x;
    win->mouse.y = sfRenderWindow_mapPixelToCoords(win->window, win->mouse,
    win->rwv).y;
}