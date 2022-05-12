/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** chest.c
*/

#include "rpg.h"

void create_chest(asset_t *chest)
{
    chest->chest = create_img("./assets/chest.png", (sfVector2f){360, 500},
    (sfVector2f){1, 1});
    chest->chest_cure = create_img("./assets/chest.png", (sfVector2f)
    {200, 600},
    (sfVector2f){1, 1});
}

void open_chest(asset_t *chest, window_t *win, stats_t *stats)
{
    (void)win;
    sfFloatRect pos_player = sfSprite_getGlobalBounds(chest->player.sprite);
    sfFloatRect pos_chest = sfSprite_getGlobalBounds(chest->chest.sprite);
    static int open = 0;

    if (sfFloatRect_intersects(&pos_chest, &pos_player, NULL))
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            open = 1;
            stats->got_weapon = 1;
            stats->dps = 10;
        }
    if (open == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyF) ||
        sfFloatRect_intersects(&pos_chest, &pos_player, NULL) == sfFalse)
            open = 0;
    }
}

void open_chest_cure(asset_t *chest, window_t *win, stats_t *stats)
{
    (void)win;
    sfFloatRect pos_player = sfSprite_getGlobalBounds(chest->player.sprite);
    sfFloatRect pos_chest = sfSprite_getGlobalBounds(chest->chest_cure.sprite);
    static int open = 0;

    if (sfFloatRect_intersects(&pos_chest, &pos_player, NULL))
        if (sfKeyboard_isKeyPressed(sfKeyE)) {
            open = 1;
            stats->got_cure = 1;
            stats->dps = 10;
        }
    if (open == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyF) ||
        sfFloatRect_intersects(&pos_chest, &pos_player, NULL) == sfFalse)
            open = 0;
    }
}