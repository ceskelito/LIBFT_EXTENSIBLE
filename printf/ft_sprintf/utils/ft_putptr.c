/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:52:24 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:26:46 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf_internal.h"

static int	ft_putptr_rec(char *buf, unsigned long n, int count, int *pos)
{
	char	digit;
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		digit = base[n];
		buf[(*pos)++] = digit;
		count++;
		return (count);
	}
	digit = base[n % 16];
	count = ft_putptr_rec(buf, n / 16, count + 1, pos);
	buf[(*pos)++] = digit;
	return (count);
}

int	ft_putptr_s(char *buf, unsigned long n, int count)
{
	int	pos;

	pos = 0;
	return (ft_putptr_rec(buf, n, count, &pos));
}
