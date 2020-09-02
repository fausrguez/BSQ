/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_array.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:19:13 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 15:19:15 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/variables.h"

static	int		ft_file_size(char *file_name, int buff_cnt)
{
	int		fd;
	int		nchr;
	int		file_size;
	char	**buffer;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		fd = 0;
	buffer = (char **)malloc(sizeof(char *) * buff_cnt);
	nchr = read(fd, buffer, buff_cnt);
	file_size = 0;
	if (nchr == buff_cnt)
	{
		close(fd);
		return (ft_file_size(file_name, buff_cnt * 2));
	}
	else if (nchr != buff_cnt)
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
