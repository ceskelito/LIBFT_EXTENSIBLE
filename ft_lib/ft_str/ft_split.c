/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 11:06:37 by rceschel          #+#    #+#             */
/*   Updated: 2025/03/04 15:51:00 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"
#include <stdlib.h>

static int	count_word(const char *str, char sep)
{
	int	i;
	int	wn;

	i = 0;
	wn = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (!str[i])
			break ;
		wn++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (wn);
}

static void	set_words_limits(const char *str, char sep, int *start, int *len)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (!str[i])
			break ;
		start[w] = i;
		while (str[i] && str[i] != sep)
			i++;
		len[w] = i - start[w] + 1;
		w++;
	}
	return ;
}

void	*free_all(char **s, int *a, int *b)
{
	free(s);
	free(a);
	free(b);
	return (NULL);
}

// char	**single_char_split(const char *s)
// {
// 	char	**splitted;
// 	int		w_count;
// 	int 	w_num;

// 	w_count = ft_strlen(s);
// 	splitted = ft_calloc((w_count + 1), sizeof(char *));
// 	if(!splitted)
// 		return (NULL);
// 	w_num = 0;
// 	while(w_num < w_count)
// 		splitted[w_num] = s[w_num];
// 	return (splitted);
// }

char	**ft_split(const char *s, char c)
{
	char	**splitted;
	int		*w_start;
	int		*w_len;
	int		w_count;
	int		w_num;

	// if(c == '\0')
	// 	return(single_char_split(s));
	w_count = count_word(s, c);
	splitted = ft_calloc((w_count + 1), sizeof(char *));
	w_start = malloc(w_count * sizeof(int));
	w_len = malloc(w_count * sizeof(int));
	if (!(splitted && w_start && w_len))
		return (free_all(splitted, w_start, w_len));
	set_words_limits(s, c, w_start, w_len);
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
/*

int	main(int ac, char **av)
{
	if(ac != 3)
	{
		printf("\nNumero argomenti errato!\n");
		return (0);
	}

	char **spl;
	spl = ft_split(av[1], av[2][0]);

	int i = 0;
	while(spl[i] != NULL)
	{
		printf("%s\n", spl[i]);
		free(spl[i]);
		i++;
	}
	free(spl);
	return (0);
}*/
