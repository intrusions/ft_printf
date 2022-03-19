/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:57:48 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 19:14:16 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_len_num(int nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_len_num_u(unsigned int nb)
{
	size_t	count;

	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_base_len(int nb)
{
	size_t	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}

int	ft_base_len_ptr(unsigned long long int nb)
{
	size_t	count;

	count = 0;
	while (nb > 0)
	{
		nb /= 16;
		count++;
	}
	return (count);
}
