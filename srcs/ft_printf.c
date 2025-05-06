/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:28:53 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/06 12:15:02 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

// char	*ft_str_to_print(int nargs, char *s, ...)
// {
// 	va_list argcs;
// 	char	**argvs;
	
// 	argvs = malloc(ft_count_format(str));
// 	va_start(argcs, s);
// 	while (condition)
// 	{
// 		/* code */
// 	}
	
// }

int	ft_printf(const char *s, ...)
{
	va_list	argcs;

	va_start(argcs, s);
	printf("%s\n",s);
	while (nargs > 1)
	{	
		printf("%s\n",va_arg(argcs, char *));
		nargs--;
	}
	va_end(argcs);
	return (0);	
}

int	ft_putformat(char *str)
{
	int	index;
	int	print_len;
	
	while (str[index])
	{
		while (str[index] != '%')	
			ft_putchar(str[index++]);
		if (ft_is_format(str[index]))
			ft_idformat(str[index++], index);		
	}
	
}

int	ft_idformat(char *arg, char *str, int index)
{
	int	char_count;
	
	char_count = 0;
	if (str[index] == '%')
			return(0);
	if (str[index+1]=='c')
		char_count = ft_putchar(arg);
	if (str[index + 1] == 's')
		char_count = ft_putstr(arg);
	if (str[index + 1] == 'p')
		char_count = ft_putstr(&arg);
	if (str[index+1] == 'i')
		char_count = ft_putnb(arg);
	if (str[index + 1] == 'd')
	if (str[index+1] == 'u')
		char_count = ft_putnb((unsigned int)arg);
	if (str[index+1] == 'x') 
		
	if (str[index+1] == 'X')

	if (str[index+1] == '%')
		char_count = ft_putchar('%');
	return (char_count);
}

// int main()
// {
// 	char *string = "string";
// 	if (ft_count_format(string) = argc - 1 )
// 		return (0);
// 	ft_printf(2,"le","la","les");	
// }