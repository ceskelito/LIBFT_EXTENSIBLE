/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:04:49 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/09 12:57:37 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_stdlib.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	cc;

	cc = (char)c;
	last = NULL;
	while (*s)
	{
		if (*s == cc)
			last = (char *)s;
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (last);
}
