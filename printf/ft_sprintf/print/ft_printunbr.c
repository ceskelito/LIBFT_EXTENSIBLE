/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:34:15 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:26:46 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf_internal.h"

static int	count_digits(unsigned int n)
{
	int	d;

	d = 1;
	n /= 10;
	while (n)
	{
		n /= 10;
		d++;
	}
	return (d);
}

int	ft_printunbr_s(char *buf, unsigned int n)
{
	ft_putunbr_s(buf, n);
	return (count_digits(n));
}
