#include "libs/headers/headers.h"
#include "libs/headers/functions.h"

int	main(int argc, char **argv)
{
	char *map_file_name;

	if (argc < 2)
	{
		print_str("[ERROR]: Not the correct amount of parameters\n");
		return (1);
	}
	map_file_name = argv[1];
	return (0);
}