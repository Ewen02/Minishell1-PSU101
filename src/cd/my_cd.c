/*
** EPITECH PROJECT, 2020
** my_cd
** File description:
** //
*/

#include "my_src.h"

static char *anti_backslac(char *str)
{
    int size = my_strlen(str);

    for (int i = 0; i < size; i++)
        if (str[i] == '\n')
            str[i] = '\0';
    return str;
}

void my_cd(char **str)
{
    int size = my_strlen(str[1]);
    char *pwd = malloc(sizeof(char) * (size + 2));

    pwd = anti_backslac(str[1]);
    chdir(pwd);
}
/*

Utiliser : chdir(const char *path) -> remplace le répertoire de travail courant du processus appelant par celui indiqué dans le chemin path.
           getcwd(char *buf, size_t size) -> copie le chemin d'accès absolu du répertoire de travail courant dans la chaîne pointée par buf, qui est de longueur size.

Gérer : seulement CD -> go to "HOME"
        CD + path -> go to path
        'cd -' -> return dans le folder avant (print le PATH)
        'cd ../' -> fait -1 dans le path

*/