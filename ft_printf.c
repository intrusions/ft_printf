/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:13:25 by xel               #+#    #+#             */
/*   Updated: 2022/03/19 18:06:30 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "utils.c"


int	ft_check_ifprint(const char c)
{
	size_t	i;
	char	*accept;

	i = 0;	
	accept = "cspdiuxX";
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
	int	sum;

	sum = 0;
	if (c == 'c')
		sum = ft_print_c(args);
	else if (c == 's')
		sum = ft_print_s(args);
	else if (c == 'p')
		sum = ft_print_p(args);
	else if (c == 'd')
		sum = ft_print_d(args);
	else if (c == 'i')
		sum = ft_print_i(args);
	else if (c == 'u')
		sum = ft_print_u(args);
	else if (c == 'x')
		sum = ft_print_x(args);
	else if (c == 'X')
		sum = ft_print_X(args);
	return (sum);
}

int	ft_printf(const char *str, ...)
{
	size_t  i;
	int		sum;
	va_list args;

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

//main
/*
int		main()
{
	int		var = 10;
	int		ret;
	ft_printf("voici un pourcent suivie d'un | : %|\n");
	ft_printf("voici un double pourcent : %%\n");
	ft_printf("voici un char : %c\n", 'c');
	ft_printf("voici une string : %s\n", "gros bg");
	ft_printf("voici un int entier : %i\n", 15);
	ft_printf("voici 42 en base 16 minuscule : %x\n", 42);
	ft_printf("voici 42 en base 16 majuscule : %X\n", 42);
	
	printf("\n\n-----VALEUR DE RETOUR-----\n\n");
	ret = ft_printf("char : %c\n", 'c');
	printf("%d\n", ret);
	ret = ft_printf("string : %s\n", "gros");
	printf("%d\n", ret);
	ret = ft_printf("int : %i\n", 42);
	printf("%d\n", ret);
	ret = ft_printf("int base min: %x\n", 234234);
	printf("%d\n", ret);
	ret = ft_printf("int base maj: %X\n", 234234);
	printf("%d\n", ret);
	ret = ft_printf("pointeur: %p\n", &var);
	printf("%d\n", ret);
	ret = ft_printf("nombre decimal : %d\n", 1422.1111);
	printf("%d\n", ret);
	ret = ft_printf("nombre decimal non signer : %u\n", -4);
	printf("%d\n", ret);
	printf("chelou le %u\n", -4);
}*/