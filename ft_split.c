#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static void		*ft_clear(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static int		ft_len(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static int		ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (k < ft_count_words(s, c))
	{
		while (s[i] == c)
			i++;
		if (!(str[k] = (char*)malloc(sizeof(char) * (ft_len(s + i, c) + 1))))
			return (ft_clear(str));
		ft_strncpy(str[k], s + i, ft_len(s + i, c));
		str[k][ft_len(s + i, c)] = '\0';
		k++;
		while (s[i] && s[i] != c)
			i++;
	}
	str[k] = NULL;
	return (str);
}