/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:52:24 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:14:54 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_internal.h"

int	ft_putptr(unsigned long n, int count)
{
	char	digit;
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		digit = base[n];
		write(1, &digit, 1);
		count++;
		return (count);
	}
	digit = base[n % 16];
	count = ft_putptr(n / 16, count + 1);
	write(1, &digit, 1);
	return (count);
}
