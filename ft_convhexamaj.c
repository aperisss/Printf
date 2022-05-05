/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convhexamaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:38:16 by aperis            #+#    #+#             */
/*   Updated: 2021/12/22 19:33:55 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convhexamaj(unsigned int n)
{
	char			*hexa;
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return (ft_putcharlen('0'));
	hexa = "0123456789ABCDEF";
	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	if (nbr > 15)
		ft_convhexamaj(nbr / 16);
	write(1, &hexa[nbr % 16], 1);
	return (i);
}
