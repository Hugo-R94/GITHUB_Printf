/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:30:33 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/06 15:07:21 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdint.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return(1);
}

int	ft_putstr(char *str)
{
	int	index;
	
	index = 0;
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

int	ft_puthexa(int nb)
{
	char			*base;
	int				count;
	unsigned int	n;
	
	count = 0;
	base = "0123456789abcdef";
	if (nb < 0)
	{
		count += ft_putchar ('-');
		n = (unsigned int)nb * -1;
	}
	if (nb >= 0)
		n = (unsigned int)nb;
	if (n >= 16)
		count += ft_puthexa (n / 16);
	count += ft_putchar(base[(n%16)]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;
	
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa((uintptr_t)ptr);
	return (count);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number = -56;
	int len;
	int len_hexa;
	char * test = malloc(1);
	//test hexa
	ft_putstr("en hexa ");
	ft_putnb(number);
	ft_putstr(" est egal a : ");
	len_hexa = ft_puthexa(number);
	ft_putstr(" et sa len est : ");
	ft_putnb(len_hexa);
	ft_putchar('\n');
	ft_putchar('\n');
	
	//test putnbr
	ft_putstr("en base 10 ");
	ft_putnb(number);
	ft_putstr(" est egal a : ");
	len = ft_putnb(number);
	ft_putstr(" len is = ");
	ft_putnb(len);
	ft_putchar('\n');	
	ft_putchar('\n');
	
	ft_putstr("l'adresse de  ");
	ft_putnb(number);
	ft_putstr(" est egal a : ");
	ft_putptr(test);
	ft_putchar('\n');
	return 0;
}