/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:16:41 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:27:14 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_x(va_list args)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(args, unsigned int);
	ft_putnbr_base(nb, "0123456789abcdef");
	return (ft_len_num_base(nb, 16));
}
