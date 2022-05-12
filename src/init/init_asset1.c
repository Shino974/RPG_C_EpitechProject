/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_assets1.c
*/

#include "rpg.h"

asset_t init_menu(void)
{
    asset_t asset = {NULL};

    asset.bckg = create_img("./assets/hub.png", (sfVector2f){0, 0},
    (sfVector2f){1.5, 1.5});
    asset.title = create_txt("./assets/title.ttf", TITLE, (sfVector2f)
    {100, 200}, (sfVector2f){1.5, 1.5});
    asset.font1 = sfFont_createFromFile("./assets/zombi.ttf");
    return asset;
}

void init_player_rect(asset_t *asset)
{
    asset->player.rect.top = 0;
    asset->player.rect.left = 0;
    asset->player.rect.width = 48;
    asset->player.rect.height = 48;
}

void init_bckg_game(asset_t *asset)
{
    asset->background = create_img("./assets/bckg.png", V2F(0, 0),
    (sfVector2f){1.5, 1.5});
}

void init_player_game(asset_t *asset)
{
    init_player_rect(asset);
    asset->player.sprite = sfSprite_create();
    asset->player.texture = sfTexture_createFromFile("./assets/player2.png",
    NULL);
    sfSprite_setTexture(asset->player.sprite, asset->player.texture, sfTrue);
    sfSprite_setTextureRect(asset->player.sprite, asset->player.rect);
    sfSprite_setScale(asset->player.sprite, V2F(0.35, 0.35));
}