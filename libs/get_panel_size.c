/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_chars.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/31 16:36:29 by dgiannop      ########   odam.nl         */
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
	int i;

	i = 0;
	while (map_array[i] != '\n')
		i++;
	return (i);
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
