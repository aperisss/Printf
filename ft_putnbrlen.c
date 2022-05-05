/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:27:44 by aperis            #+#    #+#             */
/*   Updated: 2021/12/22 19:46:51 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(unsigned int n)
{
	if (n == 2147483648)
	{
		ft_putstrlen("2147483648");
		return (0);
	}
	return (1);
}

int	ft_putnbrlen(int n)
{
	int				i;
	unsigned int	nbr;

	i = 0;
	if (n == 0)
		return (ft_putcharlen('0'));
	if (n < 0)
	{	
		ft_putcharlen('-');
		n = -n;
		i++;
	}
	nbr = n;
	if (ft_check(nbr) == 0)
		return (11);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (nbr > 9)
		ft_putnbrlen(nbr / 10);
	ft_putcharlen((nbr % 10) + 48);
	return (i);
}	
