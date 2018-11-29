/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:00:05 by agraton           #+#    #+#             */
/*   Updated: 2018/11/29 10:24:17 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_putnbr(int n)
{
	int			count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			count++;
			n *= -1;
		}
		if (n >= 10)
		{
			count += ft_putnbr(n / 10);
		}
		ft_putchar((n % 10) + '0');
		count++;
	}
	return (count);
}
