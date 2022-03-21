/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:16:41 by xel               #+#    #+#             */
/*   Updated: 2022/03/21 03:13:03 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_base_min(int nbr)
{
	long long int	nb;
	char			*base;

	nb = nbr;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 16)
		ft_putnbr_base_min(nb / 16);
	ft_putchar(base[nb % 16]);
}

int	ft_print_x(va_list args)
{
	int	nb;

	nb = (int)va_arg(args, int);
	ft_putnbr_base_min(nb);
	return (ft_base_len(nb));
}
