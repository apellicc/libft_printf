/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedlongnbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 20:06:02 by apellicc          #+#    #+#             */
/*   Updated: 2016/11/20 20:06:08 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunsignedlongnbr(unsigned long long c)
{
	unsigned long long	nb;

	nb = c;
	if (nb > 9)
	{
		ft_putlongnbr(nb / 10);
		ft_putlongnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}
