/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putswchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:05:39 by apellicc          #+#    #+#             */
/*   Updated: 2016/11/20 20:05:45 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putswchar(wchar_t *value)
{
	int		t;
	int		ret;

	ret = 0;
	t = 0;
	while (value[t])
	{
		ret += ft_putwchar(value[t]);
		t++;
	}
	return (ret);
}
