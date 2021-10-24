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
	char	*us;
	char	uc;

	us = (char *)s;
	uc = (char)c;
	while (*us)
		us++;
	while (us != s)
	{
		if (*us == uc)
			return (us);
		us--;
	}
	if (*us == uc)
		return (us);
	return (0);
}
