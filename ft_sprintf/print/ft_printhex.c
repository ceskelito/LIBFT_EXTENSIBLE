/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:34:06 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:29 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

int	ft_printhex_s(char *buf, unsigned int nbr, char hex_case)
{
	if (hex_case == LOW)
		ft_putnbr_hex_s(buf, nbr, LOW);
	else
		ft_putnbr_hex_s(buf, nbr, UP);
	return (count_digit_base_s(nbr, 16));
}
