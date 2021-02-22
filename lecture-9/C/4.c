#include <stdio.h>
int main()
{
	int i = 1;
	printf("numbers divisible by 7 between 1 to 100 are ");
	while (i < 100)
	{
		if (i % 7 == 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}