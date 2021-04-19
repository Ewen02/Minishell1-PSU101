##
## EPITECH PROJECT, 2020
## makefile for BSQ
## File description:
## makefile
##

SRC =	my_str.c	\
		my_utils.c	\
		printf/my_printf.c	\
		printf/my_put_nbr.c	\
		printf/printf_c.c	\
		printf/printf_d.c	\
		printf/printf_s.c	\
		printf/print_t.c	\
		my_strncpy.c	\
		my_strncmp.c	\
		my_strcpy.c	 \
		my_strdup.c

OBJ = 	$(SRC:.c=.o)
NAME = 	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -f $(OBJ)


clean:
	rm -f $(OBJ)
	rm -f ../$(NAME)

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all
