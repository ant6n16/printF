/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:06:13 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:24:30 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(void *dir, int *cont)
{
	char	*str;

	ft_string("0x", cont);
	str = ft_itoa_hex((unsigned long) dir, 0);
	if (str == NULL)
	{
		free(str);
		*cont = -1;
	}
	ft_string(str, cont);
	free(str);
}
