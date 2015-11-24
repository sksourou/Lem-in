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

// void	init(t_list *map)
// {
// 	map->posy = 0;
// 	map->posx = 0;
// 	map->start = 0;
// 	map->end = 0;
// }

void	stock_map(t_list *map)
{
	char *line;
	(void)map;

	line = malloc(sizeof(char) * 4096);
	while(get_next_line(0, &line) != 0)
	{
		list_add_next(&map, link_init((void *)line));
	}
	print_list(map);
}

int		main(int ac, char **av)
{	
	t_list	*map;

	(void)av;
	if (ac != 1)
		return (0);
	map = NULL;
	//init(map);
	stock_map(map);
	return (0);
}