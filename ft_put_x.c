/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:23:22 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/01 17:26:30 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_x(unsigned long long int i, int *count, const char *str)
{
	char	c;

	if ((i % 16) > 9 && (i % 16) < 16)
	{
		if (*str == 'x')
			c = i % 16 + 87;
		else
			c = i % 16 + 55;
	}
	else
		c = i % 16 + 48;
	*count = *count + 1;
	if (i / 16 != 0)
		ft_put_x(i / 16, count, str);
	write(1, &c, 1);
}
