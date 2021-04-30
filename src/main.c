/*
** EPITECH PROJECT, 2020
** main
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

static int check_error(int ac)
{
    if (ac != 1)
        return 84;
    return 0;
}

int main(int ac, __attribute__((unused))char **av, char **env)
{
    if (check_error(ac) != 0)
        return 84;
    if (new_shell(env) != 0)
        return 84;
    return 0;
}