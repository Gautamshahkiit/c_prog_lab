#include <stdio.h>
int main()
{
	int m, y, d;
	printf("enter the month and year:\n");
	scanf("%d%d", &m, &y);
	if (m > 0 && m < 13 && y > 999 && y < 10000)
	{
		switch (m)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			d = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d = 30;
			break;
		case 2:
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			{
				d = 29;
			}
			else
			{
				d = 28;
			}
			break;
		}
		printf("The no. of days in this month is %d", d);
	}
	else
	{
		printf("!Give valid input!\n");
	}
	return 0;
}