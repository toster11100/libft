/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 07:50:23 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/10/16 07:50:25 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char *us;
	unsigned char uc;

	us = (unsigned char *)s;
	uc = (unsigned char)c;
	while (*us)
	{
		if (*us == uc)
			return (us);
		us++;
	}
	if (*us == uc)
		return (us);
	return (0);
}