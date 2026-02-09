/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:51:55 by rceschel          #+#    #+#             */
/*   Updated: 2025/01/03 17:03:16 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putunbr_rec(char *buf, unsigned int n, int *pos)
{
	char	digit;

	if (n < 10)
	{
		digit = n + '0';
		buf[(*pos)++] = digit;
		return ;
	}
	digit = (n % 10) + '0';
	ft_putunbr_rec(buf, n / 10, pos);
	buf[(*pos)++] = digit;
}

void	ft_putunbr_s(char *buf, unsigned int n)
{
	int	pos;

	pos = 0;
	ft_putunbr_rec(buf, n, &pos);
}
