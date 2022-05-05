/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convhexamin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:32:50 by aperis            #+#    #+#             */
/*   Updated: 2021/12/22 19:38:06 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convhexamin(unsigned int n)
{
	char			*hexa;
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return (ft_putcharlen('0'));
	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	hexa = "0123456789abcdef";
	if (nbr > 15)
		ft_convhexamin(nbr / 16);
	write(1, &hexa[nbr % 16], 1);
	return (i);
}
