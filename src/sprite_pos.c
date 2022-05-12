/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** sprite_pos.c
*/

#include "rpg.h"

void text_pos2(window_t *window, asset_t *asset)
{
    (void)window;
    sfText_setPosition(asset->text5, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 200});
    sfText_setPosition(asset->text6, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 250});
    sfText_setPosition(asset->text16, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 200});
    sfText_setPosition(asset->text17, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 250});
    sfText_setPosition(asset->text14, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 200});
    sfText_setPosition(asset->text15, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 250});
}

void text_pos(window_t *window, asset_t *asset)
{
    (void)window;
    sfText_setPosition(asset->text1, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 150});
    sfText_setPosition(asset->text2, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 200});
    sfText_setPosition(asset->text3, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 250});
    sfText_setPosition(asset->text4, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 150});
    sfText_setPosition(asset->text7, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 150});
    sfText_setPosition(asset->text8, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 200});
    sfText_setPosition(asset->text9, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 250});
    sfText_setPosition(asset->text10, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 150});
    sfText_setPosition(asset->text11, (sfVector2f){asset->player.p_x - 430,
    asset->player.p_y + 150});
    text_pos2(window, asset);
}

void sprite_text_pos(window_t *window, asset_t *asset)
{
    (void)window;
    sfSprite_setPosition(asset->bckg_text.sprite, (sfVector2f)
    {asset->player.p_x - 535, asset->player.p_y + 110});
}

void sprite_life_pos(asset_t *asset)
{
    sfSprite_setPosition(asset->life_bar.sprite, (sfVector2f)
    {asset->player.p_x - 444, asset->player.p_y - 485});
    sfSprite_setPosition(asset->heart_bar.sprite, (sfVector2f)
    {asset->player.p_x - 500, asset->player.p_y - 486});
}

void player_pos(asset_t *asset)
{
    sfSprite_setTextureRect(asset->player.sprite, asset->player.rect);
    sfSprite_setPosition(asset->player.sprite, (sfVector2f)
    {asset->player.p_x, asset->player.p_y});
}