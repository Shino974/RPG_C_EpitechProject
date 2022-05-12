/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_all.c
*/

#include "rpg.h"

void init_all_assets(asset_t *asset)
{
    init_bckg_game(asset);
    init_player_game(asset);
    create_chest(asset);
    create_mobs_down_up(asset);
    init_pnj(asset);
    init_ath(asset);
    init_inv_slots(asset);
}