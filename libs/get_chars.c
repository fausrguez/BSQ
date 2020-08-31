/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_chars.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/31 15:16:37 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

int		get_row_num(char *map_array)
{
	int row_num;

	row_num = map_array[0] - 48;
	return (row_num);
}

char	get_empty_char(char *map_array)
{
	char empty;

	empty = map_array[1];
	return (empty);
}

char	get_obst_char(char *map_array)
{
	char obstacle;

	obstacle = map_array[2];
	return (obstacle);
}

char	get_sqr_char(char *map_array)
{
	char square;

	square = map_array[3];
	return (square);
}	
