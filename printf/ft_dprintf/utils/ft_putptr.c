/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:52:24 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:20:23 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf_internal.h"

int	ft_dputptr(int fd, unsigned long n, int count)
{
	char	digit;
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
	{
		digit = base[n];
		write(fd, &digit, 1);
		count++;
		return (count);
	}
	digit = base[n % 16];
	count = ft_dputptr(fd, n / 16, count + 1);
	write(fd, &digit, 1);
	return (count);
}
