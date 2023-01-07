/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:03:43 by maddou            #+#    #+#             */
/*   Updated: 2022/10/27 12:58:42 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	i;
	int	cont;

	if (str == NULL)
		return (ft_print_string("(null)"));
	i = 0;
	cont = 0;
	while (str[i] != '\0')
	{
		cont += ft_putchar(str[i]);
		i++;
	}
	return (cont);
}
