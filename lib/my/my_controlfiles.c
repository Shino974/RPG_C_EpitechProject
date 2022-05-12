/*
** EPITECH PROJECT, 2020
** BSQ
** File description:
** my_controlfiles
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int fs_open_file(char const *filepath)
{
    int file_descript = 0;

    file_descript = open(filepath, O_RDONLY);
    return file_descript;
}