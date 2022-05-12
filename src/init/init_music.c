/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_music
*/

#include "rpg.h"

void init_music_menu(music_t *music)
{
    music->menu_song = sfMusic_createFromFile("./assets/musics/menu_song.ogg");
    sfMusic_play(music->menu_song);
    sfMusic_setVolume(music->menu_song, 10);
    sfMusic_setLoop(music->menu_song, sfTrue);
}

void init_music_game(music_t *music)
{
    music->game_song = sfMusic_createFromFile("./assets/musics/game_song.ogg");
    sfMusic_play(music->game_song);
    sfMusic_setVolume(music->game_song, 20);
    sfMusic_setLoop(music->game_song, sfTrue);
}

void init_music_pause(music_t *music)
{
    music->pause_song =
        sfMusic_createFromFile("./assets/musics/pause_song.ogg");
    sfMusic_play(music->pause_song);
    sfMusic_setVolume(music->game_song, 20);
    sfMusic_setLoop(music->pause_song, sfTrue);
}