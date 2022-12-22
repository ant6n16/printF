/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:44:26 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/12 19:42:54 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if ((c < 65) || (c > 122))
		return (0);
	if ((c >= 91) && (c <= 96))
		return (0);
	return (1);
}
