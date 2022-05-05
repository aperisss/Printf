/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convhexapp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:11:42 by aperis            #+#    #+#             */
/*   Updated: 2021/12/23 12:31:21 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convhexapp(unsigned long int n)
{
	if (n == 0)
	{	
		ft_putstrlen("0x0");
		return (3);
	}
	else
	{
		ft_putstrlen("0x");
		return (ft_convhexap(n));
	}
}
