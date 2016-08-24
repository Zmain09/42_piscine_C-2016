/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjauze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 09:38:17 by vjauze            #+#    #+#             */
/*   Updated: 2016/08/22 23:52:25 by vjauze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct		s_stock_par
{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

int					ft_strlen(char *str);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);

#endif
