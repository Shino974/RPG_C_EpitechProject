/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** rpg
*/

#ifndef RPG_H_
#define RPG_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include "sprite.h"
#include "player.h"
#include "enemies.h"
#include "weapons.h"
#include "bullets.h"
#include "window.h"
#include "asset.h"
#include "music.h"
#include "text.h"
#include "map.h"
#include <unistd.h>

#define TITLE "MY NEW SUPER UNICORN ZOMBIE KILLER 3D DELUXE EDITION++"

typedef struct game {
    stats_t *stats;
    window_t *window;
    asset_t *asset;
    enemies_t *enemies;
}game_t;

typedef struct Vector4_s
{
    float size_x;
    float size_y;
    float x;
    float y;
} Vector4_t;

struct tab
{
    void (*func)(game_t *game);
};

//window.c
void init_window(window_t *window);
void analyse_event(window_t *window, asset_t *asset,
    music_t *music, stats_t *stats);

//my_utils.c
sprite_t create_img(char *filename, sfVector2f pos, sfVector2f scale);
text_t create_txt(char *font_filename, char *text,
    sfVector2f pos, sfVector2f scale);
void destroy_st(sfSprite *sprite, sfTexture *texture);
void destroy_txt(sfText *txt, sfFont *font);

//init / init_asset.c
asset_t init_menu(void);
void init_bckg_game(asset_t *asset);
void init_player_game(asset_t *asset);
void init_music_menu(music_t *music);
void init_asset_button(asset_t *asset);
void init_setting(asset_t *asset);
void init_pause(asset_t *asset);
void init_music_settings(music_t *music);
void init_music_pause(music_t *music);
void init_music_game(music_t *music);
void init_view_game(window_t *window);

//init / init_asset_pnj.c
void init_pnj(asset_t *pnj);

//init / init_asset_pnj.c
void init_pnj(asset_t *pnj);
void all_text(asset_t *pnj);
void bckg_text(asset_t *pnj);

//init / init_all_asset.c
void init_all_assets(asset_t *asset);

//init stats
void init_stats(stats_t *stats);
void init_icon(stats_t *stats);
void init_weapon(stats_t *stats);
void init_serum(stats_t *stats);
char *my_getstr(int nb, char *str);

//init views
void init_views(window_t *window);

//display / display_asset1.c
void display_asset_button(window_t *window, asset_t *asset);
void display_box(window_t *window, asset_t *asset);
void display_box_on(window_t *window, asset_t *asset);
void display_box_off(window_t *window, asset_t *asset);
void display_asset_menu(window_t *window, asset_t *asset);
void display_asset_setting(window_t *window, asset_t *asset);
void display_asset_game(window_t *window, asset_t *asset, stats_t *stats,
map_t *map);
void display_icon(stats_t *stats, window_t *window);
void display_stats(stats_t *stats, window_t *window);

//display_lose
void disp_end(window_t *win, music_t *music);

void display_asset_pause(window_t *window, asset_t *asset);

//destroy /destroy_asset1.c
void destroy_asset_menu(asset_t *asset);
void destroy_music_menu(music_t *music);
void destroy_asset_game(asset_t *asset);
void destruct_text_pnj(asset_t *pnj);
void destroy_asset_setting(asset_t *asset);
void destroy_asset_button(asset_t *asset);
void destroy_music_setting(music_t *music);
void destroy_stats(stats_t *stats);
void destroy_asset_pause(asset_t *asset);
void destroy_music_pause(music_t *music);
void destroy_music_game(music_t *music);

//settings
void launch_setting(window_t *window, asset_t *asset, music_t *music);
void analyse_event_setting(window_t *win, asset_t *asset, char **text, int *p);

//pause
void launch_pause(window_t *window, asset_t *asset, music_t *music);
void analyse_event_pause(window_t *win, asset_t *asset,
    char **text, int *phase);

//game.c
void launch_game(window_t *window, asset_t *asset,
    music_t *music, stats_t *stats, map_t *map);

//menu.c
void analyse_event_menu(window_t *win, asset_t *asset,
    char **text, int *phase);
void launch_menu(window_t *window, asset_t *asset, music_t *music);

//mouse.c
void mouse_window(window_t *win);

//move_pl_ann.c
int move_down_left(asset_t *asset);
int move_left(asset_t *asset);
int move_right_up(asset_t *asset);
int move_up(asset_t *asset);

//pnj.c
void range_text(asset_t *asset, window_t *win);

