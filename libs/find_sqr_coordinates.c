/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_sqr_coordinates.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:06:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:40:48 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/structures.h"
#include "headers/functions.h"

static	void	update_panel_data(
	t_panel_data *panel_data,
	int sqr_size,
	int row,
	int col)
{
	panel_data->coordinates->row = row;
	panel_data->coordinates->row = col;
	panel_data->sqr_size = sqr_size;
}

int			find_sqr_coordinates(
	char **panel,
	t_panel_data *panel_data)
{
	int		row;
	int		col;
	int		sqr_size;
	int		is_there_a_valid_sqr;

	is_there_a_valid_sqr = 0;
	row = panel_data->coordinates->row;
	sqr_size = panel_data->sqr_size;
	while (row < panel_data->panel_size.rows)
	{
		col = panel_data->coordinates->col;
		while (col < panel_data->panel_size.cols)
		{
			while (is_sqr_valid(panel, panel_data, sqr_size))
			{
				is_there_a_valid_sqr = 1;
				sqr_size++;
			}
			if (sqr_size > panel_data->sqr_size)
				update_panel_data(panel_data, sqr_size, row, col);
			col++;
		}
		row++;
	}
	return (is_there_a_valid_sqr);
}
