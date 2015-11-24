/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 20:39:39 by sksourou          #+#    #+#             */
/*   Updated: 2015/07/27 20:54:52 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				stock_line(char *buf, char *line, int *i, int *var)
{
	static int		j = 0;

	while (buf[*i])
	{
		if (buf[*i] == '\n')
		{
			var[INDICE] = 1;
			(*i)++;
			line[j] = '\0';
			j = 0;
			return ;
		}
		else
		{
			line[j] = buf[*i];
			(*i)++;
			j++;
		}
	}
	line[j] = '\0';
	*i = 0;
	var[A] = 2;
}

int					get_next_line(int const fd, char **line)
{
	static char		buf[BUFF_SIZE + 1];
	static int		i = 0;
	int				var[3];

	var[INDICE] = 0;
	*line = (char *)malloc(sizeof(char) * (BUFF_SIZE + 4096));
	if (line == NULL)
		return (-1);
	while (var[INDICE] == 0)
	{
		if (i == 0)
		{
			var[RET] = read(fd, buf, BUFF_SIZE);
			if (var[RET] < 0)
				return (-1);
			if (var[RET] == 0)
				return ((var[A] == 2 && var[RET] != 0) ? 1 : 0);
			buf[var[RET]] = '\0';
		}
		stock_line(buf, *line, &i, var);
	}
	return (1);
}
