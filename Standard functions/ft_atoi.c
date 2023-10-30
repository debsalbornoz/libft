#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int result;
	int sign;

	result = 0;
	sign = 1; 

	// Skip white spaces (ASCII 32) and control characters (ASCII 9 to 13)
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}

	// Handle optional sign
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			sign = -1; // If negative sign, set the sign variable to -1
		}
		nptr++;
	}

	// Process digits and build the integer result
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0'); // Convert character to integer and add to result
		nptr++;
	}

	return (result * sign); // Return the final result considering the sign
}
