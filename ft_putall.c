/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugz <hugz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:30:33 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/13 22:11:27 by hugz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(unsigned int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[index])
		ft_putchar(str[index++]);
	return (index);
}

int	ft_putnb(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		n = nb * -1;
	}
	if (nb >= 0)
		n = nb;
	if (n >= 10)
		count += ft_putnb(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_putunsigned(int nb)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = (unsigned int)nb;
	if (n >= 10)
		count += ft_putunsigned(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_puthexa(unsigned long int nb, bool up)
{
	char			*base;
	int				count;
	//unsigned int	n;

	count = 0;
	if (up == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	// if (nb < 0)
	// {
	// 	count += ft_putchar ('-');
	// 	n = (unsigned int)nb * -1;
	// }
	// if (nb >= 0)
	// 	n = (unsigned int)nb;
	if (nb >= 16)
		count += ft_puthexa (nb / 16, up);
	count += ft_putchar(base[(nb % 16)]);
	return (count);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	int number = -56481;
// 	int len;
// 	int len_hexa;
// 	char * test = malloc(1);
// 	//test hexa
// 	ft_putstr("en hexa ");
// 	ft_putnb(number);
// 	ft_putstr(" est egal a : ");
// 	len_hexa = ft_puthexa(number,1);
// 	ft_putstr(" et sa len est : ");
// 	ft_putnb(len_hexa);
// 	ft_putchar('\n');
// 	ft_putchar('\n');
// 	//test putnbr
// 	ft_putstr("en base 10 ");
// 	ft_putnb(number);
// 	ft_putstr(" est egal a : ");
// 	len = ft_putnb(number);
// 	ft_putstr(" len is = ");
// 	ft_putnb(len);
// 	ft_putchar('\n');	
// 	ft_putchar('\n');
// 	ft_putstr("l'adresse de  ");
// 	ft_putnb(number);
// 	ft_putstr(" est egal a : ");
// 	ft_putptr(test);
// 	ft_putchar('\n');
// 	return 0;
// }