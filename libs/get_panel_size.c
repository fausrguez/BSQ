/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_panel_size.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 15:09:31 by dgiannop      ########   odam.nl         */
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
int		*get_panel_size(char *map_array)
{
	int i;
	int j;
	int *size;

	i = get_row_num(map_array);
	j = get_col_num(map_array);
	size = (int *)malloc(sizeof(int) * 2);
	size[0] = i;
	size[1] = j;
	return (size);
}
