#ifndef MAIN_H_
#define MAIN_H_

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src);


/**
 * _strncat - Concatenates two strings, but with a specified maximum length.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from source.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n);


/**
 * _strncpy - Copies a string up to a specified maximum length.
 *
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to copy from source.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n);


/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: An integer < , == , or > 0 if s1 is found, respectively,
 * to be less than, to match, or be greater than s2.
 */
int _strcmp(char *s1, char *s2);


/**
 * reverse_array - Reverses the order of elements in an integer array.
 *
 * @a: Pointer to the integer array.
 * @n: Number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n);


/**
 * string_toupper - Converts all lowercase letters in a string to uppercase.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str);


/**
 * cap_string - Capitalizes the first letter of each word in a string.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str);


/**
 * leet - Encodes a string into 1337.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str);


/**
 * rot13 - Applies the ROT13 cipher to a string.
 *
 * @str: Pointer to the string.
 *
 * Return: Pointer to the resulting string.
 */
char *rot13(char *str);


/**
 * print_number - Prints an integer to the standard output.
 *
 * @n: The integer to be printed.
 *
 * Return: void.
 */
void print_number(int n);


/**
 * infinite_add - Adds two numbers of arbitrary length.
 *
 * @n1: Pointer to the first number.
 * @n2: Pointer to the second number.
 * @r: Pointer to the buffer that will store the result.
 * @size_r: Size of the buffer.
 *
 * Return: Pointer to the resulting string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);


/**
 * print_buffer - Prints the contents of a buffer in a specific format.
 *
 * @b: Pointer to the buffer.
 * @size: Size of the buffer.
 *
 * Return: void.
 */
void print_buffer(char *b, int size);
#endif /* MAIN_H_ */
