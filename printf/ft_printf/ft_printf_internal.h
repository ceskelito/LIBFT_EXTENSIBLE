/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_internal.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:11:34 by rceschel          #+#    #+#             */
/*   Updated: 2026/02/07 17:13:01 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INTERNAL_H
# define FT_PRINTF_INTERNAL_H

# include <stdarg.h>
// # include <stdlib.h>
# include <unistd.h>

# define LOW 'l'
# define UP 'u'

int		ft_formats(const char c, va_list args);
int		ft_printchr(int c);
int		ft_printstr(char *s);
int		ft_printptr(void *p);
int		ft_printnbr(int n);
int		ft_printunbr(unsigned int n);
int		ft_printhex(unsigned int n, char hex_case);

char	*ft_itoa_base(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base);
int		ft_putptr(unsigned long int n, int count);
int		count_digit_base(long int nbr, int base_size);
void	ft_putunbr(unsigned int un);
void	ft_putnbr_hex(unsigned int nbr, const char hex_case);

// LIBFT
void	ft_putnbr_fd(int n, int fd);
#endif
