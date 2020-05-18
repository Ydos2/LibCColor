##
## EPITECH PROJECT, 2020
## color
## File description:
## Makefile
##

SRC	=	src/my_putcolor.c			\

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