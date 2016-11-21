/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:06:22 by apellicc          #+#    #+#             */
/*   Updated: 2016/11/20 20:07:25 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_is_d(int *i, t_en *bin)
{
	long long int		nb;

	nb = va_arg(bin->a, int);
	ft_putnbr(nb);
	bin->ret += ft_intlen(nb);
	*i += 1;
}

void	ft_is_s(int *i, t_en *bin)
{
	char	*str;
	int		tmp;

	str = va_arg(bin->a, char *);
	str ? tmp = ft_strlen(str) : 0;
	if (!str)
		bin->ret += ft_putstr("(null)");
	else
		bin->ret += ft_putstr(str);
	*i = *i + 1;
}

void	ft_is_p(int *i, t_en *bin)
{
	long long int	v;
	char			*tmp;

	v = va_arg(bin->a, long long int);
	tmp = ft_uitoa_base(v, 16);
	bin->ret += ft_putstr("0x");
	bin->ret += ft_putstr(tmp);
	free(tmp);
	*i += 1;
}

void	ft_is_x(int *i, t_en *bin)
{
	long long int		nb;
	char				*tmp;

	nb = va_arg(bin->a, long long int);
	tmp = ft_itoa_base(nb, 16);
	if (nb != 0)
	{
		bin->ret += ft_putstr(tmp);
	}
	else
		bin->ret += ft_putchar(' ');
	free(tmp);
	*i += 1;
}

void	ft_check_specifier(char *f, int *i, t_en *bin)
{
	if ((ft_strchr("spdxi", f[*i])))
		bin->specifier = *ft_strchr("spdxi", f[*i]);
	else if (f[*i] != 0)
	{
		bin->ret += ft_putchar(f[*i]);
		*i += 1;
	}
}
