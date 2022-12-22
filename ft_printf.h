/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:24:42 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/14 15:25:41 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "Libft/libft.h"

int		ft_printf(char const *format, ...);
int		ft_check_input(char *str, va_list *args);
int		ft_type(char c);
void	ft_replace_arg(char c, va_list *args, int *cont);
void	ft_putchar_fd_cont(char c, int fd, int *cont);
void	ft_char(char c, int *cont);
void	ft_integer(int num, int *cont);
void	ft_string(char *str, int *cont);
char	*ft_itoa_long(unsigned int n);
void	ft_uint(unsigned int num, int *cont);
char	*ft_itoa_hex(unsigned long n, int mayus);
void	ft_pointer(void *dir, int *cont);
void	ft_hex(unsigned int num, int *cont);
void	ft_hex_mayus(unsigned int num, int *cont);
#endif