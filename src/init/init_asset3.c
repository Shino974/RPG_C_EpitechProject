/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_asset3
*/

#include "rpg.h"

void init_inv_slots(asset_t *asset)
{
    asset->inv_slots = create_img("./assets/inv_slots.png",
    (sfVector2f){0, 0}, (sfVector2f){1, 1});
}