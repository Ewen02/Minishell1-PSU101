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

void my_exit(void);
char **my_env(char **envp);
void my_unsetenv(void);
void my_setenv(char **env);
char *my_strdup(char const *src);
char **my_malloc(char **env);
int my_tablen(char **env);
char *good_line(char **env);
char **check_path(char **env);
char **good_words(char *word);
char *check(char **env, char *command);
void check_command(char **env, char **buffer);
char **split_getlin(char *str);
char **split_av(char *str);
int new_shell(char **env);
void diff_bin_cmd(char **env, char *buffer);