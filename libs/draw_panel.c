/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   draw_panel.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:44:41 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 12:26:53 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/functions.h"

int	draw_panel(char *panel_file_name)
{
	char	**panel;
	int		*panel_size;
	int		*coordinates;
	int		sqr_size;
	char	*arr;
	print_str(panel_file_name);
	coordinates = (int *)malloc(sizeof(int) * 2);

	sqr_size = 2;
	arr = create_array(panel_file_name);
	panel = create_panel(arr);
	panel_size= get_panel_size(panel);
	printf("-> %d\n", panel_size[0]);
	printf("-> %d\n", panel_size[1]);
	coordinates[0] = 1;
	coordinates[1] = 0;
	if (!find_sqr_coordinates(panel, panel_size, coordinates, sqr_size))
	{
	free(arr);
		free(panel_size);
		free(coordinates);
		free(panel);
		return (0);
	}
	add_sqr_to_panel(panel, coordinates, sqr_size);
	print_panel(panel, panel_size);
	free(arr);
	free(panel_size);
	free(coordinates);
	free(panel);
	return (1);
}
