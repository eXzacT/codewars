#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "square_digits.h"

#define MAX_SQUARED_DIGIT_STR_LEN 2

int square_digits(int num)
{
    int num_digits = 0;
    int temp_num = num;
    while (temp_num > 0)
    {
        num_digits++;
        temp_num /= 10;
    }

    //+1 to be able to add \0
    char *num_str = malloc((num_digits + 1) * sizeof(char));
    if (num_str == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        return -1;
    }
    sprintf(num_str, "%d", num);

    char *squared_digits_str = malloc((num_digits * MAX_SQUARED_DIGIT_STR_LEN + 1) * sizeof(char));
    if (squared_digits_str == NULL)
    {
        free(num_str);
        fprintf(stderr, "Memory allocation failed!\n");
        return -1;
    }
    squared_digits_str[0] = '\0';

    for (int i = 0; num_str[i] != '\0'; i++)
    {
        int digit = num_str[i] - '0';
        char squared_digit_str[MAX_SQUARED_DIGIT_STR_LEN + 1];
        sprintf(squared_digit_str, "%d", digit * digit);
        strcat(squared_digits_str, squared_digit_str);
    }

    char *endptr;
    long long new_num = strtoll(squared_digits_str, &endptr, 10);
    if (*endptr != '\0' || new_num > INT_MAX || new_num < INT_MIN)
    {
        free(num_str);
        free(squared_digits_str);

        fprintf(stderr, "Int overflow!\n");
        return -1;
    }

    free(num_str);
    free(squared_digits_str);

    return (int)new_num;
}

int square_digits_v2(int num)
{
    int new_num = 0;
    int multiplier = 1;
    while (num > 0)
    {
        int digit = num % 10;
        int squared_digit = digit * digit;

        // Check for overflow before adding
        if (new_num > INT_MAX - squared_digit * multiplier)
        {
            fprintf(stderr, "Int overflow!\n");
            return -1;
        }
        new_num += squared_digit * multiplier;

        if (squared_digit > 10)
        {
            multiplier *= 10;
        }
        multiplier *= 10;
        num /= 10;
    }
    return new_num;
}