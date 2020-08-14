#define _CRT_SECURE_NO_WARNINGS
#define x 5
#include<stdio.h>
int add(int* num);
int main()
//wanna to know sum of array a,b,c;
{
	int a[5], b[5], c[5];
	printf("Enter a num : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Enter b num : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &b[i]);
	}
	printf("Enter c num : \n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &c[i]);
	}
	// go to sum
	int suMAraa = add(a);
	int suMArab = add(b);
	int suMArac = add(c);
	printf("Result\n ");
	printf("%d\n", suMAraa);
	printf("%d\n", suMArab);
	printf("%d\n", suMArac);
	int sigmAAns = suMAraa + suMArab + suMArac;
	if (sigmAAns % 2 == 0)
	{
		for (int i = 1; i <= (x)-1; i++)
		{
			for (int j = 1; j <= (2 * x) - 1; j++)
			{
				if (i + j == 5 + 1 || j - i == 5 - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		// second result v shape
		for (int i = x; i > 0; i--)
		{
			for (int j = 1; j <= (2 * x) - 1; j++)
			{
				if (i + j == x + 1 || j - i == x - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i <= x; i++)
		{
			for (int j = 1; j <= x; j++)
			{
				if (i + j == x + 1 || i == j)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
int add(int* num)
{
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	//return via
	return (sum);
}