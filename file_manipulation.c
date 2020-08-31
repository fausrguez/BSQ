/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   file_manipulation.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 10:35:31 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/08/31 10:51:47 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define MIN_LINES 40
#define MIN_CHARS 80
#define INIT_BUFFER 3200

int		ft_file_size(char *file_name, int cnt)
{
	int fd;
	int nchr;
	char **buffer;
	int file_size;

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

char	**ft_create_map(char *file_name)
{
	int fd;
	char **map_array;
	int file_size;

	file_size = ft_file_size(file_name, INIT_BUFFER);
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		fd = 0;
	map_array = (char **)malloc(sizeof(char *) * file_size);
	read(fd, map_array, file_size);
	return (map_array);
}	
