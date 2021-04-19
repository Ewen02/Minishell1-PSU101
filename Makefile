##
## EPITECH PROJECT, 2020
## makefile BSQ
## File description:
## makefile
##

SRC =	src/main.c	\
		src/my_shell/check_command.c	\
		src/my_shell/split_getlin.c	\
		src/my_shell/new_shell.c	\
		src/my_shell/diff_bin_cmd.c	\
		src/my_cd.c	\
		src/my_unsetenv.c	\
		src/setenv/my_setenv.c	\
		src/setenv/my_malloc.c	\
		src/setenv/my_tablen.c	\
		src/PATH/check_path.c	\
		src/PATH/split.c	\
		src/env/my_env.c 	\
		src/exit/my_exit.c

OBJ	=	$(SRC:.c=.o)

NAME	= mysh

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/
	rm -f $(OBJ)
	gcc -o $(NAME) $(SRC) -L lib/ -lmy

clean:
	make fclean -C lib
	rm -f $(OBJ)
fclean:	clean
	rm -f $(NAME)
	make clean -C lib
re:	fclean all

debug: CFLAGS += -g
debug: re