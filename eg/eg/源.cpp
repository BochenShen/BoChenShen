#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 0, b = 0, m = 0, i = 0;
	scanf("%d%d\n", a, b);
	if (a > b)
	{
		m = a;
		a = b;
		b = m;
	}
	for (i = a; i >= 2; i--)
	{
		if ((a%i) == 0 && (b%i) == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	if (i == 1)
		printf("%d\n", i);



	system("pause");
	return 0;
}