//ath
void init_life(asset_t *asset);
void init_heart(asset_t *asset);
void init_ath(asset_t *asset);
void button(asset_t *asset, window_t *window, char *text,
    Vector4_t pos, int phase);

//player_lose_life
void lose_life(window_t *window, asset_t *asset);

//inv slots
void init_inv_slots(asset_t *asset);

//disp_inv_slots
void disp_inv_slots(asset_t *asset, stats_t *stats, window_t *window);

void init_button(asset_t *asset, char **text, Vector4_t pos);
void init_button2(asset_t *asset, char **text, Vector4_t pos);
void draw_button(window_t *win, asset_t *asset, char **text);
void check_button(window_t *win, asset_t *asset, char **text, int *phase);
void destroy_button(asset_t *asset, char **text);

//pnj.c
void hit_box_text_green(asset_t *asset, window_t *win);
void hit_box_text_black(asset_t *asset, window_t *win);
void hit_box_text_purple1(asset_t *asset, window_t *win);
void hit_box_text_orange(asset_t *asset, window_t *win, stats_t *stats);
void hit_box_text_purple2(asset_t *asset, window_t *win);

//zone_text.c
void zone_text(asset_t *asset, window_t *win, stats_t *stats);

//init / init_text.c
void text_green_pnj(asset_t *pnj);
void text_black_pnj(asset_t *pnj);
void text_purple_pnj1(asset_t *pnj);
void text_orange_pnj(asset_t *pnj);
void text_purple_pnj2(asset_t *pnj);

//chest.c
void create_chest(asset_t *chest);
void open_chest(asset_t *chest, window_t *win, stats_t *stats);
void open_chest_cure(asset_t *chest, window_t *win, stats_t *stats);

//core_game.c
void init_game(window_t *window, asset_t *asset,
    music_t *music, stats_t *stats, map_t *map);

//destroy / destroy_all_game.c
void destroy_all_game(asset_t *asset, stats_t *stats, map_t *map);

//sprite_pos.c
void sprite_text_pos(window_t *window, asset_t *asset);
void sprite_life_pos(asset_t *asset);
void player_pos(asset_t *asset);
void text_pos(window_t *window, asset_t *asset);

//init / init_asset_mobs
void create_mobs_down_up(asset_t *mobs);

//anime_mobs.c
int clock_move(sfClock *clk);
void interect_move(asset_t *mobs);
void move_mobs1(asset_t *mobs);

//collision.c
void hit_box_mobs_player(asset_t *mobs, window_t *win);

//aim.c
#define V2F(x, y) (sfVector2f){x, y}
#define V2I(x, y) (sfVector2i){x, y}

//map
void create_map(layers_t *lay);
void draw_map(sfRenderWindow *win, map_t *map);
char **retrieve_map(char *filepath);
void set_pos(sfVertex *quad, layers_t *l, int tu, int tv);
void set_textcordsvertex(sfVertex *quad, layers_t *l, int tu, int tv);
void set_textcordsvertex_v(sfVertex *quad, layers_t *l, int tu, int tv);
void set_textcordsvertex_h(sfVertex *quad, layers_t *l, int tu, int tv);
void set_textcordsvertex_d(sfVertex *quad, layers_t *l, int tu, int tv);
map_t *init_list_map(void);
void destroy_list(map_t *map);
void compare_id(sfVertex *quad, layers_t *lay, int i, int j);
int64_t *get_map(char *filepath, int h, int w);

//cursor
cursor_t *init_cursor(void);
void destroy_cursor(cursor_t *cursor);
void cursor_phase(int phase, cursor_t *curs, sfRenderWindow *win);
void follow_cursor(sprite_t cursor, sfRenderWindow *window);

//weapon
weapons_t *init_gun(asset_t *asset);
void destroy_weapon(weapons_t *weapon);
void draw_weapons(asset_t *asset, window_t *win);
void reset_bullet(weapons_t *weapon);
bullets_t *create_bullet(void);
void shoot_bullet(window_t *win);

#define CREATE_TEXT(filepath, status) sfTexture_createFromFile(filepath, status)
#define IRECT(l, t, h, w) (sfIntRect){l, t, h, w}
#define KEYP(key) sfKeyboard_isKeyPressed(key)
#define V2U(x, y) (sfVector2u){x, y}
#define STOA_D(str, delim) my_stoa_delim(str, delim)

#endif /* !RPG_H_ */