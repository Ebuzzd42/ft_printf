/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egerin <egerin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:26:42 by egerin            #+#    #+#             */
/*   Updated: 2024/11/26 15:22:31 by egerin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr_base(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar_fd(symbols[n]));
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
		write(1, "-", 1);
		return (ft_putnbr_basemaj(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar_fd(symbols[n]));
	else
	{
		count = ft_putnbr_basemaj(n / base, base);
		return (count + ft_putnbr_basemaj(n % base, base));
	}
}

int	ft_putptr(size_t n, size_t base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n == 0)
	{
		ft_putstr_fd("(nil)");
		return (5);
	}
	else if (n < base)
	{
		ft_putstr_fd("0x");
		ft_putchar_fd(symbols[n]);
		return (3);
	}
	else
	{
		count = ft_putptr(n / base, base);
		ft_putchar_fd(symbols[n % base]);
		count += 1;
		return (count);
	}
}
