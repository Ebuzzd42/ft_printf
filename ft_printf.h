/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:38:58 by egerin            #+#    #+#             */
/*   Updated: 2024/11/26 15:22:50 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar_fd(char c);
int	ft_putnbr_base(long n, int base);
int	ft_putstr_fd(char *s);
int	ft_putnbr_base(long n, int base);
int	ft_putnbr_basemaj(long n, int base);
int	ft_putptr(size_t n, size_t base);

#endif
