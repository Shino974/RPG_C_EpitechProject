/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** move_pl_nn
*/

#include "rpg.h"

int move_up(asset_t *asset)
{
    if (asset->player.dir != 3) {
        asset->player.dir = 3;
        asset->player.rect.left = 0;
        asset->player.rect.top = 145;
    } else if (asset->player.dir == 3) {
        asset->player.rect.left += 48;
        if (asset->player.rect.left >= 144)
            asset->player.rect.left = 0;
        asset->player.p_y -= 20;
    }
    return asset->player.p_y;
}

int move_right_up(asset_t *asset)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (asset->player.dir != 2) {
            asset->player.dir = 2;
            asset->player.rect.left = 0;
            asset->player.rect.top = 96;
        } else if (asset->player.dir == 2) {
            asset->player.rect.left += 48;
            if (asset->player.rect.left >= 144)
                asset->player.rect.left = 0;
            asset->player.p_x += 20;
        }
    } else if (sfKeyboard_isKeyPressed(sfKeyUp))
        asset->player.p_y = move_up(asset);
    return 0;
}

int move_left(asset_t *asset)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        if (asset->player.dir != 1) {
            asset->player.dir = 1;
            asset->player.rect.left = 0;
            asset->player.rect.top = 48;
        } else if (asset->player.dir == 1) {
            asset->player.rect.left += 48;
            if (asset->player.rect.left >= 144)
                asset->player.rect.left = 0;
            asset->player.p_x -= 20;
        }
    }
    return asset->player.p_x;
}

int move_down_left(asset_t *asset)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (asset->player.dir != 0) {
            asset->player.dir = 0;
            asset->player.rect.left = 0;
            asset->player.rect.top = 0;
        } else if (asset->player.dir == 0) {
            asset->player.rect.left += 48;
            if (asset->player.rect.left >= 144)
                asset->player.rect.left = 0;
            asset->player.p_y += 20;
        }
    } else if (sfKeyboard_isKeyPressed(sfKeyLeft))
        asset->player.p_x = move_left(asset);
    return 0;
}