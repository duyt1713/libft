/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:34:22 by duha              #+#    #+#             */
/*   Updated: 2024/11/07 07:00:40 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_striteri - Applies the function f on each character of the string
 *               passed as argument, passing its index as first argument.
 *               Each character is passed by address to f to be modified
 *               if necessary.
 *
 * @s: The string on which to iterate.
 * @f: The function to apply to each character.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/* void ft_plus_a(unsigned int a, char *c)
{
	*c += a;
}
int main(void)
{
	char s[] = "0000000000";
	ft_striteri(s, ft_plus_a);
	printf("%s\n", s);

} */
