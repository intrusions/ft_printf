/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:13:38 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 20:01:36 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_base_ptr(unsigned long long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_putnbr_base_ptr(nb / 16);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}

int	ft_print_p(va_list args)
{
	unsigned long long int	addr;

	addr = (unsigned long long int)va_arg(args, void *);
	if (addr)
	{
		ft_putstr("0x");
		ft_putnbr_base_ptr(addr);
		return ((ft_base_len_ptr(addr) + 2));
	}
	ft_putstr("(nil)");
	return (5);
}
