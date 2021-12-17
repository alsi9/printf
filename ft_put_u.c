/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:50:42 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/01 17:24:15 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_u(unsigned int i, int *count)
{
	char	c;

	c = i % 10 + 48;
	*count = *count + 1;
	if (i / 10 != 0)
		ft_put_u(i / 10, count);
	write(1, &c, 1);
}
