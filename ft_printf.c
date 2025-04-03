/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma >           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:20:45 by maddou            #+#    #+#             */
/*   Updated: 2025/04/03 17:06:30 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(va_list ap, char c)
{
	int	cont;

	cont = 0;
	if (c == 'd' || c == 'i')
		cont += ft_print_digit(va_arg(ap, int));
	else if (c == 'u')
		cont += ft_print_unsigned(va_arg(ap, int));
	else if (c == 'x')
		cont += ft_print_hexa(va_arg(ap, unsigned int), c);
	else if (c == 'X')
		cont += ft_print_hexa(va_arg(ap, unsigned int), c);
	else if (c == 'c')
		cont += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		cont += ft_print_string(va_arg(ap, char *));
	else if (c == 'p')
		cont += ft_print_adres(va_arg(ap, unsigned long int), c);
	return (cont);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		cont;
	va_list	ap;

	i = 0;
	cont = 0;
	va_start(ap, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				cont += ft_putchar('%');
			else
				cont += ft_print(ap, str[i]);
		}
		else
			cont += ft_putchar(str[i]);
		i++;
	}
	return (cont);
	va_end(ap);
}


