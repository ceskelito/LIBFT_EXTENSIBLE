/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:51:55 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/27 11:12:28 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdbool.h>
#include <unistd.h>

static bool	is_min_s(int n, char *buf, int *pos)
{
	if (n == INT_MIN)
	{
		buf[(*pos)++] = '-';
		buf[(*pos)++] = '2';
		buf[(*pos)++] = '1';
		buf[(*pos)++] = '4';
		buf[(*pos)++] = '7';
		buf[(*pos)++] = '4';
		buf[(*pos)++] = '8';
		buf[(*pos)++] = '3';
		buf[(*pos)++] = '6';
		buf[(*pos)++] = '4';
		buf[(*pos)++] = '8';
		return (true);
	}
	return (false);
}

static void	ft_putnbr_buf_rec(char *buf, int n, int *pos)
{
	char	digit;

	if (n < 10)
	{
		digit = n + '0';
		buf[(*pos)++] = digit;
		return ;
	}
	digit = (n % 10) + '0';
	ft_putnbr_buf_rec(buf, n / 10, pos);
	buf[(*pos)++] = digit;
}

void	ft_putnbr_buf(char *buf, int n, int fd)
{
	int	pos;

	(void)fd;
	pos = 0;
	if (is_min_s(n, buf, &pos))
		return ;
	if (n < 0)
	{
		n *= -1;
		buf[pos++] = '-';
	}
	ft_putnbr_buf_rec(buf, n, &pos);
}
