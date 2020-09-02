/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   structures.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:25:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 20:47:58 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef	struct	s_panel_characters
{
	char obstacle;
	char empty;
	char sqr;
}				t_panel_characters;

typedef	struct	s_coordinates
{
	int row;
	int col;
}				t_coordinates;

typedef	struct	s_panel_size
{
	int rows;
	int cols;
}				t_panel_size;

typedef	struct	s_panel_data
{
	t_coordinates		*coordinates;
	t_panel_size		panel_size;
	char				*file_name;
	int					sqr_size;
	t_panel_characters	*panel_chars;
}				t_panel_data;

#endif
