##
## EPITECH PROJECT, 2020
## makefile
## File description:
## Makefile
##

SRC	=	src/my_atof.c						\
		src/my_compute_power_rec.c			\
		src/my_compute_square_root.c		\
		src/my_find_prime_sup.c				\
		src/my_getnbr.c						\
		src/my_is_prime.c					\
		src/my_isneg.c						\
		src/my_operator.c					\
		src/my_put_error.c					\
		src/my_put_nbr.c					\
		src/my_putchar.c					\
		src/my_putstr.c						\
		src/my_revstr.c						\
		src/my_showmem.c					\
		src/my_showstr.c					\
		src/my_sort_int_array.c				\
		src/my_str_isalpha.c				\
		src/my_str_islower.c				\
		src/my_str_isnum_until.c			\
		src/my_str_isnum.c					\
		src/my_str_isprintable.c			\
		src/my_str_isupper.c				\
		src/my_str_to_word_array.c			\
		src/my_strcat.c						\
		src/my_strcmp.c						\
		src/my_strcpy.c						\
		src/my_strdup.c						\
		src/my_strstr.c						\
		src/my_strupcase.c					\
		src/my_swap.c						\
		src/my_usage.c						\
		src/my_xmalloc.c					\
		src/my_xopen.c						\
		src/my_putnbr_base.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS = -Iinclude/

NAME	=	libmy.a

all:	$(NAME)

$(NAME): build_lib

build_lib: $(OBJ) ## Compile the libs
	@echo -e "\033[1;93mCompiling lib....\033[0;39m"
	@ar rc $(NAME) $(OBJ)
	@echo -e "\033[1;32mLib successfully compiled !\033[0;39m"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re tests_run re_tests