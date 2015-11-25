/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:53:57 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/25 15:53:58 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

static int 		check_tubes(char *str, t_infos *infos)
{
	int i;
	int j;

	j = 0;
	i = 0;
	(void)infos;
	while(ft_isdigit(str[i]) == 1)
		i++;
	if (str[i++] != '-')
		return (0);
	while(ft_isdigit(str[i]) == 1)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

static int		check_ants(char *str, t_infos *infos)
{
	int i;

	i = 0;
	while (ft_isdigit(str[i++]) == 1)
	{
		if (!str[i])
		{
			infos->nbr_ants = ft_atoi(str);
			return (1);
		}
	}
	return (0);
}

static 	int		check_start(char *str, t_infos *infos)
{
	int i;

	i = 0;
	if (ft_strcmp(str, "##start") == 1)
	{
		infos->start = 1;
		return (1);
	}
	else if (ft_strcmp(str, "##end") == 1)
	{
		infos->end = 1;
		return (1);	
	}
	return (0);
}

static int		check_pos_start(char *str, t_infos *infos)
{
	int i;
	char **name;

	i = 0;
	if (infos->start < 2 || infos->end < 2)
	{
		name = ft_strsplit(str, ' ');
		if (ft_isdigits(name[1]) == 0 || ft_isdigits(name[2]) == 0)
			{
				ft_putendl("Bad position");
				return (0);
			}
			infos->start++;
			infos->end++;
		return (1);
	}
	return (0);
}

int check_pos(char *str)
{
	char **split;
	int i;

	i = 0;
	split = ft_strsplit(str, ' ');
	while (i != 3 && ft_isdigits(split[i]) == 1)
		i++;
	if (i == 3)
		return (1);
	return (0);
}
int		check_map(char *str, t_infos *infos)
{
		ft_putendl(str);
	if (check_ants(str, infos) == 1)
		return (1);
	else if (check_start(str, infos) == 1)
	 	return (1);
	else if (check_pos_start(str, infos) == 1)
	 	return (1);
	else if(check_pos(str) == 1)
		return (1);
	else if(check_tubes(str, infos) == 1)
	 	return (1);
	return (0);
}
