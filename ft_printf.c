/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:15:45 by aperis            #+#    #+#             */
/*   Updated: 2021/12/22 20:27:41 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conditions(int c, int d)
{
	if ((c == '%') && (d == 'c' || d == 's'
			|| d == 'p' || d == 'd'
			|| d == 'i' || d == 'u'
			|| d == 'X' || d == 'x'
			|| d == '%'))
		return (1);
	else
		return (0);
}

int	ft_countprint(int c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd')
		count += ft_putnbrlen(va_arg(args, int));
	if (c == 'i')
		count += ft_putnbrlen(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbrlenu(va_arg(args, unsigned int));
	if (c == 'c')
		count += ft_putcharlen(va_arg(args, int));
	if (c == 's')
		count += ft_putstrlen(va_arg(args, char *));
	if (c == 'p')
		count += ft_convhexapp(va_arg(args, unsigned long int));
	if (c == 'x')
		count += ft_convhexamin(va_arg(args, unsigned int));
	if (c == 'X')
		count += ft_convhexamaj(va_arg(args, unsigned int));
	if (c == '%')
		count += ft_putcharlen('%');
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i])
	{
		if (ft_conditions(s[i], s[i + 1]) == 1)
		{
			count += ft_countprint(s[i + 1], args);
			i += 2;
		}
		else
		{
			count += ft_putcharlen(s[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
