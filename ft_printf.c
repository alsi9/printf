/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:53:59 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/02 19:04:45 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	percent(const char *str, int *count, va_list ap)
{
	int	j;

	j = 0;
	if (*str == 'c')
		ft_put_char(va_arg(ap, int), count);
	else if (*str == 's')
		ft_put_str(va_arg(ap, char *), count);
	else if (*str == 'p')
		ft_put_p(va_arg(ap, unsigned long long int), count, str);
	else if (*str == 'd')
		ft_put_d_i(va_arg(ap, int), count);
	else if (*str == 'i')
		ft_put_d_i(va_arg(ap, int), count);
	else if (*str == 'u')
		ft_put_u(va_arg(ap, unsigned int), count);
	else if (*str == 'x')
		ft_put_x((unsigned int)va_arg(ap, unsigned long long int), count, str);
	else if (*str == 'X')
		ft_put_x((unsigned int)va_arg(ap, unsigned long long int), count, str);
	else if (*str == '%')
	{
		write(1, "%", 1);
		*count = *count + 1;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	if (str == NULL)
		return (0);
	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			percent(str, &count, ap);
		}
		else
		{
			write(1, str, 1);
			count++;
		}
		str++;
	}
	va_end(ap);
	return (count);
}
