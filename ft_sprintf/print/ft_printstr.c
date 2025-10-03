/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:34:10 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:29 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sprintf.h"

int	ft_printstr_s(char *buf, char *s)
{
	int	i;

	if (s == NULL)
	{
		buf[0] = '(';
		buf[1] = 'n';
		buf[2] = 'u';
		buf[3] = 'l';
		buf[4] = 'l';
		buf[5] = ')';
		return (6);
	}
	i = 0;
	while (s[i])
	{
		buf[i] = s[i];
		i++;
	}
	return (i);
}
