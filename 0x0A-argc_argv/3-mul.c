#include <stdio.h>
#include <stdlib.h>

/**
 * Check if the program received exactly two arguments
 * Convert the arguments to integers
 * Perform the multiplication
 * Print the result followed by a new line
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
