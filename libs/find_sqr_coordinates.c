/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_sqr_coordinates.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:06:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 11:10:06 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/functions.h"

// static	int	not_a_norminette_fan(
// 	int row,
// 	int col,
// 	int size,
// 	int *coordinates)
// {
// 	coordinates[0] = row;
// 	coordinates[1] = col;
// 	return (size);
// }

int			find_sqr_coordinates(
	char **panel,
	int *panel_size,
	int *coordinates,
	int max_size)
{
	int		row;
	int		col;
	int		size;
	int		is_there_a_valid_sqr;

	row = coordinates[0];
	is_there_a_valid_sqr = 0;
	size = max_size;
	while (row < panel_size[0])
	{
		col = coordinates[1];
		while (col < panel_size[1])
		{
			// while (is_sqr_valid(panel, coordinates, size))
			// {
			// 	is_there_a_valid_sqr = 1;
			// 	size++;
			// }
			// if (size > *max_size)
			// 	*max_size = not_a_norminette_fan(row, col, size, coordinates);
			col++;
		}
		row++;
	}
	return (is_there_a_valid_sqr);
}
