/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:06:06 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:29:10 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned int num, int *cont)
{
	char	*str;

	str = ft_itoa_hex(num, 0);
	if (str == NULL)
	{
		free(str);
		*cont = -1;
	}
	ft_string(str, cont);
	free(str);
}
