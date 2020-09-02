/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   draw_panel.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:44:41 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 21:18:10 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/functions.h"
#include "headers/structures.h"

static	void	initialize_panel_data(
	t_panel_data *panel_data,
	char *file_name)
{
	panel_data->coordinates_row = 0;
	panel_data->coordinates_col = 1;
	panel_data->sqr_size = 2;
	panel_data->file_name = file_name;
}

static	void	free_panel(char **panel, int rows)
{
	int row;

	row = 0;
	while (row < rows)
	{
		free(panel[row]);
		row++;
	}
	free(panel);
}

int				draw_panel(char *panel_file_name)
{
	char			**panel;
	char			*arr;
	t_panel_data	panel_data;

	initialize_panel_data(&panel_data, panel_file_name);
	arr = create_array(panel_data.file_name);
	panel = create_panel(arr, &panel_data);
	free(arr);
	if (find_sqr_coordinates(panel, &panel_data))
	{
		add_sqr_to_panel(panel, &panel_data);
		print_panel(panel, &panel_data);
		free_panel(panel, panel_data.panel_size_rows);
		return (1);
	}
	free_panel(panel, panel_data.panel_size_rows);
	return (0);
}
