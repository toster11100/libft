/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:41:01 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/10/16 21:41:04 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != *s)
	{
		if (s[len] == (char )c)
			return (&((char *)s)[len]);
		len--;
	}
	if (s[len] == c)
		return (&((char *)s)[len]);
	return (NULL);
}
