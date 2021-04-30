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
    int exi2 = my_strcmp(str1[0], "exit");
    int setenv = my_strcmp(str1[0], "setenv");
    int setenv2 = my_strcmp(str1[0], "setenv\n");
    int unsetenv = my_strcmp(str1[0], "unsetenv");
    int unsetenv2 = my_strcmp(str1[0], "unsetenv\n");
    int cdd = my_strcmp(str1[0], "cd\n");
    int cdd2 = my_strcmp(str1[0], "cd");

    if (enviro == 0)
        my_env(envi);
    else if (setenv == 0 || setenv2 == 0)
        my_setenv(envi, str1);
    else if (unsetenv == 0 || unsetenv2 == 0)
        my_unsetenv(envi, str1);
    else if (exi == 0 || exi2 == 0)
        my_exit(str1);
    else if (cdd == 0 || cdd2 == 0)
        my_cd(envi, str1);
    else
        check_command(envi->tab, str1);
}