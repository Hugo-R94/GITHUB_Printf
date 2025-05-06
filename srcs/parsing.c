/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:30:33 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/06 10:39:01 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_is_format(char c)
{
	int	i;
	char *charset;
	
	charset ="cspdiuxX";
	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_format(char *str)
{
	int	index;
	int	count;
	
	count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] == '%') 	
		{
			if(ft_is_format(str[index+1]) == 1)
				count++;
		}
		index++;
	}
	return (count);	
}

// char	*ft_parsing(char *string)
// {
// 	while (condition)
// 	{
// 		/* code */
// 	}
// }

// int main()
// {
// 	char str[] = "les chaussettes de %s sont au nombre de %d\n";
// 	printf("il y a %d format(s) dans la string : %s",ft_count_format(str),str);
// }