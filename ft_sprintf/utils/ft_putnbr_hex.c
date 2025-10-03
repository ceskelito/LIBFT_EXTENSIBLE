/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:33:59 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:29 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

static void	ft_putnbr_hex_rec(char *buf, unsigned int nbr,
	const char hex_case, int *pos)
{
	const char	*base;
	char		digit;

	base = "0123456789abcdef";
	if (hex_case == UP)
		base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		digit = base[nbr];
		buf[(*pos)++] = digit;
		return ;
	}
	digit = base[nbr % 16];
	ft_putnbr_hex_rec(buf, nbr / 16, hex_case, pos);
	buf[(*pos)++] = digit;
}

void	ft_putnbr_hex_s(char *buf, unsigned int nbr, const char hex_case)
{
	int	pos;

	pos = 0;
	ft_putnbr_hex_rec(buf, nbr, hex_case, &pos);
}
