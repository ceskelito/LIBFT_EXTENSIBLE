/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_internal.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:51:38 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/09 13:02:45 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_INTERNAL_H
# define GNL_INTERNAL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

# include <fcntl.h> // O_RDONLY
# include <stdbool.h>
# include <stdlib.h> // malloc()
# include <unistd.h> // read()

char			*ft_append_buff(char *line, char buff[]);
void			ft_init_line(char **line, char buff[]);

/* utils */
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s);
char			*ft_strchr(const char *s, int chr);
int				ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);

#endif