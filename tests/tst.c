#include <stdio.h>
#include <unistd.h>

int	main()
{
	write(1, "1", 1);
	printf("%d", 2);
	write(1, "1", 3);
	printf("%d", 4);
}
