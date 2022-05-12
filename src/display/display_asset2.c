/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** display_asset1.c
*/

#include "rpg.h"

void display_icon(stats_t *stats, window_t *window)
{
    sfText_setString(stats->stats_txt, "Press h to display stats:");
    sfText_setPosition(stats->stats_txt,
    (sfVector2f){0, sfRenderWindow_getSize(window->window).y / 7});
    sfText_setCharacterSize(stats->stats_txt, 15);
    sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
    sfText_setString(stats->stats_txt, "Press j to hide stats:");
    sfText_setPosition(stats->stats_txt,
    (sfVector2f){0, sfRenderWindow_getSize(window->window).y / 6});
    sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
    sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
    sfText_setString(stats->stats_txt, "Press e to open chest:");
    sfText_setPosition(stats->stats_txt,
    (sfVector2f){0, sfRenderWindow_getSize(window->window).y / 5});
    sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
    sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
}

void display_stats(stats_t *stats, window_t *window)
{
    if (stats->disp == 1) {
        sfSprite_setPosition(stats->stats.sprite, (sfVector2f){0, 300});
        sfRenderWindow_drawSprite(window->window, stats->stats.sprite, NULL);
        sfText_setString(stats->stats_txt, my_getstr(stats->lvl, stats->str));
        sfText_setPosition(stats->stats_txt, (sfVector2f){100, 330});
        sfText_setCharacterSize(stats->stats_txt, 30);
        sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
        sfText_setString(stats->stats_txt, my_getstr(stats->hp, stats->str));
        sfText_setPosition(stats->stats_txt,
        (sfVector2f){100, 360});
        sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
        sfText_setString(stats->stats_txt, my_getstr(stats->dps, stats->str));
        sfText_setPosition(stats->stats_txt, (sfVector2f){100, 390});
        sfRenderWindow_drawText(window->window, stats->stats_txt, NULL);
    }
}

void display_asset_menu(window_t *window, asset_t *asset)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_drawSprite(window->window, asset->bckg.sprite, NULL);
    sfRenderWindow_drawText(window->window, asset->title.text, NULL);
}

void display_asset_setting(window_t *window, asset_t *asset)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_drawSprite(window->window,
    asset->bckg_setting.sprite, NULL);
    sfRenderWindow_drawText(window->window, asset->title_settings.text, NULL);
}