/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:12:05 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 19:58:35 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_s(va_list args)
{
	char	*str;

	str = (char *)va_arg(args, char *);
	if (str)
		return (ft_putstr(str));
	else
	{
		ft_putstr("(null)");
		return (6);
	}
}
