/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 18:32:25 by agraton           #+#    #+#             */
/*   Updated: 2018/11/29 10:57:29 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int			handle_s(char *string);
int			handle_i(int i);
int			handle_d(double i);
