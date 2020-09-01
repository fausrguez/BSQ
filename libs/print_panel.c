/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_panel.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:44:46 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 18:00:08 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

void	print_panel(char **panel, int *panel_size)
{
	int row;

	row = 1;
	while (row < panel_size[0])
	{
		print_str(panel[row]);
		row++;
	}
}
