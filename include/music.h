/*
** EPITECH PROJECT, 2021
** *
** File description:
** music
*/

#ifndef MUSIC_H_
#define MUSIC_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>

typedef struct music {
    sfMusic *menu_song;
    sfMusic *setting_song;
    sfMusic *pause_song;
    sfMusic *game_song;
    sfMusic *click_sound;
}music_t;

#endif /* !MUSIC_H_ */
