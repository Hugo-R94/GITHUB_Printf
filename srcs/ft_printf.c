/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:28:53 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/07 15:00:26 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "libft.h"

// char	*ft_str_to_print(int nargs, char *s, ...)
// {
// 	va_list args;
// 	char	**argvs;
	
// 	argvs = malloc(ft_count_format(str));
// 	va_start(args, s);
//}



// int	ft_putformat(char *str)
// {
// 	int	index;
// 	int	print_len;
	
// 	while (str[index])
// 	{
// 		while (str[index] != '%')	
// 			ft_putchar(str[index++]);
// 		if (ft_is_format(str[index]))
// 			ft_idformat(str[index++], index);		
// 	}
	
// }

int	ft_idformat(va_list args, char *str, int index)
{
	int	char_count;
	
	char_count = 0;
	if (str[index] == '%')
			return(0);
	if (str[index+1]=='c')
		char_count = ft_putchar(va_arg(args, int));
	if (str[index + 1] == 's')
		char_count = ft_putstr(va_arg(args, char *));
	if (str[index + 1] == 'p')
		char_count = ft_putptr(va_arg(args, char *));
	if (str[index+1] == 'i')
		char_count = ft_putnb(va_arg(args, int));
	if (str[index + 1] == 'd')
	if (str[index+1] == 'u')
		char_count = ft_putnb(va_arg(args, int));
	if (str[index+1] == 'x') 
		char_count = ft_puthexa(va_arg(args,unsigned int),0);
	if (str[index+1] == 'X')
	char_count = ft_puthexa(va_arg(args,unsigned int),1);
	if (str[index+1] == '%')
		char_count = ft_putchar('%');
	return (char_count);
}


int	ft_printf(const char *s, ...)
{
	va_list args;
	
	va_start(args, s);
	int	index;
	char *format = (char *)s;
	va_start(args, s);
	index = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index+1])
		{
			va_arg(args, char *);
			ft_idformat(args, format, index);
			index++;
			index++;
			
		}	
		ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (0);	
}


int main()
{
	ft_printf("%s facteur %s passe %s","le","est","ici");
}