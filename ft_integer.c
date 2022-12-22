/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:06:09 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:27:21 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_integer(int num, int *cont)
{
	char	*str;

	str = ft_itoa(num);
	if (str == NULL)
	{
		free(str);
		*cont = -1;
	}
	ft_string(str, cont);
	free(str);
}
