/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_panel_size.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 21:55:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "headers/functions.h"

int		ft_atoi(char *str)
{
	int res;
	int i;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - 48);
	   	i++;
	}
	return (res);
}	

int		get_row_num(char *map_array)
{
	int i;
	char *row_num_array;
	int row_num;
	int j;

	while (map_array[i] != '\n')
		i++;
	row_num_array = (int *)malloc(sizeof(int) * (i - 2));
	j = 0;
	while (j <= (i - 3))
	{
		row_num_array[j] = map_array[j];
		j++;
	}
	row_num_array = '/0';
	row_num = ft_atoi(row_num_array[j]);
	return (row_num);
}

int		get_col_num(char *map_array, int row_num)
{
	int col_num;
	int first_row_chars;
	int i;

	i = 0;
	while (map_array[i] != '\n')
		i++;
	col_num = 0;
	first_row_chars = i + 1;
	while (map_array[first_row_chars + col_num] != '\n')
		col_num++;
	return (col_num);
}
int		*get_panel_size(char **panel)
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
