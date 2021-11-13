/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 02:12:00 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/10/12 02:12:03 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	res = ft_strlen(src);
	if (dstsize)
	{
		while (dstsize-- > 1 && *src)
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = 0;
	}
	return (res);
}
