/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:43:08 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/25 18:43:10 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	print_room(t_room *room)
{	
		while (room)
		{
			ft_putendl(room->name);
			room = room->next;
		}
}

int 	ft_isdigits(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
 		else
			return (0);
	}
	return (1);
}

int 	ft_isasciis(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
 		else
			return (0);
	}
	return (1);
}