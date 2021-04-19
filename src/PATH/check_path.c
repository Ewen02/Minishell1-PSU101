/*
** EPITECH PROJECT, 2021
** find bin in PATH
** File description:
** //
*/

#include "../../include/my_src.h"

char *good_line(char **env)
{
    char *path = "PATH";
    char *copy = malloc(sizeof(char) * 1000);

    for (int i = 0; env[i] != NULL; i++) {
        if (my_strncmp(path, env[i], 4) == 0)
            copy = env[i];
    }
    return copy;
}

char **good_words(char *word)
{
    char **copy = malloc(sizeof(char *) * my_strlen(word));

    copy = split(word);
    return copy;
}

char *check(char **env, char *command)
{
    DIR *dir;
    struct dirent *dent;

    char *result = malloc(sizeof(char) * my_strlen(*env));
    char *str, *str2;
    char **path = malloc(sizeof(char *) * my_strlen(*env));
    char *copy = malloc(sizeof(char) * my_strlen(*env));
    copy = good_line(env);
    path = good_words(copy);

    for (int i = 0; command[i] != '\0'; i++)    if (command[i] == '\n')
        command[i] = '\0';
    for (int i = 0; path[i] != NULL; i++) {
        dir = opendir(path[i]);
        if (dir != NULL) {
            while ((dent = readdir(dir)) != NULL) {
                if (my_strcmp(dent->d_name, command) == 0) {
                    str = path[i];
                    str2 = dent->d_name;
                    result = my_strcat(my_strcat(str, "/"), str2);
                }
            }
        }
    }
    return result;
}