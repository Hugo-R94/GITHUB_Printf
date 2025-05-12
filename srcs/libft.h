/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugz <hugz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:26:03 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/09 22:08:41 by hugz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
int		ft_putformat(char *str);
int		ft_putchar(int c);
int		ft_count_format(char *s);
int		ft_is_format(char c);
int		ft_putstr(char *str);
int		ft_putnb(int nb);
int		ft_idformat(va_list args, char *str, int index);
int		ft_puthexa(int nb,bool up);
int		ft_putptr(void *ptr);
int		ft_putunsigned(int nb);

#endif
