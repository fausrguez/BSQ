/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 12:46:28 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"
#include "headers/headers.h"

int		fits_panel_row(char *array, int dimension, int size)
{
	int *panel_size;

	panel_size = get_panel_size(array);
	if (dimension + size <= panel_size[0])
		return (1);
	return (0);
}

int		fits_panel_col(char *array, int dimension, int size)
{
	int *panel_size;

	panel_size = get_panel_size(array);
	if (dimension + size <= panel_size[1])
		return (1);
	return (0);
}

int		is_sqr_valid(
	char *array,
	char **panel,
	int *coordinates,
	int size)
{
	int		row;
	int		col;
	int		i;
	int		j;
	char	obstacle;

	obstacle = get_obst_char(array);
	row = coordinates[0];
	col = coordinates[1];
	i = 0;
	while ((i < size) && (fits_panel_row(array, i, size)))
	{
		j = 0;
		while ((j < size) && (fits_panel_col(array, j, size)))
		{
			if (panel[row + i][col + j] == obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
