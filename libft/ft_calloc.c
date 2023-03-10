/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:59:01 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/12 19:42:50 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	contador;

	memory = malloc(count * size);
	if (memory == NULL)
		return (NULL);
	contador = 0;
	while (contador < (count * size))
	{
		((unsigned char *)memory)[contador] = (unsigned char) 0;
		contador++;
	}
	return (memory);
}
