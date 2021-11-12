/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssedgeki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:49:34 by ssedgeki          #+#    #+#             */
/*   Updated: 2021/11/12 12:49:36 by ssedgeki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	if (n < 10)
	{
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}
