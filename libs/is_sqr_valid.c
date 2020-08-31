/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 13:37:55 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	is_sqr_valid(
	char **panel,
	int *coordinates,
	int size)
{
	int		row;
	int		col;
	int		i;
	int		j;
	char	obstacle;

	obstacle = get_obstacle();
	row = coordinates[0];
	col = coordinates[1];
	i = 0;
	j = 0;
	while (i < size && panel[row + i][col + j] != '\0')
	{
		while (j < size)
		{
			if (panel[row + i][col + j] == obstacle)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}
