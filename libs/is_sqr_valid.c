/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sqr_valid.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 12:00:56 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 12:31:53 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	is_sqr_valid(char **panel, int row, int col, int size, char obstacle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	
	while (i < size && panel[row + i][col + j] != '\0')
	{
		while (j < size)
		{
			if(panel[row + i][col + j] == obstacle)
			{
				return (0);
			}	
			j++;
		}
		i++;
	}
	
	return (1);
}
