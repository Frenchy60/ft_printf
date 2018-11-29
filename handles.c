/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handles.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:28:05 by agraton           #+#    #+#             */
/*   Updated: 2018/11/29 12:44:22 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			handle_s(char *string)
{
	ft_putstr(string);
	return (ft_strlen(string));
}

int			handle_i(int i)
{
	return (ft_putnbr(i));
}

int			handle_d(double i)
{
	return (ft_putdou(i));
}
