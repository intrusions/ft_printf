/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:17:19 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 19:19:14 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_base_maj(int nbr)
{
	long long	nb;
	char		*base;

	nb = nbr;
	base = "0123456789ABCDEF";
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 16)
	{
		ft_putnbr_base_maj(nb / 16);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}

int	ft_print_x_caps(va_list args)
{
	int	nb;

	nb = (int)va_arg(args, int);
	ft_putnbr_base_maj(nb);
	return (ft_base_len(nb));
}
