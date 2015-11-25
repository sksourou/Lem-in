/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:03:38 by dmathe            #+#    #+#             */
/*   Updated: 2015/11/24 16:03:45 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_infos
{
	char 		*name;
	int 		start;
	int 		end;
	int			nbr_ants;
}				t_infos;

int 	ft_isdigits(char *str);
int		check_map(char *str, t_infos *infos);
#endif