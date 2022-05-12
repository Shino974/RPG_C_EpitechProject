/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_asset2
*/

#include "rpg.h"

void init_life(asset_t *asset)
{
    asset->life_bar.sprite = sfSprite_create();
    asset->life_bar.texture = sfTexture_createFromFile("./assets/life_bar.png",
    NULL);
    sfSprite_setTexture(asset->life_bar.sprite, asset->life_bar.texture,
    sfTrue);
    asset->life_bar.rect.top = 0;
    asset->life_bar.rect.left = 0;
    asset->life_bar.rect.width = 49;
    asset->life_bar.rect.height = 17;
    sfSprite_setTextureRect(asset->life_bar.sprite, asset->life_bar.rect);
    sfSprite_setScale(asset->life_bar.sprite, (sfVector2f){4, 4});
}

void init_heart(asset_t *asset)
{
    asset->heart_bar.sprite = sfSprite_create();
    asset->heart_bar.texture = sfTexture_createFromFile
    ("./assets/heart_bar.png", NULL);
    sfSprite_setTexture(asset->heart_bar.sprite, asset->heart_bar.texture,
    sfTrue);
    sfSprite_setScale(asset->heart_bar.sprite, (sfVector2f){4, 4});
    sfSprite_setPosition(asset->heart_bar.sprite, (sfVector2f){0, 0});
}

void init_ath(asset_t *asset)
{
    init_life(asset);
    init_heart(asset);
}

void init_setting(asset_t *asset)
{
    asset->bckg_setting = create_img("./assets/test.png",
    (sfVector2f){0, 0}, (sfVector2f){2, 1.1});
    asset->box = create_img("./assets/box.png",
    (sfVector2f){1000, 677}, (sfVector2f){1, 1});
    asset->on_off = create_img("./assets/on_off.png",
    (sfVector2f){1, 1}, (sfVector2f){0.1, 0.1});
    asset->title_settings = create_txt("./assets/title.ttf", "SETTINGS",
    (sfVector2f){600, 300}, (sfVector2f){3.5, 3.5});
}

void init_pause(asset_t *asset)
{
    asset->bckg_pause = create_img("./assets/back_pause.jpg",
    (sfVector2f){1, 1}, (sfVector2f){0.555, 0.55});
}