/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   structures.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:25:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 20:58:53 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef	struct	s_panel_data
{
	int		coordinates_col;
	int		coordinates_row;
	int		panel_size_cols;
	int		panel_size_rows;
	char	*file_name;
	int		sqr_size;
	char	panel_chars_obstacle;
	char 	panel_chars_empty;
	char 	panel_chars_sqr;
}				t_panel_data;

#endif
