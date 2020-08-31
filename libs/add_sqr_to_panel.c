/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_sqr_to_panel.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:43:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 17:41:20 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

void	add_sqr_to_panel(char **panel, int *coordinates, int size)
{
	int		i;
	int		j;
	char	sqr_char;

	sqr_char = get_sqr_char(panel);
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			panel[coordinates[0] + i][coordinates[1] + j] = sqr_char;
			j++;
		}
		i++;
	}
}
