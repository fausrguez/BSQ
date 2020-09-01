/* ************************************************************************** */
/*                                                                            */
*                                                        ::::::::            */
/*   create_panel.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 10:35:31 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 09:05:36 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/variables.h"
#include "headers/functions.h"

static	int		ft_file_size(char *file_name, int cnt)
{
	int		fd;
	int		nchr;
	int		file_size;
	char	**buffer;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		fd = 0;
	buffer = (char **)malloc(sizeof(char *) * cnt);
	nchr = read(fd, buffer, cnt);
	file_size = 0;
	if (nchr == cnt)
	{
		close(fd);
		return (ft_file_size(file_name, cnt * 2));
	}
	else if (nchr != cnt)
	{
		close(fd);
		file_size = nchr;
	}
	return (file_size);
}

char			*create_array(char *file_name)
{
	int		fd;
	int		file_size;
	char	*panel_array;

	file_size = ft_file_size(file_name, INIT_BUFFER);
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		fd = 0;
	panel_array = (char *)malloc(sizeof(char) * file_size);
	read(fd, panel_array, file_size);
	return (panel_array);
}

char			**create_panel_from_array(char *array, int rows, int cols)
{
	int		i;
	int		j;
	int		z;
	char	**panel;

	i = 0;
	z = 0;
	panel = (char **)malloc(sizeof(char *) * rows);
	while (i < rows)
	{
		j = 0;
		panel[i] = (char *)malloc(sizeof(char) * cols);
		while (j < cols)
		{
			panel[i][j] = array[z];
			j++;
			z++;
		}
		i++;
	}
	return (panel);
}

char			**create_panel(char *array)
{
	int		rows;
	int		cols;
	char	**panel;

	rows = 0;
	cols = 0;
	rows = get_row_num(array);
	cols = get_col_num(array);
	panel = create_panel_from_array(array, rows, cols);
	free(array);
	return (panel);
}
