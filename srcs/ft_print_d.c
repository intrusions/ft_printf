/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:14:29 by xel               #+#    #+#             */
/*   Updated: 2022/03/21 03:45:43 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_d(va_list args)
{
	double	nb;
	int		count;

	nb = (double)va_arg(args, double);
	count = ft_len_num((int)nb);
	ft_putnbr((int)(nb));
	ft_putchar('.');
	nb *= 1000000;
	if (nb < 0)
		nb *= -1;
	if ((int)nb % 1000000 == 0)
		ft_putstr("000000");
	else
		ft_putnbr((int)nb % 1000000);
	return (count + 7);
}
