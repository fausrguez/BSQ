/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_chars.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:03:06 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 20:44:34 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

char	get_empty_char(char **map_array)
{
	int i;
	char empty;

	while (i != '\n')
		i++;
	empty = map_array[i - 2];
	return (empty);
}

char	get_obst_char(char *map_array)
{
	int i;
	char obstacle;

	while (i != '\n')
		i++;
	obstacle = map_array[i - 1];
	return (obstacle);
}

char	get_sqr_char(char *map_array)
{
	int i;
	char square;

	while (i != '\n')
		i++;
	square = map_array[i];
	return (square);
}
