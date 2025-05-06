/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrouchy <hrouchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:26:03 by hrouchy           #+#    #+#             */
/*   Updated: 2025/05/06 11:37:12 by hrouchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>


int		ft_printf(const char *s, ...);
int		ft_putformat(char *str);
int		ft_putchar(int c);
int		ft_count_format(char *str);
int		ft_is_format(char c);
int		ft_putstr(char *str);
int		ft_putnb(int nb);
int		ft_idformat(char *arg, char *str, int index);

#endif
