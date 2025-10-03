/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 16:57:18 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:29 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

int	ft_printptr_s(char *buf, void *p)
{
	int	count;

	if (p == NULL)
	{
		buf[0] = '(';
		buf[1] = 'n';
		buf[2] = 'i';
		buf[3] = 'l';
		buf[4] = ')';
		return (5);
	}
	buf[0] = '0';
	buf[1] = 'x';
	count = 2 + ft_putptr_s(buf + 2, (unsigned long)p, 0);
	return (count);
}
