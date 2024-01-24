#include "libft.h"

//ft_atoi converts a character sequence to an integer
int ft_atoi(const char *nptr)
{
    int result;
    int sign;
    int i;

    result = 0;
    sign = 1;
    i = 0;

    // Skip whitespaces and control characters at the beginning of the sequence
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;

    // Handle optional sign
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }

    // Process digits and build the integer result converting character to integer and adding to result.
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
	// Return the final result
    return (result * sign); 
}
