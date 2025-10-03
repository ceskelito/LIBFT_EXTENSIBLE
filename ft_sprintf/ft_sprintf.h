/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprintf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceskelito <ceskelito@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 16:24:35 by rceschel          #+#    #+#             */
/*   Updated: 2025/07/12 16:09:54 by ceskelito        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SPRINTF_H
# define FT_SPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define LOW 'l'
# define UP 'u'

int		ft_sprintf(char *buf, const char *str, ...);
int		ft_formats_s(char *buf, const char c, va_list args);
int		ft_printchr_s(char *buf, int c);
int		ft_printstr_s(char *buf, char *s);
int		ft_printptr_s(char *buf, void *p);
int		ft_printnbr_s(char *buf, int n);
int		ft_printunbr_s(char *buf, unsigned int n);
int		ft_printhex_s(char *buf, unsigned int n, char hex_case);

char	*ft_itoa_base_s(int nbr, char *base);
void	ft_putnbr_base_s(char *buf, int nbr, char *base);
int		ft_putptr_s(char *buf, unsigned long int n, int count);
int		count_digit_base_s(long int nbr, int base_size);
void	ft_putunbr_s(char *buf, unsigned int un);
void	ft_putnbr_hex_s(char *buf, unsigned int nbr, const char hex_case);

// LIBFT
void	ft_putnbr_buf(char *buf, int n, int fd);
#endif