/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duha <duha@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:20:30 by duha              #+#    #+#             */
/*   Updated: 2024/11/03 13:59:18 by duha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z'));
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	else return (c);
}
