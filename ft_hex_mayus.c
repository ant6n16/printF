/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_mayus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:06:02 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:28:48 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_mayus(unsigned int num, int *cont)
{
	char	*str;

	str = ft_itoa_hex(num, 1);
	if (str == NULL)
	{
		free(str);
		*cont = -1;
	}
	ft_string(str, cont);
	free(str);
}
