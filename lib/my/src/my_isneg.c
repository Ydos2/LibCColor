/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

#include <unistd.h>

int my_isneg(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
    return (0);
}