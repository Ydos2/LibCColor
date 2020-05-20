/*
** EPITECH PROJECT, 2019
** my_print_alpha.c
** File description:
** print the alphabet in ascending order
*/

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int tm = 0;

    while (i != size) {
        if (i > 0 && tab[i] < tab[i--]) {
            tm = tab[i];
            tab[i] = tab[i--];
            tab[i--] = tm;
            i -= 2;
        }
        i++;
    }
}