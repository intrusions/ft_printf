/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:17:19 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:27:19 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_x_caps(va_list args)
{
	unsigned long long int	nb;

	nb = (unsigned long long int)va_arg(args, unsigned int);
	ft_putnbr_base(nb, "0123456789ABCDEF");
	return (ft_len_num_base(nb, 16));
}
