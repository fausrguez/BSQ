/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   draw_panel.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:44:41 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 11:02:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/functions.h"

static void	set_default_coordinates(int **coordinates)
{
	coordinates[0] = 1;
	coordinates[1] = 0;
}

static void	free_malloc(
	char *arr,
	char *panel_size,
	int *coordinates,
	char **panel)
{
	free(arr);
	free(panel_size);
	free(coordinates);
	free(panel);
}

int			draw_panel(char *panel_file_name)
{
	char	**panel;
	int		*panel_size;
	int		*coordinates;
	int		sqr_size;
	char	*arr;

	coordinates = (int *)malloc(sizeof(int) * 2);
	sqr_size = 2;
	set_default_coordinates(coordinates);
	arr = create_array(panel_file_name);
	panel = create_panel(arr);
	panel_size = get_panel_size(panel);
	if (!find_sqr_coordinates(panel, panel_size, coordinates, sqr_size))
	{
		free_malloc(arr, panel_size, coordinates, panel);
		return (0);
	}
	add_sqr_to_panel(panel, coordinates, sqr_size);
	print_panel(panel, panel_size);
	free_malloc(arr, panel_size, coordinates, panel);
	return (1);
}
