/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adres.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:00:34 by maddou            #+#    #+#             */
/*   Updated: 2025/04/03 14:09:05 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_adres(unsigned long int n, char p)
{
	char	*shexam;
	int		cont;

	cont = 0;
	shexam = "0123456789abcdef";
	if (p == 'p')
	{
		write(1, "0x", 2);
		p = 'a';
		cont = 2;
	}
	if (n >= 16)
	{
		cont += ft_print_adres(n / 16, p);
		cont += ft_print_adres(n % 16, p);
	}
	if (n < 16)
		cont += ft_putchar(shexam[n]);
	return (cont);
}
