/*
** EPITECH PROJECT, 2020
** my_shell
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

void diff_bin_cmd(env_t *envi, char *buffer)
{
    char **str1 = split_getlin(buffer);

    int enviro = my_strcmp(str1[0], "env\n");
    int exi = my_strcmp(str1[0], "exit\n");
    int setenv = my_strcmp(str1[0], "setenv");

    if (enviro == 0)
        my_env(envi);
    else if (setenv == 0)
        my_setenv(envi, str1);
    else if (exi == 0)
        exit(0);
    else {
        check_command(envi->tab, str1);
    }
}