/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlenu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:33:36 by aperis            #+#    #+#             */
/*   Updated: 2021/12/22 19:39:03 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrlenu(unsigned int n)
{
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return (ft_putcharlen('0'));
	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (nbr > 9)
		ft_putnbrlenu(nbr / 10);
	ft_putcharlen((nbr % 10) + 48);
	return (i);
}	
