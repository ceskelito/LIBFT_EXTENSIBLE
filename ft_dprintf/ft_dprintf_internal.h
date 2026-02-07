/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf_internal.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 16:24:35 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:21:17 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DPRINTF_INTERNAL_H
# define FT_DPRINTF_INTERNAL_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOW 'l'
# define UP 'u'

int		ft_dformats(int fd, const char c, va_list args);
int		ft_dprintchr(int fd, int c);
int		ft_dprintstr(int fd, char *s);
int		ft_dprintptr(int fd, void *p);
int		ft_dprintnbr(int fd, int n);
int		ft_dprintunbr(int fd, unsigned int n);
int		ft_dprinthex(int fd, unsigned int n, char hex_case);

char	*ft_itoa_base(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_dputptr(int fd, unsigned long int n, int count);
int		count_digit_base(long int nbr, int base_size);
void	ft_dputunbr(int fd, unsigned int un);
void	ft_dputnbr_hex(int fd, unsigned int nbr, const char hex_case);

// LIBFT
void	ft_putnbr_fd(int n, int fd);
#endif