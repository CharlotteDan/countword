/*
** EPITECH PROJECT, 2018
** count_words
** File description:
** bootcamp
*/

#include <unistd.h>
#include <stdlib.h>

int my_strlen(char  *c)
{
	for (int i = 0; c[i] != '\0'; i++)
	return (i);
}

void rb_print_err(char *c)
{
	write(2, c, my_strlen(c));
}

void rb_xerror(char *c)
{
	rb_print_err("Error: ");
	rb_print_err(c);
	rb_print_err("\n");
	exit(84);
}

int count_words(char *str)
{
	int i = 0;
	int count = 0;

	if (str == NULL)
		rb_xerror("count_words: String pointer NULL");
	else {
		while (str[i] != '\0') {
			if (str[i] >= 'A' &&  str[i] <= 'Z' ||
			    str[i] >= 'a' && str[i] <= 'z') {
				count++;
				while (str[i] >= 'A' && str[i] <= 'Z' ||
				       str[i] >= 'a' && str[i] <= 'z')
					i++;
			} else
				i++;
		}
	}
	return (count);
}
