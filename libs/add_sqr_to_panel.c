/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_sqr_to_panel.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:43:40 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 14:44:33 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	add_sqr_to_panel(char **panel, int *coordinates, int size)
{
	int		i;
	int		j;
	char	obstacle;

	obstacle = get_obstacle();
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			panel[coordinates[0] + i][coordinates[1] + j] = obstacle;
			j++;
		}
		i++;
	}
}
