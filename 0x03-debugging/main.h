#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * struct date_s - Struct for date
 * @day: integer
 * @month: integer
 * @year: integer
 *
 * Description: Struct for date
 */
typedef struct date_s
{
	int day;
	int month;
	int year;
} date_t;

/**
 * positive_or_negative - Determine if a number is positive, negative or zero
 *
 * @i: The integer to be checked
 *
 * Return: Nothing
 */
void positive_or_negative(int i);
/**
 * largest_number - returns the largest of 3 numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c);
/**
 * print_remaining_days - print how many days are left in the year
 *
 * @month: current month (integer)
 * @day: current day (integer)
 * @year: current year (integer)
 *
 * Return: Nothing
 */
void print_remaining_days(int month, int day, int year);
/**
 * convert_day - convert day of month to day of year
 *
 * @day: date to calculate day of year for
 * @month: to used to converted to day
 * Return: day of year
 */
int convert_day(int month, int day);
#endif /* MAIN_H */
