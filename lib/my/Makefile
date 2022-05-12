##
## EPITECH PROJECT, 2021
## Bootstrap
## File description:
## Makefile
##

CC = gcc

CFLAGS = -W -Werror -Wall -Wextra -g3

SRC =	my_char_isalpha.c	\
	my_char_isnum.c	\
	my_getnbr.c 	\
	my_controlfiles.c	\
	my_getnbr.c	\
	my_stoa_delim.c	\
	free_array.c

OBJ    =    $(SRC:.c=.o)

NAME    =    libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
