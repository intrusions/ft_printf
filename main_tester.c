/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tester.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 04:14:24 by xel               #+#    #+#             */
/*   Updated: 2022/03/21 04:32:31 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	main()
{
	int		test_p = 12;
	void	*second_p = &test_p;
	int 	ret_reel_function = 0;
	int 	ret_my_function = 0;

	//simple string
	printf("--------------   simple string, no argument   --------------\n");
	ret_my_function = ft_printf("ft_printf    : Hello World!\n");
	ret_reel_function = printf("real printf  : Hello World!\n");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//char
	printf("--------------   char : c   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %c\n", 'c');
	ret_reel_function = printf("real printf  : %c\n", 'c');
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//string
	printf("--------------   string : s   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %s\n", "Hello World!");
	ret_reel_function = printf("real printf  : %s\n", "Hello World!");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//pointer
	printf("--------------   pointer : p   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%p,%p,%p]\n", &test_p, second_p, &second_p);
	ret_reel_function = printf("real printf  : [%p,%p,%p]\n", &test_p, second_p, &second_p);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//double
	printf("--------------   double : d   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%d,%d,%d,%d]\n", 10.5 , -10.5, 10.0, 0.0);
	ret_reel_function = printf("real printf  : [%f,%f,%f,%f]\n", 10.5 , -10.5, 10.0, 0.0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int
	printf("--------------   int : i   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%i,%i,%i]\n", (int)-2147483648, (int)2147483647, 0);
	ret_reel_function = printf("real printf  : [%i,%i,%i]\n", (int)-2147483648, (int)2147483647, 0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//unsigned double
	printf("--------------   unsigned double : u   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%u,%u]\n", (unsigned int)10, (unsigned int)0);
	ret_reel_function = printf("real printf  : [%u,%u]\n", (unsigned int)10, (unsigned int)0);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int convert to hexa in lowercase
	printf("--------------   hexa lowercase : x   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%x,%x,%x,%x,%x]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	ret_reel_function = printf("real printf  : [-80000000,%x,%x,-2a,%x]\n", (int)2147483647, 0, 42);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//int convert to hexa in uppercase
	printf("--------------   hexa uppercase : X   --------------\n");
	ret_my_function = ft_printf("ft_printf    : [%X,%X,%X,%X,%X]\n", (int)-2147483648, (int)2147483647, 0, -42, 42);
	ret_reel_function = printf("real printf  : [-80000000,%X,%X,-2A,%X]\n", (int)2147483647, 0, 42);
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);

	//percent
	printf("--------------   percent : %%   --------------\n");
	ret_my_function = ft_printf("ft_printf    : %%\n");
	ret_reel_function = printf("real printf  : %%\n");
	if (ret_reel_function == ret_my_function)
		printf("return is ok : [%d,%d]\n\n",ret_my_function, ret_reel_function);
	else
		printf("return is not ok : [%d,%d]\n\n", ret_my_function, ret_reel_function);
}


