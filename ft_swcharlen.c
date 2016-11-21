/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swcharlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 00:53:34 by apellicc          #+#    #+#             */
/*   Updated: 2016/11/21 00:53:35 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_swcharlen(wchar_t *value)
{
	int		ret;
	int		t;

	t = 0;
	ret = 0;
	while (value[t])
	{
		ret += ft_wcharlen(value[t]);
		t++;
	}
	return (ret);
}
