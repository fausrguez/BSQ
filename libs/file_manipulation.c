/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_manipulation.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 10:35:31 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/31 13:16:49 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/headers.h"
#include "headers/variables.h"

static	int	ft_file_size(char *file_name, int cnt)
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

char		**ft_create_map(char *file_name)
{
	int		fd;
	int		file_size;
	char	**map_array;

	file_size = ft_file_size(file_name, INIT_BUFFER);
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		fd = 0;
	map_array = (char **)malloc(sizeof(char *) * file_size);
	read(fd, map_array, file_size);
	return (map_array);
}
