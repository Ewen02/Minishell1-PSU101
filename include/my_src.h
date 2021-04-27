/*
** EPITECH PROJECT, 2020
** src/
** File description:
** //
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <dirent.h>

#include "my_printf.h"
#include "my_str.h"
#include "my_utils.h"

#pragma once

typedef struct env_s
{
    char **tab;
}env_t;

void my_exit(char **str);
char **my_env(env_t *envi);
void my_unsetenv(env_t *envi, char **str);
void my_setenv(env_t *envi, char **str);
char *my_strdup(char const *src);
char **my_malloc(char **envi, int size);
int my_tablen(char **env);
char **check_path(char **env);
char *check(char **env, char *command);
void check_command(char **env, char **buffer);
char **split_getlin(char *str);
char **split_av(char *str);
int new_shell(char **env);
void diff_bin_cmd(env_t *envi, char *buffer);
char **anti_backslach(char **str);
void my_cd(char **str);