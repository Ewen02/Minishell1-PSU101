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

static char *go_home(env_t *envi)
{
    char **home = NULL;

    for (int i = 0; envi->tab[i]; i++)
        if (my_strncmp(envi->tab[i], "HOME", 4) == 0)
            home = my_str_to_tab(envi->tab[i], '=');
    return home[1];
}

void my_cd(env_t *envi, char **str)
{
    int sizetab = my_strlentab(str);
    char *pwd = malloc(sizeof(char) * 256);
    char *path = malloc(sizeof(char) * 256);
    char *home = malloc(sizeof(char) * 256);

    getcwd(path, 256);
    path = my_strcat("PWD=", path);

    if (sizetab == 2) {
        pwd = anti_backn_string(str[1]);
        chdir(pwd);
    }
    if (my_strcmp(pwd, "..") == 0 || my_strcmp(pwd, "../") == 0)
        envi->tab = change_env(envi, path);
    if (sizetab == 1) {
        home = go_home(envi);
        chdir(home);
        envi->tab = change_env(envi, path);
    }
    if (my_strcmp(pwd, "-") == 0)
        my_printf("toto\n");
    else
        envi->tab = change_env(envi, path);
}

/*
Gérer : seulement CD -> go to "HOME"
        'cd -' -> return dans le folder avant (print le PATH)
*/