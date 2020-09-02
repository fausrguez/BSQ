/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_panel.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:44:46 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:39:12 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/structures.h"
#include "headers/functions.h"

void	print_panel(char **panel, t_panel_data *panel_data)
{
	int row;

	row = 1;
	while (row < panel_data->panel_size.rows)
	{
		print_str(panel[row]);
		row++;
	}
}
