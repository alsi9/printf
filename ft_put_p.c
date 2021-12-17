/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:49:55 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/01 17:22:01 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_pp(unsigned long long int i, int *count, const char *str)
{
	char	c;

	if ((i % 16) > 9 && (i % 16) < 16)
		c = (i % 16) + 87;
	else
		c = (i % 16) + 48;
	*count = *count + 1;
	if (i / 16 != 0)
		ft_put_pp(i / 16, count, str);
	write(1, &c, 1);
}

void	ft_put_p(unsigned long long int i, int *count, const char *str)
{
	write(1, "0x", 2);
	*count = *count + 2;
	ft_put_pp(i, count, str);
}
