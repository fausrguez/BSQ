/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   data_validation.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dgiannop <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 10:17:07 by dgiannop      #+#    #+#                 */
/*   Updated: 2020/09/01 11:27:37 by dgiannop      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		is_map_valid(char **panel)
{
	int i;
	int j;

	i = 0;





int		check_first_line(char **panel);
{
	int j;
	int i;

	j = 0;
	while (panel[0][j] != '\n')
		j++;
	if (j != 3)
		return (0);
	if (panel[0][0] <= '0' || panel[0][0] >= '9')
		return (0);
	j = 0;
	while (j != 2)
	{
		i = j + 1;
		while (i != 3)
		{
			if (panel[0][i] == panel[0][j])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}

int		are_chars_printable(char **panel)
{
	int i;
	int j;

	i = 0;
	while (panel[i] != '\0')
	{
		j = 0;
		while (panel[i][j] != '\0')
		{
			if (panel[i][j] <= 31 || panel[i][j] >= 126)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		row_length(char **panel)
{
	int i;
	int j;
	int counter;

	i = 1;
	j = 0;
	while (panel[i][j] != '\n')
	{
		counter++;
		j++;
	}
	i++;
	while (panel[i] != '\0')
	{
		j = 0;
		while (panel[i][j] != '\0)
			j++;
		if (j != counter)
			return (0);
		i++;
	}
	return (1);
}

int		map_size(char **panel)
{
	int i;
	int j;


