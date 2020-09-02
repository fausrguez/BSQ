/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 13:27:35 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:40:23 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "structures.h"

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		ft_atoi(char *str);
void	print_char(char c);
void	print_str(char *str);
int		draw_panel(char *panel_file_name);
char	**create_panel(char *array, t_panel_data *panel_data);
int		find_sqr_coordinates(char **panel, t_panel_data *panel_data);
int		is_sqr_valid(char **panel, t_panel_data *panel_data, int sqr_size);
void	add_sqr_to_panel(char **panel, t_panel_data *panel_data);
void	print_panel(char **panel, t_panel_data *panel_data);
int		get_row_num(char *map_array);
int		get_col_num(char *map_array);
char	get_empty_char(char *map_array);
char	get_obst_char(char *map_array);
char	get_sqr_char(char *map_array);
char	*create_array(char *file_name);
#endif
