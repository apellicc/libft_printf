/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 06:08:14 by apellicc          #+#    #+#             */
/*   Updated: 2016/08/09 01:15:08 by apellicc         ###   ########.fr       */
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
	int				ret; // valeur a return
	char			specifier; // specifier
}					t_en;

void				ft_is_d(int *i, t_en *bin);
void				ft_is_p(int *i, t_en *bin);
void				ft_is_x(int *i, t_en *bin);
void				ft_is_s(int *i, t_en *bin);
void				ft_check_specifier(char *f, int *i, t_en *bin);
void				ft_select_print(int *i, t_en *bin);
void				ft_check(char *f, int *i, t_en *bin);
void				ft_parse(char *f, t_en *bin);
int					ft_printf(const char *format, ...);

#endif
