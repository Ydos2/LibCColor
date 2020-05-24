/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** get_next_line
*/

#ifndef  READ_SIZE
#define  READ_SIZE (1)
#endif  /* !READ_SIZE  */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

static char *my_realloc(char *src, int pos)
{
    char *content = malloc(sizeof(char) * (pos + 1));
    int i = 0;

    if (content == NULL)
        return (NULL);
    for (i = 0; pos >= 0; i++) {
        if (src[i])
            content[i] = src[i];
        pos--;
    }
    return (content);
}

static int get_position(int f, char *buff, char *content, int n)
{
    static int pos = READ_SIZE;
    static int i = 0;

    if (i >= pos || i == 0) {
        i = 0;
        if ((pos = read(f, buff, READ_SIZE)) < 0 || f < 0 || f > 256)
            return (-2);
    }
    if (pos == 0) {
        content[n] = '\0';
        i = -1;
    }
    if (pos != 0 && buff[i] == '\n')
        content[n] = '\0';
    if (pos != 0 && buff[i] != '\n')
        content[n] = buff[i];
    i++;
    return (pos);
}

static char *process_content(char *content, int i)
{
    if (i % READ_SIZE == 0)
        return (my_realloc(content, i + READ_SIZE + 1));
    else
        return (content);
}

static int error_line(char *content, int fd, char *buff)
{
    if (content == NULL || fd < 0 || fd > 256 ||
        READ_SIZE < 0 || read(fd, buff, 0) < 0)
        return (-1);
    else
        return (0);
}

char *get_next_line(int fd)
{
    static char buff[READ_SIZE];
    char *content = malloc((READ_SIZE + 1) * sizeof(char));
    int i = 0;
    int position;

    if (error_line(content, fd, buff) == -1)
        return (NULL);
    position = get_position(fd, buff, content, i);
    if (position == 0)
        return (NULL);
    while (content[i] != '\0' && i < READ_SIZE + 1) {
        content = process_content(content, i);
        if (!content || content == NULL)
            return (NULL);
        position = get_position(fd, buff, content, ++i);
        if (position == -2)
            return (NULL);
    }
    content[i] = '\0';
    return (content);
}