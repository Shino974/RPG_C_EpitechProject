##
## EPITECH PROJECT, 2021
## B-MUL-200-RUN-2-1-myrpg-yann.joubert
## File description:
## Makefile
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra -pedantic -L./lib/my/ -lmy -l csfml-audio -l csfml-graphics -l csfml-window -l csfml-system -I./include -g3

SRC	=	main.c							\
		src/move_player.c				\
		src/my_getstr.c					\
		src/window.c					\
		src/my_utils.c					\
		src/destroy/destroy_asset1.c	\
		src/destroy/destroy_asset2.c	\
		src/destroy/destroy_music.c		\
		src/destroy/destroy_all_game.c	\
		src/display/display_asset1.c	\
		src/display/display_asset2.c	\
		src/display/display_box.c		\
		src/display/display_lose.c		\
		src/display/display_inv_slots.c	\
		src/init/init_asset1.c 			\
		src/init/init_asset2.c 			\
		src/init/init_asset3.c 			\
		src/init/init_music.c			\
		src/init/init_asset_pnj.c		\
		src/init/init_stats.c			\
		src/init/init_views.c			\
		src/init/init_all.c				\
		src/init/init_asset_mobs.c		\
		src/lose_life.c					\
		src/mouse.c						\
		src/pnj.c						\
		src/phase/game.c 				\
		src/map/data_arrays.c \
		src/map/map.c \
		src/map/setpos.c \
		src/map/vertexarrays.c \
		src/init/init_cursor.c	\
		src/aim/aim.c \
		src/phase/setting.c				\
		src/phase/menu.c 				\
		src/phase/pause.c				\
		src/button/menu_button.c		\
		src/button/pause_button.c		\
		src/zone_text_pnj.c				\
		src/init/init_text.c 			\
		src/chest.c						\
		src/core_game.c					\
		src/sprite_pos.c \
		src/anime_mobs.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

all:
	make -j build -C .

build:
	make -C ./lib/my/
	make -j make_obj -C .
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)


make_obj: $(OBJ)

clean:
	make clean -C ./lib/my/
	rm -rf *.o
	find . \( -name "*~" -o -name "*.o" -o -name "vgcore.*" \) -delete

fclean: clean
	make fclean -C ./lib/my/
	rm -f $(NAME) $(OBJ)

re: fclean all