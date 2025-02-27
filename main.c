/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:16:23 by farodrig      #+#    #+#                 */
/*   Updated: 2020/09/02 16:22:50 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libs/headers/headers.h"
#include "libs/headers/functions.h"

int	main(int argc, char **argv)
{
	int		panel_n;

	if (argc < 2)
	{
		print_str("[ERROR]: Not the correct amount of parameters\n");
		return (1);
	}
	panel_n = 1;
	while (panel_n < argc)
	{
		if (!draw_panel(argv[panel_n]))
		{
			print_str("[ERROR]: There's not a possible square in ");
			print_str(argv[panel_n]);
			print_char('\n');
		}
		panel_n++;
	}
	exit(0);
	return (0);
}
