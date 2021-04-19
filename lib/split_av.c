/*
** EPITECH PROJECT, 2020
** bootstrap minishell
** File description:
** task_04
*/

#include "../include/include.h"
#include <string.h>

char **split_av(char *str)
{
    char **av;
    int str_nb = 1;

    for (int i = 0; str[i]; i++)
        if (str[i] == ' ')
            str_nb++;
    av = malloc(sizeof(char *) * str_nb + 1);
    av[0] = malloc(sizeof(char) * strlen(str));
    for (int i = 0, j = 1, str_size = 0; str[i] != '\0'; i++)
    {
        str_size++;
        if (str[i] == ' ')
        {
            av[j] = malloc(sizeof(char) * str_size + 2);
            j++, str_size = 0;
        }
    }
    for (int i = 0, j = 0, k = 0; str[i] != '\0'; i++, k++)
    {
        if (str[i] == ' ')
            j++, k = 0, i++;
        av[j][k] = str[i];
        av[j][k + 1] = '\0';
    }
    return av;
}
