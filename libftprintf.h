/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:38 by lstorey           #+#    #+#             */
/*   Updated: 2023/12/07 09:32:13 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		print_format(char specifier, va_list ap, int *check);
int		print_char(int c, int *check);
int		print_str(char *s, int *check);
int		print_digit(long n, int base, int *check);
int		ft_printf(const char *format, ...);
int		print_pnt(unsigned long n, unsigned long base, int *check);
int		print_hex_upper(long n, int base, int *check);
int		print_hex_lower(long n, int base, int *check);
#endif