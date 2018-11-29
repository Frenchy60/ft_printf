/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:22:50 by agraton           #+#    #+#             */
/*   Updated: 2018/11/29 13:22:07 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putdou(double n)
{
	int			count;
	int			i;

	count = ft_putnbr((int) n);
	if ((n = (n - (int)n)) > 0)
	{
		ft_putchar('.');
		i = 0;
		while (++i < 7)
		{
			n *= 10;
			ft_putchar((int)n + '0');
			n -= (int)n;
		}
		count += 7;
	}
	return (count);
}
