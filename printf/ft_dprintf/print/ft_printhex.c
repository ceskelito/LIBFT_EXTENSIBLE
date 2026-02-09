/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:34:06 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:20:23 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf_internal.h"

int	ft_dprinthex(int fd, unsigned int nbr, char hex_case)
{
	if (hex_case == LOW)
		ft_dputnbr_hex(fd, nbr, LOW);
	else
		ft_dputnbr_hex(fd, nbr, UP);
	return (count_digit_base(nbr, 16));
}
