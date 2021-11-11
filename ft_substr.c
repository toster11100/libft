/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 01:35:58 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/11/11 01:36:00 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	while (i < len && ft_strlen(s) > i + start)
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = 0;
	return (res);
}
