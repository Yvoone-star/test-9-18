#include<stdio.h>
int main()
{
	int a,b,c = 0;
	for (a = 100; a <= 200; a++)
	{
		for (b = 2; b < a; b++)
		{
			if (a%b == 0)
				break;
			else
				if (b == a - 1)
					c = 1;
		}
		if (c == 1)
		{
			printf("%d\n", a);
			c = 0;
		}

	}

	return 0;
}


#include<stdio.h>
int main()
{
	int a, b, c;
	for (b = 1; b < 9; b++)
	{
		for (a = 1; a <= b; a++)
		{
			c = a * b;
			printf("%d*%d=%d", a, b, c);
			if (a != b)
				printf("");
			else
				printf("\n");


		}

	}

	return 0;
}