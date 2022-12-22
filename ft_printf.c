/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:17:10 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:02:50 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	va_list	arg;
	int		cont;
	char	*cad;

	cad = ft_strdup(format);
	if (cad == NULL)
		return (-1);
	va_start(arg, format);
	cont = ft_check_input(cad, &arg);
	free(cad);
	va_end(arg);
	return (cont);
}
