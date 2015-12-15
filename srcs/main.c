/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmathe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:03:54 by dmathe            #+#    #+#             */
/*   Updated: 2015/11/24 16:03:55 by dmathe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include <stdlib.h>

void	init(t_infos *infos)
{
	infos->start = 0;
	infos->end = 0;
	infos->nbr_ants = 0;
}

void	stock_map(t_list *map, t_infos *infos)
{
	char *line;
	t_room	*room;

	room = NULL;
	while(get_next_line(0, &line) != 0)
	{
		list_add_next(&map, link_init((void *)line));
		if (check_map(line, infos, room) == 0)
				break ;
	}
	print_list((t_list *)room);
}

int		main(void)
{
	t_list	*map;
	t_infos	infos;

	map = NULL;
	init(&infos);
	stock_map(map, &infos);
	return (0);
}