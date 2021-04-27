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

// int main(int ac, char **av, char **env)
// {
//     if (check_error(ac) != 0)
//         return 84;
//     if (new_shell(env) != 0)
//         return 84;
//     return 0;
// }

#include <stdlib.h>
#include <unistd.h>
 
int main(void) 
{
    char S[255];

    chdir("/B-FRE-200-REN-2-1-B2VENTE-ewen.le-quere/");
    getcwd(S,255);
    printf("Repertoire courante = %s\n",S);
    return 0;
}