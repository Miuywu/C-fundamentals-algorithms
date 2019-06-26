#include <stdio.h>
#include "holberton.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{   
    if( (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0) )
       day++;
    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 1 && day > 31)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 2 && day > 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 3 && day > 91)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 4 && day > 121)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 5 && day > 132)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 6 && day > 182)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 7 && day > 213)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 8 && day > 244)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 9 && day > 274)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 10 && day > 305)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 11 && day > 335)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        if (month == 12 && day > 365)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        
    }
}
