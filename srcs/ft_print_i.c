/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:15:33 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 19:15:12 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_i(va_list args)
{
	int	nb;

	nb = (int)va_arg(args, int);
	ft_putnbr(nb);
	return (ft_len_num(nb));
}
