/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** mobs.c
*/

#include "rpg.h"
#include "stdio.h"

int clock_move(sfClock *clk)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(clk)) >=
    frame_lim) {
        sfClock_restart(clk);
        return 1;
    }
    return 0;
}

void interect_move(asset_t *mobs)
{
    static int move = 44;
    static int f_count = 0;

    if (f_count++ >= 9) {
        mobs->rect_mobs_d.left += move;
        if (mobs->rect_mobs_d.left >= 70 || mobs->rect_mobs_d.left <= 0)
            move *= -1;
        sfSprite_setTextureRect(mobs->mobs_d.sprite, mobs->rect_mobs_d);
        f_count = 0;
    }
}

void move_mobs1(asset_t *mobs)
{
    sfVector2f p_mobs = sfSprite_getPosition(mobs->mobs_d.sprite);
    sfVector2f checkpoint[2] = {{200, 590}, {200, 500}};
    static int repeat = 0;

    if (p_mobs.y != checkpoint[0].y && repeat == 0) {
        sfSprite_setTexture(mobs->mobs_d.sprite, mobs->mobs_d.texture,
        sfFalse);
        sfSprite_setTextureRect(mobs->mobs_d.sprite, mobs->rect_mobs_d);
        p_mobs.y += 10;
        sfSprite_setPosition(mobs->mobs_d.sprite, (sfVector2f){200, p_mobs.y});
        if (p_mobs.y == checkpoint[0].y)
            repeat = 1;
    } else if (p_mobs.y != checkpoint[1].y && repeat == 1) {
        sfSprite_setTexture(mobs->mobs_d.sprite, mobs->mobs_up.texture,
        sfFalse);
        p_mobs.y -= 10;
        sfSprite_setPosition(mobs->mobs_d.sprite, (sfVector2f){200, p_mobs.y});
        if (p_mobs.y == checkpoint[1].y)
            repeat = 0;
    }
}