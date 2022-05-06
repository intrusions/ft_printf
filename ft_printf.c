/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:13:25 by xel               #+#    #+#             */
/*   Updated: 2022/05/06 16:27:07 by jucheval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_check_ifprint(const char c)
{
	size_t	i;
	char	*accept;

	i = 0;
	accept = "cspdiuxX%";
	while (accept[i])
	{
		if (c == accept[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_call_function(const char c, va_list args)
{
	if (c == 'c')
		return(ft_print_c(args));
	else if (c == 's')
		return(ft_print_s(args));
	else if (c == 'p')
		return(ft_print_p(args));
	else if (c == 'd')
		return(ft_print_id(args));
	else if (c == 'i')
		return(ft_print_id(args));
	else if (c == 'u')
		return(ft_print_u(args));
	else if (c == 'x')
		return(ft_print_x(args));
	else if (c == 'X')
		return(ft_print_x_caps(args));
	else if (c == '%')
		return(ft_print_percent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		sum;
	va_list	args;

	va_start(args, str);
	i = 0;
	sum = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_check_ifprint(str[i + 1]))
		{
			sum += ft_call_function(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar(str[i]);
			sum++;
		}
		i++;
	}
	return (sum);
}
