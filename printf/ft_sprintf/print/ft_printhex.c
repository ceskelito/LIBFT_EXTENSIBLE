/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:34:06 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:26:46 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf_internal.h"

int	ft_printhex_s(char *buf, unsigned int nbr, char hex_case)
{
	if (hex_case == LOW)
		ft_putnbr_hex_s(buf, nbr, LOW);
	else
		ft_putnbr_hex_s(buf, nbr, UP);
	return (count_digit_base_s(nbr, 16));
}
