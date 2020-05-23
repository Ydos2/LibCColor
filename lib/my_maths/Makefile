##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC	=	src/my_operator.c				\
		src/my_compute_power_rec.c		\
		src/my_compute_square_root.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Iinclude/

NAME	=	libmaths.a

all:	$(NAME)

$(NAME): build_lib

build_lib: $(OBJ) ## Compile the libs
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re tests_run re_tests