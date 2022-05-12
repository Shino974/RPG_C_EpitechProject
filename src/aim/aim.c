/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** aim
*/

#include "rpg.h"

void draw_weapons(asset_t *asset, window_t *win)
{
    (void)asset;
    sfVector2f pos = sfSprite_getPosition(asset->player.sprite);

    sfSprite_setPosition(win->weapon->gun.sprite, V2F(pos.x + 10, pos.y + 10));
    sfRenderWindow_drawSprite(win->window, win->weapon->gun.sprite, NULL);
}

weapons_t *init_gun(asset_t *asset)
{
    sfVector2f pos = {0, 0};
    weapons_t *weapon = malloc(sizeof(weapons_t));

    if (asset->player.sprite != NULL)
        pos = sfSprite_getPosition(asset->player.sprite);
    weapon = malloc(sizeof(weapons_t));
    weapon->gun = create_img("./assets/sword.png", pos, V2F(0.01, 0.01));
    return weapon;
}

void destroy_weapon(weapons_t *weapon)
{
    destroy_st(weapon->gun.sprite, weapon->gun.texture);
    free(weapon);
}