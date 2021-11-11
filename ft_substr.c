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

char
	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!str)
		return (0);
	if (len > (ft_strlen(s) - start))
	len = ft_strlen(s) - start;

	if (!(str = (char *)malloc((len + 1))))
		return (NULL);
	while (i < len && ft_strlen(s) > i + start)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = 0;
	return (str);
}
