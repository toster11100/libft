/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <ssedgeki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:38:30 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/11/13 20:30:40 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fin(char *res, int len, int n)
{
	int	i;
	int	neg;

	if (n < 0)
	{
		n = n * (-1);
		neg = 1;
	}
	while (n > 0)
	{
		i = n % 10;
		res[--len] = i + '0';
		n = n / 10;
	}
	if (neg == 1)
		res[0] = '-';
	return (res);
}

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * (-1);
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n == 0)
		return (ft_strdup("0"));
	len = get_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	res[len] = '\0';
	return (fin(res, len, n));
}
