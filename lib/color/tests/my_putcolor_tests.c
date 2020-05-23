/*
** EPITECH PROJECT, 2020
** my_putcolor_tests
** File description:
** my_putcolor_tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "color.h"

Test(ret_put_color, test_color, .timeout = 1)
{
    int return_val = 0;

    return_val = my_putcolor(-1);
    cr_assert_eq(return_val, 0);
}

Test(set_put_color, test_color, .timeout = 1)
{
    int return_val = 0;

    return_val = my_putcolor(1);
    my_putcolor(-1);
    cr_assert_eq(return_val, 0);
}