/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_chars.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/31 17:47:07 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

int		get_row_num(char *map_array)
{
	int row_num;

	row_num = map_array[0] - 48;
	return (row_num);
}

int		get_col_num(char *map_array)
{
	int col_num;
	int first_row_chars;

	col_num = 0;
	first_row_chars = 5;
	while (map_array[first_row_chars + col_num] != '\n')
		col_num++;
	return (col_num);
}

int		*get_panel_size(char **panel)
{
	int i;
	int j;
	int panel_size[2];
	int *size;

	i = 0;
	j = 0;
	while (panel[i][j] != '\0')
	{
		if (panel[i][j] == '\n')
		{
			i++;
			j = 0;
		}
		j++;
	}
	panel_size[0] = i;
	panel_size[1] = j;
	size = panel_size;
	return (size);
}
