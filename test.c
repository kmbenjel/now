int ft_strlen(char *str);
#include <string.h> //strlen lib
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("Real Strlen: %ld\n", strlen(argv[1]));
		printf("My Strlen: %d\n", ft_strlen(argv[1]));
	}
	return 0;
}
