/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:01:30 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/01 17:27:30 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_d_i(int i, int *count)
{
	char	c;

	if (i < 0)
	{
		write(1, "-", 1);
		*count = *count + 1;
		c = 48 - (i % 10);
		*count = *count + 1;
		if (i / -10 != 0)
			ft_put_d_i((i / -10), count);
		write(1, &c, 1);
	}
	else
	{
		c = i % 10 + 48;
		*count = *count + 1;
		if (i / 10 != 0)
			ft_put_d_i(i / 10, count);
		write(1, &c, 1);
	}
}
