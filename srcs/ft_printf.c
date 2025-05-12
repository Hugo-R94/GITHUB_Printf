/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugz <hugz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:28:53 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/09 22:08:56 by hugz             ###   ########.fr       */
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
	if (str[index] != '%')
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
		char_count = ft_putnb(va_arg(args, int));
	if (str[index+1] == 'u')
		char_count = ft_putunsigned(va_arg(args, int));
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
	
	int	index;
	int char_count;
	char *format = (char *)s;
	va_start(args, s);
	index = 0;
	char count = 0;
	while (format[index])
	{
		if (format[index] == '%' && format[index+1])
		{
			char_count += ft_idformat(args, format, index);
			index+=2;
			
		}	
		ft_putchar(format[index]);
		char_count++;
		index++;
	}
	va_end(args);
	return (0);	
}


// int main()
// {
// 	char *str = "hello world";
// 	ft_printf("le facteur a deposer ; %d lettre(s) a %s a l'adresse %p ",14, "rioms es montagnes", str );
// }