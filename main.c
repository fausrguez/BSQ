/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 15:16:23 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 15:18:32 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libs/headers/headers.h"
#include "libs/headers/functions.h"

int	main(int argc, char **argv)
{
	char	*panel_file_name;

	if (argc < 2)
	{
		print_str("[ERROR]: Not the correct amount of parameters\n");
		return (1);
	}
	panel_file_name = argv[1];
	return (0);
}
