/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:13:38 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:28:14 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_p(va_list args)
{
	unsigned long long int	addr;

	addr = (unsigned long long int)va_arg(args, void *);
	if (addr)
	{
		ft_putstr("0x");
		ft_putnbr_base(addr, "0123456789abcdef");
		return (ft_len_num_base(addr, 16) + 2);
	}
	ft_putstr("(nil)");
	return (5);
}
