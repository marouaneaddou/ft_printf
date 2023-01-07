/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:51:17 by maddou            #+#    #+#             */
/*   Updated: 2022/10/27 12:55:14 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(unsigned int u)
{
	int	cont;

	cont = 0;
	if (u > 9)
	{
		cont += ft_print_unsigned(u / 10);
		cont += ft_print_unsigned(u % 10);
	}
	if (u >= 0 && u <= 9)
		cont += ft_putchar(u + 48);
	return (cont);
}
