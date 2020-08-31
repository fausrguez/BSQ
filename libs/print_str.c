/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: farodrig <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 14:44:03 by farodrig      #+#    #+#                 */
/*   Updated: 2020/08/31 14:44:05 by farodrig      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "headers/functions.h"

void	print_str(char *str)
{
	while (*str != '\0')
	{
		print_char(*str);
		str++;
	}
}
