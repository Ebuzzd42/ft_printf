/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:38:58 by egerin            #+#    #+#             */
/*   Updated: 2024/11/25 18:25:22 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int	ft_putchar_fd(char c, int fd);
int		ft_putnbr_base(long n, int base);
int		ft_putnbr_basemaj(long n, int base);
void	ft_putstr_fd(char *s, int fd);

#endif
