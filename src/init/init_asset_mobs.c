/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_asset_mobs.c
*/

#include "rpg.h"

void create_mobs_down_up(asset_t *mobs)
{
    mobs->rect_mobs_d = (sfIntRect){0, 0, 44, 50};
    mobs->mobs_d.sprite = sfSprite_create();
    sfSprite_setScale(mobs->mobs_d.sprite, V2F(0.3, 0.3));
    mobs->mobs_d.texture = sfTexture_createFromFile("./assets/mobs1_d.png",
    NULL);
    mobs->mobs_up.texture = sfTexture_createFromFile("./assets/mobs1_up.png",
    NULL);
    sfSprite_setPosition(mobs->mobs_d.sprite, (sfVector2f){750, 200});
}