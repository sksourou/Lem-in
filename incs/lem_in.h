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

typedef struct  s_link
{
	struct s_link	*next;
	struct s_room	*target;
}				t_link;

typedef struct 	s_room
{
	char		*name;
	struct s_room	*next;
	struct s_room	*prev;
	t_link			*link;

}				t_room;

typedef struct s_infos
{
	int 		start;
	int 		end;
	int			nbr_ants;
}				t_infos;

void	print_room(t_room *room);
int 	ft_isasciis(char *str);
int 	ft_isdigits(char *str);
int		check_map(char *str, t_infos *infos, t_room *room);

#endif