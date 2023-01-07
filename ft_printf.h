/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maddou <maddou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:59:18 by maddou            #+#    #+#             */
/*   Updated: 2022/10/27 12:56:07 by maddou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_digit(int nb);
int	ft_print_unsigned(unsigned int u);
int	ft_print_hexa(unsigned int n, char c);
int	ft_print_string(char *str);
int	ft_print_adres(unsigned long n, char p);
int	ft_putchar(char c);

#endif
