/*
** EPITECH PROJECT, 2020
** my_shell
** File description:
** //
*/

#define _GNU_SOURCE
#include "../../include/my_src.h"

static char **cpy(char **str)
{
    char **result = malloc(sizeof(char *) * my_strlen(*str) + 1);

    for (int i = 0; str[i] != NULL; i++)
        result[i] = str[1];
    return result;
}

static char *cpy2(char **str)
{
    char *result = malloc(sizeof(char *) * my_strlen(*str) + 1);

    for (int i = 0; str[i] != NULL; i++)
        result = str[0];
    return result;
}

int new_shell(char **env)
{
    char *buffer;
    size_t bufsize = 32;
    buffer = (char *)malloc(bufsize * sizeof(char));

    while (1) {
        my_printf("ewen@ewen-pc$>");
        if (getline(&buffer, &bufsize, stdin) == -1)
            return 0;
        else {
            diff_bin_cmd(env, buffer);
        }
    }
}