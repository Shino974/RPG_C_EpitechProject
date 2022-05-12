/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** init_cursor
*/

#include "rpg.h"

cursor_t *init_cursor(void)
{
    cursor_t *cursor = malloc(sizeof(cursor_t));

    cursor->pos = V2I(0, 0);
    cursor->sprite = create_img("./assets/curs.png", V2F(0, 0), V2F(1, 1));
    sfSprite_setTextureRect(cursor->sprite.sprite, IRECT(0, 0, 30, 30));
    cursor->text_cross = CREATE_TEXT("./assets/curs.png", NULL);
    return cursor;
}

void follow_cursor(sprite_t cursor, sfRenderWindow *window)
{
    sfVector2i m_pos = sfMouse_getPositionRenderWindow(window);

    sfSprite_setPosition(cursor.sprite, V2F(m_pos.x - 30, m_pos.y - 27));
}

void cursor_phase(int phase, cursor_t *curs, sfRenderWindow *win)
{
    if (phase == 1) {
        sfSprite_setTexture(curs->sprite.sprite, curs->sprite.texture, sfTrue);
        sfSprite_setTextureRect(curs->sprite.sprite, IRECT(0, 0, 30, 30));
    }
    if (phase == 2) {
        sfSprite_setTexture(curs->sprite.sprite, curs->text_cross, sfTrue);
        sfSprite_setTextureRect(curs->sprite.sprite, IRECT(0, 0, 64, 64));
    }
    follow_cursor(curs->sprite, win);
}

void destroy_cursor(cursor_t *cursor)
{
    destroy_st(cursor->sprite.sprite, cursor->sprite.texture);
    sfTexture_destroy(cursor->text_cross);
    free(cursor);
}