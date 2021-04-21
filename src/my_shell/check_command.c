/*
** EPITECH PROJECT, 2020
** check_command
** File description:
** //
*/

#define _GNU_SOURCE
#include "my_src.h"

static char **cpy(char **str, char *result)
{
    free(str[0]);
    str[0] = malloc(sizeof(char) * my_strlen(result) + 1);
    str[0][my_strlen(result)] = '\0';
    str[0] = my_strcpy(str[0], result);
    return str;
}

void check_command(char **env, char **buffer)
{
    int returnStatus;
    char *result = malloc(sizeof(char) * my_strlen(*env));
    char **real_buffer = malloc(sizeof(char *) * my_strlen(*env));
    result = check(env, buffer[0]);
    real_buffer = cpy(buffer, result);

    for (int i = 0; real_buffer[i]; i++)
        for (int j = 0; real_buffer[i][j] != '\0'; j++)
            if (real_buffer[i][j] == '\n')
                real_buffer[i][j] = '\0';

    pid_t childPid;
    childPid = fork();

    if (childPid == 0) {
        if ((execve(real_buffer[0], real_buffer, env)) == -1)
            my_printf("Command not found\n");
        exit(0);
    }
    else if (childPid < 0)
        exit(84);
    else {
        waitpid(childPid, &returnStatus, 0);
        if (WEXITSTATUS(returnStatus) == 84)
            exit(84);
    }
}