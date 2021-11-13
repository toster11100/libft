/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <ssedgeki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:49:09 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/11/13 23:24:30 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long		i;
	int			neg;

	i = 0;
	neg = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (i > INT_MAX && neg == 1)
			return (-1);
		if (i < INT_MIN + 1 && neg == -1)
			return (0);
		i *= 10;
		i += *str - '0';
		str++;
	}
	return (i * neg);
}
