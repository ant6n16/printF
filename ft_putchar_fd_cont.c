/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_cont.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:43:09 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/15 14:17:09 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd_cont(char c, int fd, int *cont)
{
	int	aux;

	aux = write(fd, &c, 1);
	if (aux == -1)
	{
		*cont = -1;
		return ;
	}
	(*cont)++;
}
