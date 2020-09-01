/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 18:03:39 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"
#include "headers/headers.h"

int	is_sqr_valid(
	char **panel,
	int *panel_size,
	int *coordinates,
	int size)
{
	int		row;
	int		col;
	int		i;
	int		j;
	char	obstacle;

	obstacle = get_obst_char(panel);
	row = coordinates[0];
	col = coordinates[1];
	i = 0;
	while ((i < size) && (i + size <= panel_size[0]))
	{
		j = 0;
		while ((j < size) && (j + size <= panel_size[1]))
		{
			if (panel[row + i][col + j] == obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
