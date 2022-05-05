/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:14:48 by aperis            #+#    #+#             */
/*   Updated: 2021/12/23 15:38:02 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_printf(char const *s, ...);
int	ft_putcharlen(int c);
int	ft_putnbrlen(int n);
int	ft_putnbrlenu(unsigned int n);
int	ft_putstrlen(char *str);
int	ft_convhexamin(unsigned int n);
int	ft_convhexamaj(unsigned int n);
int	ft_convhexap(unsigned long int n);
int	ft_convhexapp(unsigned long int n);

#endif
