/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:57:48 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:36:42 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_len_num(int nb)
{
	size_t			count;
	long long int	nbr;

	count = 0;
	nbr = nb;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

int	ft_len_num_base(unsigned long long int nb, int base)
{
	size_t					count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= base;
		count++;
	}
	return (count);
}
