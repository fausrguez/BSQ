/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_sqr_to_panel.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:43:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:36:42 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

void	add_sqr_to_panel(char **panel, t_panel_data *panel_data)
{
	int		row;
	int		col;
	int		this_row;
	int		this_col;

	row = 0;
	col = 0;
	while (row < panel_data->sqr_size)
	{
		col = 0;
		while (col < panel_data->sqr_size)
		{
			this_row = panel_data->coordinates->row + row;
			this_col = panel_data->coordinates->col + col;
			panel[this_row][this_col] = panel_data->panel_chars->sqr;
			col++;
		}
		row++;
	}
}
