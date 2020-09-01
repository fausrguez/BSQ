/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/01 10:14:35 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

int	is_sqr_valid(
	char **panel,
	int *coordinates,
	int size)
{
	int		row;
	int		col;
	int		i;
	int		j;
	char	obstacle;

	obstacle = get_obst_char(panel);
	row = coordinates[0];
	col = coordinates[1];
	print_char('x');
	i = 0;
	j = 0;
	while (i < size && panel[row + i][col + j] != '\0')
	{
		while (j < size)
		{
			if (panel[row + i][col + j] == obstacle)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	print_char('y');
	return (1);
}
