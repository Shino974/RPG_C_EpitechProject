/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_asset_pnj.c
*/

#include "rpg.h"

void all_text(asset_t *pnj)
{
    text_green_pnj(pnj);
    text_black_pnj(pnj);
    text_purple_pnj1(pnj);
    text_purple_pnj2(pnj);
    text_orange_pnj(pnj);
}

void bckg_text(asset_t *pnj)
{
    pnj->bckg_text = create_img("./assets/text.png", (sfVector2f){50, 887},
    (sfVector2f){0.32, 0.25});
}

void init_pnj(asset_t *pnj)
{
    pnj->pnj1 = create_img("./assets/all_sheet/png_1_left.png", (sfVector2f)
    {360, 200}, (sfVector2f){0.6, 0.6});
    pnj->pnj2 = create_img("./assets/all_sheet/png_2_left.png", (sfVector2f)
    {360, 280}, (sfVector2f){0.6, 0.6});
    pnj->pnj3 = create_img("./assets/all_sheet/png_3_left.png", (sfVector2f)
    {490, 350}, (sfVector2f){0.6, 0.6});
    pnj->pnj4 = create_img("./assets/all_sheet/png_4_left.png", (sfVector2f)
    {550, 220}, (sfVector2f){0.6, 0.6});
    pnj->pnj5 = create_img("./assets/all_sheet/png_5_left.png", (sfVector2f)
    {650, 750}, (sfVector2f){0.6, 0.6});
    all_text(pnj);
    bckg_text(pnj);
}