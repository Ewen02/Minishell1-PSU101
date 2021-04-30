/*
** EPITECH PROJECT, 2020
** my_cd
** File description:
** //
*/

#include "my_src.h"

static char **change_env(env_t *envi, char *str)
{
    for (int i = 0; envi->tab[i]; i++)
        if (my_strncmp(envi->tab[i], "PWD", 3) == 0)
            envi->tab[i] = my_strdup(str);
    return envi->tab;
}

void my_cd(env_t *envi, char **str)
{
    int size = my_strlen(str[1]);
    char *pwd = malloc(sizeof(char) * (size + 2));
    char *path = malloc(sizeof(char) * 256);

    pwd = anti_backn_string(str[1]);
    chdir(pwd);
    getcwd(path, 256);
    path = my_strcat("PWD=", path);
    if (my_strcmp(pwd, "..") == 0 || my_strcmp(pwd, "../") == 0)
        envi->tab = change_env(envi, path);
    else
        envi->tab = change_env(envi, path);
}

/*
Gérer : seulement CD -> go to "HOME"
        'cd -' -> return dans le folder avant (print le PATH)
*/