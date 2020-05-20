/*
** EPITECH PROJECT, 2019
** it put
** File description:
** a string on ur terminal.
*/

#include <unistd.h>

void my_putchar(char c);

int my_putnbr_base(int nbr, char *base);

static void put_text(char *str, int i)
{
    if ((str[i]) < 32 || (str[i] == 127))
        write(1, ".", 1);
    else
        write(1, &str[i], 1);
}

static void aff_text(char *str, int to)
{
    write(1, " ", 1);
    for (int i = 0; i < 16; i++) {
        if (i < to)
            put_text(str, i);
        else
            write(1, ".", 1);
    }
    write(1, "\n", 1);
}

static void aff_hexa(char *str, int to, char *patern)
{
    for (int i = 0; i < 16; i++) {
        if (i % 2 == 0)
            write(1, " ", 1);
        if (i < to) {
            my_putchar(patern[((unsigned) (*(str + i)) / 16) % 16]);
            my_putchar(patern[(unsigned) (*(str + i)) % 16]);
        } else {
            write(1, " ", 1);
            write(1, " ", 1);
        }
    }
}

static void aff_dec(int val)
{
    int tmp = 10000000;

    for (; val < tmp; tmp /= 10)
        write(1, "0", 1);
    if (val != 0)
        my_putnbr_base(val, "0123456789");
}

int my_showmem(char *str, int size)
{
    char cont = 1;

    for (int i = 16, aff_size = 0; cont; i += 16, str += 16) {
        if (i > size)
            aff_size = 16 - (i - size);
        else
            aff_size = 16;
        aff_dec(((i - 16) / 16) * 10);
        aff_hexa(str, aff_size, "0123456789ABCDEF");
        aff_text(str, aff_size);
        cont = (i < size);
    }
    return (0);
}