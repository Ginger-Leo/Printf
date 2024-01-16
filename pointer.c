/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:24:37 by lstorey           #+#    #+#             */
/*   Updated: 2023/12/05 14:25:28 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_pnt(unsigned long n, unsigned long base, int *check)
{
	int		count;

	count = 0;
	if (!n)
		return (print_str("0x0", check));
	else
	{
		count += print_str("0x", check);
		if (n < base)
			return (count += print_hex_lower((n / base), base, check));
		{
			count += print_hex_lower((n / base), base, check);
			return (count += print_hex_lower(n % base, base, check));
		}
	}
}
