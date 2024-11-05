/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:50:38 by duha              #+#    #+#             */
/*   Updated: 2024/11/05 12:54:55 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_substr - Allocates (with malloc(3)) and returns a substring from
 *             the string ’s’. The substring begins at index ’start’
 *             and is of maximum size ’len’.
 *
 * @s: The string from which to create the substring.
 * @start: The start index of the substring in the string ’s’.
 * @len:  The maximum length of the substring.
 *
 * Return: The substring, or NULL if the allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*p;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
/* int main(void)
{
	char const s[] = "0123456789";
	unsigned int start = 3;
	size_t len = 5;
	printf("%s\n", ft_substr(s, start, len));
} */