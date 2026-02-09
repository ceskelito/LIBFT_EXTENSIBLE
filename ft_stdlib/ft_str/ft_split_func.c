/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:06:37 by rceschel          #+#    #+#             */
/*   Updated: 2025/11/21 17:12:55 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"
#include <stdlib.h>

static int	count_word(const char *str, int (*is_sep)(int))
{
	int	i;
	int	wn;

	i = 0;
	wn = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (!str[i])
			break ;
		wn++;
		while (str[i] && !is_sep(str[i]))
			i++;
	}
	return (wn);
}

static void	set_words_limits(const char *str, int (*is_sep)(int), int *start, int *len)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (!str[i])
			break ;
		start[w] = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		len[w] = i - start[w] + 1;
		w++;
	}
	return ;
}

static void	*free_all(char **s, int *a, int *b)
{
	free(s);
	free(a);
	free(b);
	return (NULL);
}

char	**ft_split_func(const char *s, int (*is_sep)(int))
{
	char	**splitted;
	int		*w_start;
	int		*w_len;
	int		w_count;
	int		w_num;

	if (!s)
		return (NULL);
	w_count = count_word(s, is_sep);
	splitted = ft_calloc((w_count + 1), sizeof(char *));
	w_start = malloc(w_count * sizeof(int));
	w_len = malloc(w_count * sizeof(int));
	if (!(splitted && w_start && w_len))
		return (free_all(splitted, w_start, w_len));
	set_words_limits(s, is_sep, w_start, w_len);
	w_num = 0;
	while (w_num < w_count)
	{
		splitted[w_num] = malloc((w_len[w_num]) * sizeof(char));
		ft_strlcpy(splitted[w_num], s + w_start[w_num], w_len[w_num]);
		w_num++;
	}
	free(w_start);
	free(w_len);
	return (splitted);
}
