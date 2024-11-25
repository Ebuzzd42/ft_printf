/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:39:40 by egerin            #+#    #+#             */
/*   Updated: 2024/11/25 18:32:30 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	ft_format(char c, va_list ap)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c == 'd')
		ft_putnbr_base(va_arg(ap, int), 10);
	else if (c == 'i')
		ft_putnbr_base(va_arg(ap, int), 10);
	else if (c == 'u')
		ft_putnbr_base(va_arg(ap, unsigned int), 10);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), 16);
	else if (c == 'X')
		ft_putnbr_basemaj(va_arg(ap, unsigned int), 16);
	else if (c == '%')
		ft_putchar_fd('%', 1);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	size_t	compteur;
	size_t	i;

	if (!s)
		return (-1);
	va_start(ap, s);
	compteur = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_format(s[i + 1], ap);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			compteur++;
		}
		i++;
	}
	va_end(ap);
	return (compteur);
}

int	main(void)
{
	ft_printf("Hello %s, today is %d, in hex %x, char->%c",
				"John",
				27,
				27,
				'z');
	printf("Hello %s, today is %d, in hex %x, char->%c",
                "John",
                27, 
                27, 
                'z');
	return (0);
}
