/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:16:09 by xel               #+#    #+#             */
/*   Updated: 2022/03/20 14:25:13 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_u(unsigned int n)
{
	unsigned long long int	nbr;

	nbr = n;
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}

int	ft_print_u(va_list args)
{
	unsigned int	nb;

	nb = (unsigned int)va_arg(args, unsigned int);
	ft_putnbr_u(nb);
	return (ft_len_num_u(nb));
}
