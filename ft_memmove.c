/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 01:13:24 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/10/12 01:13:26 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *udst;
	unsigned char *usrc;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst < src)
		while (len--)
			*udst++ = *usrc++;			
	else
	{	
		udst += len;
		usrc += len;	
		while (len--)
			*--udst = *--usrc;
	}
	return (dst);
}