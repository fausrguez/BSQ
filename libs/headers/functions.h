/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:27:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 13:46:19 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	**ft_create_map(char *file_name);
int		is_sqr_valid(char **panel, int *coordinates, int size);
void	find_sqr_coordinates(
	char **panel,
	int *panel_size,
	int *coordinates,
	int *max_size);

#endif
