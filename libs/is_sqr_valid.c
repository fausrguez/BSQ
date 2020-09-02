/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:29:38 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/structures.h"
#include "headers/functions.h"

static	int		fits_panel_row(t_panel_size panel_size,
	int row,
	int sqr_size)
{
	if (row + sqr_size <= panel_size.rows)
	{
		return (1);
	}
	return (0);
}

static	int		fits_panel_col(t_panel_size panel_size,
	int col,
	int sqr_size)
{
	if (col + sqr_size <= panel_size.cols)
	{
		return (1);
	}
	return (0);
}

int				is_sqr_valid(
	char **panel,
	t_panel_data *panel_data,
	int sqr_size)
{
	int		row;
	int		col;
	int		this_row;
	int		this_col;

	row = 0;
	while (row < sqr_size &&
		fits_panel_row(panel_data->panel_size, row, sqr_size))
	{
		col = 0;
		while (col < sqr_size &&
			fits_panel_col(panel_data->panel_size, col, sqr_size))
		{
			this_row = panel_data->coordinates->row + row;
			this_col = panel_data->coordinates->col + col;
			if (panel[this_row][this_col] == panel_data->panel_chars->obstacle)
			{
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
