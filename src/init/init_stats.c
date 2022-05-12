/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_stats
*/

#include "rpg.h"

void init_icon(stats_t *stats)
{
    sfTexture *texture = sfTexture_createFromFile("./assets/status.png", NULL);

    stats->icon.sprite = sfSprite_create();
    sfSprite_setTexture(stats->icon.sprite, texture, sfTrue);
    sfSprite_setPosition(stats->icon.sprite, (sfVector2f){190, 200});
}

void init_stats_txt(stats_t *stats)
{
    stats->stats_font = sfFont_createFromFile("./assets/Text.ttf");
    stats->stats_txt = sfText_create();
    sfText_setFont(stats->stats_txt, stats->stats_font);
    sfText_setCharacterSize(stats->stats_txt, 10);
}

void init_weapon(stats_t *stats)
{
    stats->weapon = create_img("./assets/weapon.png",
    (sfVector2f){0, 0}, (sfVector2f){1, 1});
    stats->got_weapon = 0;
}

void init_serum(stats_t *stats)
{
    stats->cure = create_img("./assets/serum.png",
    (sfVector2f){0, 0}, (sfVector2f){1, 1});
    stats->got_cure = 0;
}

void init_stats(stats_t *stats)
{
    stats->stats = create_img("./assets/little_stats.png", (sfVector2f){0, 0},
    (sfVector2f){1, 1});
    sfSprite_setScale(stats->stats.sprite,
    (sfVector2f){sfSprite_getScale(stats->stats.sprite).x / 2,
    sfSprite_getScale(stats->stats.sprite).y / 2});
    stats->str = NULL;
    stats->lvl = 1;
    stats->hp = 49;
    stats->dps = 5;
    stats->disp = 0;
    init_stats_txt(stats);
    init_weapon(stats);
    init_serum(stats);
}