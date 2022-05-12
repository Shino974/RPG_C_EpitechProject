/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** asset.h
*/

#ifndef ASSET_H_
#define ASSET_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"
#include "text.h"
#include "map.h"
#include "cursor.h"

typedef struct asset {
    sprite_t bckg;
    sprite_t background;
    sprite_t life_bar;
    sprite_t heart_bar;
    sprite_t bckg_setting;
    sprite_t bckg_pause;
    sprite_t play_btn;
    sprite_t setting_btn;
    sprite_t quit_btn;
    sprite_t player;
    sprite_t pnj1;
    sprite_t pnj2;
    sprite_t pnj3;
    sprite_t pnj4;
    sprite_t pnj5;
    sprite_t bckg_text;
    sfFont *font;
    sfText *text1;
    sfText *text2;
    sfText *text3;
    sfText *text4;
    sfText *text5;
    sfText *text6;
    sfText *text7;
    sfText *text8;
    sfText *text9;
    sfText *text10;
    sfText *text11;
    sfText *text14;
    sfText *text15;
    sfText *text16;
    sfText *text17;
    sprite_t box;
    sprite_t on_off;
    text_t title;
    text_t title_settings;
    sfSprite *but_spt[20];
    sfTexture *but_txtr;
    sfText *but_txt[20];
    sfFont *font1;
    sprite_t chest;
    sprite_t chest_cure;
    sprite_t chest_inv;
    sprite_t inventory;
    sprite_t cursor;
    sprite_t inv_slots;
    sprite_t mobs_d;
    sfIntRect rect_mobs_d;
    sprite_t mobs_up;
    sfIntRect rect_mobs_up;
    sfClock *clock;
} asset_t;

#endif