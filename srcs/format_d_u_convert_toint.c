/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_d_u_convert_toint.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgenesis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 20:31:16 by pgenesis          #+#    #+#             */
/*   Updated: 2020/02/25 20:31:19 by pgenesis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	to_d(char *line, int i, t_params m, va_list a)
{
	m.long_long_in = (int)va_arg(a, int);
	m.f_otricatelnoe = NALICIE_MINUSA(m.long_long_in);
	m.isnull = ISNULL(m.long_long_in);
	if (!m.isnull && m.f_check_presicion == -1 && !m.f_check_width)
	{
		if (m.f_check_plus)
			ft_putchar2('+');
		return ;
	}
	print_format_d(&m, number_counting(ALWAYS_POZITIVE(m.long_long_in)));
}

void	to_ld(char *line, int i, t_params m, va_list a)
{
	m.long_long_in = (long int)va_arg(a, long int);
	m.f_otricatelnoe = NALICIE_MINUSA(m.long_long_in);
	m.isnull = ISNULL(m.long_long_in);
	if (!m.isnull && m.f_check_presicion == -1 && !m.f_check_width)
	{
		if (m.f_check_plus)
			ft_putchar2('+');
		return ;
	}
	print_format_d(&m, number_counting(ALWAYS_POZITIVE(m.long_long_in)));
}

void	to_lld(char *line, int i, t_params m, va_list a)
{
	m.long_long_in = va_arg(a, long long int);
	m.f_otricatelnoe = NALICIE_MINUSA(m.long_long_in);
	m.isnull = ISNULL(m.long_long_in);
	if (!m.isnull && m.f_check_presicion == -1 && !m.f_check_width)
	{
		if (m.f_check_plus)
			ft_putchar2('+');
		return ;
	}
	print_format_d(&m, number_counting(ALWAYS_POZITIVE(m.long_long_in)));
}

void	to_hd(char *line, int i, t_params m, va_list a)
{
	m.long_long_in = (short int)va_arg(a, int);
	m.f_otricatelnoe = NALICIE_MINUSA(m.long_long_in);
	m.isnull = ISNULL(m.long_long_in);
	if (!m.isnull && m.f_check_presicion == -1 && !m.f_check_width)
	{
		if (m.f_check_plus)
			ft_putchar2('+');
		return ;
	}
	print_format_d(&m, number_counting(ALWAYS_POZITIVE(m.long_long_in)));
}

void	to_hhd(char *line, int i, t_params m, va_list a)
{
	m.long_long_in = (char)va_arg(a, int);
	m.f_otricatelnoe = NALICIE_MINUSA(m.long_long_in);
	m.isnull = ISNULL(m.long_long_in);
	if (!m.isnull && m.f_check_presicion == -1 && !m.f_check_width)
	{
		if (m.f_check_plus)
			ft_putchar2('+');
		return ;
	}
	print_format_d(&m, number_counting(ALWAYS_POZITIVE(m.long_long_in)));
}
