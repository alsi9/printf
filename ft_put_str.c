/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:01:16 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/01 18:41:16 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_str(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)\0";
	while (str[i])
	{
		ft_put_char(str[i], count);
		i++;
	}
}
