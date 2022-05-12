/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int64_t get_tol(char *str);
int my_getnbr(char const *str);
int my_char_isalpha(char const c);
int my_char_isnum(char const c);
char **my_stoa_delim(char const *str, char delimiter);
int fs_open_file(char const *filepath);
void free_array(char **arg);

#endif /* !MY_H_ */