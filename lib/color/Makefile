##
## EPITECH PROJECT, 2020
## color
## File description:
## Makefile
##

SRC	=	src/my_putcolor.c			\
		src/my_put_nbr_color.c		\
		src/my_putchar_color.c		\
		src/my_putnbr_base_color.c	\
		src/my_putstr_color.c		\
		src/my_put_error_color.c	\

CFLAGS = -Iinclude/

OBJ	=	$(SRC:.c=.o)

NAME	=	libcolor.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all