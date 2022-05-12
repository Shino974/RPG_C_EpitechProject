/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** window
*/

#ifndef WINDOW_H_
#define WINDOW_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>

#define frame_lim 1000/60

typedef struct window {
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mouse;
    int phase;
    int status;
    sfView const *rwv;
    sfView *view;
    sfView *view_map;
    sfView *view_entity;
    weapons_t *weapon;
    sfView *global_window;
    int if_music;
    int no_destroy_game;
    int destroy_game;
    sfVector2f view_vector;
    sfClock *clock;
    int win;
    int talk_win;
    int draw_win;
    int lose;
}window_t;

#endif /* !WINDOW_H_ */