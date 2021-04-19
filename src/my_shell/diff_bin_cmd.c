/*
** EPITECH PROJECT, 2020
** my_shell
** File description:
** //
*/

#define _GNU_SOURCE
#include "../../include/my_src.h"

void diff_bin_cmd(char **env, char *buffer)
{
    char **str1 = NULL;
    int enviro = my_strcmp(buffer, "env\n");
    int exi = my_strcmp(buffer, "exit\n");
    int setenv = my_strcmp(buffer, "setenv\n");

    if (enviro == 0)
        my_env(env);
    else if (setenv == 0)
        my_setenv(env);
    else if (exi == 0)
        exit(0);
    else {
        str1 = split_getlin(buffer);
        check_command(env, str1);
    }
}