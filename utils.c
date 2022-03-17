// utils

void	ft_putchar(const char c)
{
	write(1, &c, 1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

void	ft_putnbr(int n)
{
	long long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
}


void	ft_putnbr_base_min(int nbr)
{
	long long	nb;
	char		*base;

	nb = nbr;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 16)
	{
		ft_putnbr_base_min(nb / 16);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}

void	ft_putnbr_base_maj(int nbr)
{
	long long	nb;
	char		*base;

	nb = nbr;
	base = "0123456789ABCDEF";
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 16)
	{
		ft_putnbr_base_maj(nb / 16);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}

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

// other

int ft_print_c(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	ft_putchar(c);
	return (1);
}

int ft_print_s(va_list args)
{
	char    *str;

	str = (char *)va_arg(args, char *);
	return (ft_putstr(str));
}

int ft_print_i(va_list args)
{
	int nb;

	nb = (int)va_arg(args, int);
	ft_putnbr(nb);
	return (ft_len_num(nb));
}

int ft_print_x(va_list args)
{
	int nb;

	nb = (int)va_arg(args, int);
	ft_putnbr_base_min(nb);
}

int ft_print_X(va_list args)
{
	int nb;

	nb = (int)va_arg(args, int);
	ft_putnbr_base_maj(nb);
}