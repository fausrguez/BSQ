/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   structures.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:25:26 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 14:30:37 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef	struct	s_panel_characters
{
	char obstacle;
	char free;
	char sqr;
}				t_panel_characters;

typedef	struct	s_coordinates
{
	int row;
	int col;
}				t_coordinates;

typedef	struct	s_data
{
	t_coordinates		coordinates[2];
	t_coordinates		panel_size[2];
	char				*panel_name;
	int					sqr_size;
	t_panel_characters	panel_chars;
}				t_data;

#endif
