/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:26:42 by egerin            #+#    #+#             */
/*   Updated: 2024/11/25 18:00:53 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_base(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		return (ft_putnbr_base(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar_fd(symbols[n], 1));
	else
	{
		count = ft_putnbr_base(n / base, base);
		return (count + ft_putnbr_base(n % base, base));
	}
}

int	ft_putnbr_basemaj(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		return (ft_putnbr_basemaj(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar_fd(symbols[n], 1));
	else
	{
		count = ft_putnbr_basemaj(n / base, base);
		return (count + ft_putnbr_basemaj(n % base, base));
	}
}
