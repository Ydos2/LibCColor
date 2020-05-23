/*
** EPITECH PROJECT, 2020
** my_error
** File description:
** my_error
*/

#ifndef MY_ERROR_H_
#define MY_ERROR_H_

// my_put_error.c
int my_put_error(char *str);

// my_xopen.c
int my_xopen(char *path);

// my_xmalloc.c
char *my_xrealloc(char *str, int size);
void *my_xmalloc(int size);

#endif /* !MY_ERROR_H_ */