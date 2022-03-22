/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xel <xel@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:14:13 by xel               #+#    #+#             */
/*   Updated: 2022/03/22 09:27:40 by xel              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_check_ifprint(const char c);
int		ft_call_function(const char c, va_list args);
int		ft_print_c(va_list args);
int		ft_print_s(va_list args);
int		ft_print_p(va_list args);
int		ft_print_id(va_list args);
int		ft_print_u(va_list args);
int		ft_print_x(va_list args);
int		ft_print_x_caps(va_list args);
int		ft_print_percent(void);

//print
void	ft_putchar(char c);
int		ft_putstr(const char *str);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_putnbr_base(unsigned long long int nb, char *base);

//return
int		ft_len_num(int nb);
int		ft_len_num_base(unsigned long long int nb, int base);

#endif