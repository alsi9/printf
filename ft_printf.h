/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:05:36 by ephantom          #+#    #+#             */
/*   Updated: 2021/11/02 11:08:37 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_put_char(char c, int *count);
void	ft_put_str(char *str, int *count);
void	ft_put_d_i(int i, int *count);
void	ft_put_u(unsigned int i, int *count);
void	ft_put_p(unsigned long long int i, int *count, const char *str);
void	ft_put_x(unsigned long long int i, int *count, const char *str);

#endif
