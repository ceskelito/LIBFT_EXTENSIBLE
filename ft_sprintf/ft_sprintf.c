/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:57:45 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:29 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"
#include <stdarg.h>

int	ft_formats_s(char *buf, const char f, va_list var)
{
	int	count;

	count = 0;
	if (f == '%')
		count += ft_printchr_s(buf, '%');
	else if (f == 'c')
		count += ft_printchr_s(buf, va_arg(var, int));
	else if (f == 's')
		count += ft_printstr_s(buf, va_arg(var, char *));
	else if (f == 'p')
		count += ft_printptr_s(buf, va_arg(var, void *));
	else if (f == 'd' || f == 'i')
		count += ft_printnbr_s(buf, va_arg(var, int));
	else if (f == 'u')
		count += ft_printunbr_s(buf, va_arg(var, unsigned int));
	else if (f == 'x')
		count += ft_printhex_s(buf, va_arg(var, unsigned int), LOW);
	else if (f == 'X')
		count += ft_printhex_s(buf, va_arg(var, unsigned int), UP);
	return (count);
}

int	ft_sprintf(char *buf, const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			count += ft_formats_s(buf + count, str[i], args);
			i++;
		}
		if (!str[i])
			break ;
		if (str[i] == '%')
			continue ;
		buf[count] = str[i];
		count++;
		i++;
	}
	va_end(args);
	buf[count] = '\0';
	return (count);
}
