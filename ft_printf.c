/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 00:54:59 by apellicc          #+#    #+#             */
/*   Updated: 2016/08/09 02:24:23 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_select_print(int *i, t_en *bin)
{
	bin->specifier == 'd' || bin->specifier == 'i' ? ft_is_d(i, bin) : 0;
	bin->specifier == 'p' ? ft_is_p(i, bin) : 0;
	bin->specifier == 'x' ? ft_is_x(i, bin) : 0;
	bin->specifier == 's' ? ft_is_s(i, bin) : 0;
}

void	ft_check(char *f, int *i, t_en *bin)
{
	ft_check_specifier(f, i, bin);
	ft_select_print(i, bin);
	bin->specifier = 0;
}

void	ft_parse(char *f, t_en *bin)
{
	int		i;

	i = 0;
	while (f[i] != '\0')
	{
		if (f[i] != '%')
		{
			ft_putchar(f[i]);
			++bin->ret;
			++i;
		}
		else
		{
			++i;
			ft_check(f, &i, bin);
		}
	}
}

int		ft_printf(const char *format, ...)
{
	t_en	*bin;
	char	*tmp;
	int ret;

	if (!format)
		return (-1);
	tmp = (char *)format;
	bin = (t_en *)malloc(sizeof(t_en));
	bin->specifier = 0;
	bin->ret = 0;
	va_start(bin->a, format);
	ft_parse(tmp, bin);
	va_end(bin->a);
	ret =  bin->ret;
	free(bin);
	return (ret);
}
