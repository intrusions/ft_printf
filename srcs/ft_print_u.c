/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:16:09 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:36:58 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	unsigned long long int	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
		ft_putnbr_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_print_u(va_list args)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(args, unsigned int);
	ft_putnbr_unsigned(nb);
	return (ft_len_num_base(nb, 10));
}
