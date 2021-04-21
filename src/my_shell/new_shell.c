/*
** EPITECH PROJECT, 2020
** my_shell
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

int new_shell(char **env)
{
    env_t envi = {0};
    envi.tab = env;
    char *buffer = NULL;
    size_t bufsize = 32;

    buffer = (char *)malloc(bufsize * sizeof(char));
    while (1) {
        my_printf("ewen@ewen-pc$>");
        if (getline(&buffer, &bufsize, stdin) == -1)
            return 0;
        else {
            diff_bin_cmd(&envi, buffer);
        }
    }
    return 0;
}