/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:55:22 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/10/14 16:55:24 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;
	size_t	ex;

	i = 0;
	dstlen = ft_strlen(dst);
	if (dstsize && dstsize > dstlen)
	{
		ex = ft_strlen(src) + dstlen;
		while (dstlen < dstsize - 1 && src[i] != '\0')
		{
			dst[dstlen] = src[i];
			dstlen++;
			i++;
		}
		dst[dstlen] = '\0';
	}
	else
		ex = ft_strlen(src) + dstsize;
	return (ex);
}
