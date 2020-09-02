/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 14:36:11 by farodrig      ########   odam.nl         */
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
	int		initial_row;
	int		initial_col;
	int		row;
	int		col;
	char	obstacle;

	obstacle = get_obst_char(array);
	initial_row = coordinates[0];
	initial_col = coordinates[1];
	row = 0;
	while ((row < size) && (fits_panel_row(array, row, size)))
	{
		col = 0;
		while ((col < size) && (fits_panel_col(array, col, size)))
		{
			if (panel[initial_row + row][initial_col + col] == obstacle)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
