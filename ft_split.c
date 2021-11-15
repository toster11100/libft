/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 06:05:13 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/11/15 06:05:16 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_free(char **res, int i)
{
	while (i--)
	{
		free(res[i]);
		res[i] = 0;
	}
	free(res);
}

static char	*ft_cpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

static char	**get_words(const char *s, char c, int c_word, char **res)
{
	int		i;
	int		k;
	int		len;

	i = 0;
	k = 0;
	while (k < c_word)
	{
		while (s[i] == c)
			i++;
		len = ft_len(s + i, c);
		res[k] = (char *)malloc(sizeof(char) * (len + 1));
		if (!res[k])
		{
			ft_free(res, k);
			return (0);
		}
		ft_cpy(res[k], s + i, len);
		res[k][len] = '\0';
		k++;
		while (s[i] && s[i] != c)
			i++;
	}
	res[k] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		c_word;
	int		i;

	if (!s)
		return (0);
	i = 0;
	c_word = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			c_word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	res = (char **)malloc(sizeof(char *) * (c_word + 1));
	if (!res)
		return (0);
	return (get_words(s, c, c_word, res));
}
