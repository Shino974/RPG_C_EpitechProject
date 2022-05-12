/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** display_lose
*/

#include "rpg.h"

void disp_end(window_t *win, music_t *music)
{
    (void)music;
    sfFont *font = sfFont_createFromFile("./assets/zombi.ttf");
    sfText *text = sfText_create();

    sfText_setFont(text, font);
    if (win->lose == 1) {
        sfText_setString(text, "YOU ARE DEAD !\n");
    } else if (win->win == 1) {
        sfText_setString(text, "YOU SAVED EARTH !\n");
    }
    sfText_setCharacterSize(text, 80);
    sfText_setPosition(text,
    (sfVector2f){sfRenderWindow_getSize(win->window).x / 2 - 300,
    sfRenderWindow_getSize(win->window).y / 2 - 300});
    sfRenderWindow_clear(win->window, sfBlack);
    sfRenderWindow_drawText(win->window, text, NULL);
    sfRenderWindow_display(win->window);
    sfFont_destroy(font);
    sfText_destroy(text);
}