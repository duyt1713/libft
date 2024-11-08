/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:26:18 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:04:45 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_atoi - Converts a string to an integer.
 *
 * @nptr: The string to be converted.
 *
 * This function converts the initial portion of the string pointed to by nptr
 * to int representation. It discards any whitespace characters until the first
 * non-whitespace character is found. Then, it takes an optional initial plus
 * or minus sign followed by as many numerical digits as possible, and converts
 * them to an integer.
 *
 * Return: The converted integer.
 */

static int	ft_isspace(int c);

int	ft_atoi(const char *nptr)
{
	int			sign;
	long long	num;
	long long	check;

	sign = 1;
	num = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && ft_isdigit(*nptr))
	{
		check = num * 10 + (*nptr - '0');
		if (check / 10 != num && sign == 1)
			return (-1);
		if (check / 10 != num && sign == -1)
			return (0);
		num = check;
		nptr++;
	}
	return ((int)(num * sign));
}

/**
 * ft_isspace - Checks if a character is a whitespace character.
 * @c: The character to be checked.
 *
 * Return: non-zero if the character is a whitespace character, 0 otherwise.
 */

static int	ft_isspace(int c)
{
	return (c == 32 || (9 <= c && c <= 13));
}

/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = "-21474836481111111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("Input:   %s\n", str);
        printf("atoi:    %i\n", atoi(str));
        printf("ft_atoi: %i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
} */
