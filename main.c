/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:39:54 by agraton           #+#    #+#             */
/*   Updated: 2018/11/29 13:01:43 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(char *string, ...);

int			main(int argc, char **argv)
{
	argc = argv[0][0];
	printf("s: (%s) i: (%i) d: (%f)\n", " hey ", 505, 505.125);
	printf("printed %d characters\n", ft_printf("s: (%s) i: (%i) d: (%f)\n", " hey ", 505, 505.125));
	return (0);
}

int			handle_percent(char **string, va_list arg)
{
	int		printed;

	printed = 0;
	(*string)++;
	if (**string == 's')
	{
		(*string)++;
		return (handle_s(va_arg(arg, char *)));
	}
	else if (**string == 'i')
	{
		(*string)++;
		return (handle_i(va_arg(arg, int)));
	}
	else if (**string == 'f')
	{
		(*string)++;
		return (handle_d(va_arg(arg, double)));
	}
	return (printed);
}

int			ft_printf(char *string, ...)
{
	int		num;
	int		i;
	va_list	arg;

	va_start(arg, string);
	i = 0;
	num = 0;
	while (*string)
	{	
		if (*string != '%')
		{
			i++;
			write(1, string, 1);
			string++;
		}
		else
			i += handle_percent(&string, arg);
	}
	va_end(arg);
	return (i);
}
