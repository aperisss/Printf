/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convhexap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:58:39 by aperis            #+#    #+#             */
/*   Updated: 2022/01/12 20:42:21 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convhexap(unsigned long int n)
{
	char				*hexa;
	int					i;
	unsigned long int	nbr;

	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	hexa = "0123456789abcdef";
	if (nbr > 15)
		ft_convhexap(nbr / 16);
	write(1, &hexa[nbr % 16], 1);
	return (i + 2);
}
