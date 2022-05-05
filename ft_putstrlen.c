/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:22:14 by aperis            #+#    #+#             */
/*   Updated: 2022/01/12 20:42:11 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstrlen("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_putcharlen(str[i]);
		i++;
	}
	return (i);
}
