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

#include "ft_dprintf.h"

void	ft_dputnbr_hex(int fd, unsigned int nbr, const char hex_case)
{
	const char	*base;
	char		digit;

	base = "0123456789abcdef";
	if (hex_case == UP)
		base = "0123456789ABCDEF";
	if (nbr < 16)
	{
		digit = base[nbr];
		write(fd, &digit, 1);
		return ;
	}
	digit = base[nbr % 16];
	ft_dputnbr_hex(fd, nbr / 16, hex_case);
	write(fd, &digit, 1);
}
