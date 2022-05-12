/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** main
*/

#include "./include/rpg.h"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    asset_t asset = {NULL};
    map_t *map = init_list_map();
    music_t *music = malloc(sizeof(music_t));
    window_t *window = malloc(sizeof(window_t));
    stats_t *stats = malloc(sizeof(stats_t));

    init_window(window);
    window->weapon = init_gun(&asset);
    window->no_destroy_game = 0;
    window->destroy_game = 0;
    while (sfRenderWindow_isOpen(window->window) && window->phase > 0) {
        mouse_window(window);
        launch_menu(window, &asset, music);
        launch_setting(window, &asset, music);
        launch_pause(window, &asset, music);
        launch_game(window, &asset, music, stats, map);
    }
    destroy_weapon(window->weapon);
    sfRenderWindow_destroy(window->window);
    destroy_list(map);
    free(window);
    return 0;
}