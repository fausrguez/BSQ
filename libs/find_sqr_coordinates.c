/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_sqr_coordinates.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:06:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 12:26:20 by farodrig      ########   odam.nl         */
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
	printf("kabum\n");
	int row;
	int col;
	int size;
	int is_there_a_valid_sqr;

	row = coordinates[0];
	col = coordinates[1];
	is_there_a_valid_sqr = 0;
	size = max_size;
	printf("hi");
	printf("------> [%d,%d] -> %c\n", panel_size[0], panel_size[1], panel[panel_size[0]][panel_size[1]]);
	while (row < panel_size[0])
	{
		col = coordinates[1];
		// printf("[%d,%d] -> %c\n", row, col, panel[row][col]);
		while (col < panel_size[1])
		{
			printf("%c",panel[row][col]);
			// while (is_sqr_valid(panel, coordinates, size))
			// {
			// 	is_there_a_valid_sqr = 1;
			// 	size++;
			// }
			// if (size > *max_size)
			// 	*max_size = not_a_norminette_fan(row, col, size, coordinates);
			col ++;
		}
		row++;
	}
	printf("hi");
	return (is_there_a_valid_sqr);
}
