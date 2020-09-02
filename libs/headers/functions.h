/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:27:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 11:21:09 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		ft_atoi(char *str);
void	print_char(char c);
void	print_str(char *str);
int		draw_panel(char *panel_file_name);
char	**create_panel(char *array);
int		find_sqr_coordinates(
	char **panel,
	int *panel_size,
	int *coordinates,
	int max_size);
int		is_sqr_valid(char **panel, int *coordinates, int size);
void	add_sqr_to_panel(char **panel, int *coordinates, int size);
void	print_panel(char **panel, int *panel_size);
int		get_row_num(char *map_array);
int		get_col_num(char *map_array);
char	get_empty_char(char **map_array);
char	get_obst_char(char **map_array);
char	get_sqr_char(char **map_array);
int		*get_panel_size(char *map_array);
char	*create_array(char *file_name);
#endif
