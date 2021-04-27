/*
** EPITECH PROJECT, 2020
** my_cd
** File description:
** //
*/

#include "my_src.h"

void my_cd(char **env)
{
    for (int i = 0; env[i]; i++)
        printf("%d\n", i);

/*

Utiliser : chdir(const char *path) -> remplace le répertoire de travail courant du processus appelant par celui indiqué dans le chemin path.
           getcwd(char *buf, size_t size) -> copie le chemin d'accès absolu du répertoire de travail courant dans la chaîne pointée par buf, qui est de longueur size.

Gérer : seulement CD -> go to "HOME"
        CD + path -> go to path
        'cd -' -> return dans le folder avant (print le PATH)
        'cd ../' -> fait -1 dans le path

*/
}
