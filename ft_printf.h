/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:08:14 by apellicc          #+#    #+#             */
/*   Updated: 2016/11/21 00:54:51 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ULL	unsigned long long

# include <stdarg.h>
# include <stdlib.h>
# include "libft.h"

typedef struct		s_en
{
	va_list			a;
	int				ret;
	char			specifier;
}					t_en;

void				ft_is_d(int *i, t_en *bin);
void				ft_is_p(int *i, t_en *bin);
void				ft_is_x(int *i, t_en *bin);
void				ft_is_s(int *i, t_en *bin);
void				ft_check_specifier(char *f, int *i, t_en *bin);
int					ft_printf(const char *format, ...);

#endif
