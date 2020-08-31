/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:27:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 17:34:42 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

char	**create_panel(char *file_name);
int		is_sqr_valid(char **panel, int *coordinates, int size);
void	find_sqr_coordinates(
	char **panel,
	int *panel_size,
	int *coordinates,
	int *max_size);
void	add_sqr_to_panel(char **panel, int *coordinates, int size);
void	print_char(char c);
void	print_str(char *str);
void	print_panel(char **panel, int **panel_size);
int		get_row_num(char *map_array);
int		get_col_num(char *map_array);
char	get_empty_char(char **map_array);
char	get_obst_char(char **map_array);
char	get_sqr_char(char **map_array);
int		get_row_num(char *map_array);
int		get_col_num(char *map_array);
int		*get_panel_size(char **panel);
#endif
