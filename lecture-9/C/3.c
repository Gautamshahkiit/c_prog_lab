#include <stdio.h>
int main()
{
	int m, n;
	printf("Enter two integers:\n");
	scanf("%d%d", &m, &n);
	if (m > n)
	{
		while (m >= n)
		{
			printf("%d ", m);
			m--;
		}
	}
	else if (m < n)
	{
		while (n >= m)
		{
			printf("%d ", n);
			n--;
		}
	}
	else
	{
		printf("both are equal.");
	}
	return 0;
}