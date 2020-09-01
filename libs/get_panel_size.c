/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_panel_size.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 12:20:31 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "headers/functions.h"

int		get_row_num(char *map_array)
{
	int row_num;

	row_num = map_array[0] - 48;
	return (row_num + 1);
}
int		get_col_num(char *map_array)
{
	int col_num;
	int first_row_chars;

	col_num = 0;
	first_row_chars = 5;
	while (map_array[first_row_chars + col_num] != '\n')
	{
		col_num++;
	}
	return (col_num);
}
int		*get_panel_size(char **panel)
{
	int i;
	int j;
	int *size;

	i = 0;
	size = (int *)malloc(sizeof(int) * 2);
	while (panel[i] != '\0')
	{
		j = 0;
		while (panel[i][j] != '\0')
		{
			j++;
		}
		i++;
	}
	size[0] = i + 1;
	size[1] = j;
	return (size);
}