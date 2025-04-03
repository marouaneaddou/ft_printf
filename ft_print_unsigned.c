/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:51:17 by maddou            #+#    #+#             */
/*   Updated: 2025/04/03 14:07:07 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_print_unsigned(unsigned int u)
{
	int	cont;

	cont = 0;
	if (u > 9)
	{
		cont += ft_print_unsigned(u / 10);
		cont += ft_print_unsigned(u % 10);
	}
	if (u <= 9)
		cont += ft_putchar(u + 48);
	return (cont);
}
