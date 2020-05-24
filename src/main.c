/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "color.h"
#include "my_error.h"
#include "my_maths.h"
#include "my.h"

int main(int ac, char **av)
{
    (void)av;
    if (ac > 1)
        my_put_error("Its an error\n");
    my_add(1, 1);
    my_putstr_color("The lib is compile !\n", 1);
    my_printf("Yes !\n");
    return (0);
}