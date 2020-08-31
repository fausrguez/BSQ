/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_sqr_coordinates.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:06:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 13:06:29 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

int *find_sqr_coordinates(char **panel, int *panel_size, char obstacle, int *max_size)
{
	int row;
	int col;
	int max_size;
	int size;
	int *coordinates;

	row = 0;
	col = 0;
	size = *max_size;
	coordinates[0] = 0;
	coordinates[1] = 0;
	while (row < panel_size[0])
	{
		col = 0;
		while (col < panel_size[1])
		{
			while (is_sqr_valid(panel, row, col, size, obstacle))
			{
				size++;
			}
			if (size > max_size)
			{
				coordinates[0] = row;
				coordinates[1] = col;
				*max_size = size;
			}
			col += *max_size - 1;
		}
		row++;
	}
	return (coordinates);
}
