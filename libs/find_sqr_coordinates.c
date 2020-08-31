/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   find_sqr_coordinates.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:06:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 13:45:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

void	find_sqr_coordinates(
	char **panel,
	int *panel_size,
	int *coordinates,
	int *max_size)
{
	int row;
	int col;
	int size;

	row = 0;
	size = *max_size;
	while (row < panel_size[0])
	{
		col = 0;
		while (col < panel_size[1])
		{
			while (is_sqr_valid(panel, coordinates, size))
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
}
