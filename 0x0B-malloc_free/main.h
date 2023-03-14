#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates an array of chars and initializes it with a specific char.
 * @size: unsigned int size of array
 * @c: char to initialize array
 *
 * Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly allocated space in memory which
 * contains a copy of the string given as a parameter.
 * @str: char pointer to string
 *
 * Return: pointer to duplicated string or NULL if fails
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL if fails
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: pointer to 2D array or NULL if fails
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2 dimensional grid previously created by the alloc_grid function
 * @grid: pointer to 2D array to be freed
 * @height: height of the 2D array
 *
 * Return: void
 */
void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to concatenated string or NULL if fails
 */
char *argstostr(int ac, char **av);

/**
 * strtow - splits a string into words
 * @str: pointer to string
 *
 * Return: pointer to an array of strings (words) or NULL if fails
 */
char **strtow(char *str);

#endif /* MAIN_H */

