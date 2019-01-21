#define _CRT_SECURE_NO_WARNINGS//strncmp
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int my_strncmp(const char *dest, const char *str, size_t n)
{
	assert(dest != NULL&str != NULL);
	const char* d = dest;
	const char* s = str;
	while (n--)
	{
		if (*dest++ < *str++)
		{
			return -1;
		}
		else if (*d++>*s++)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char arr1[20] = "abcdd";
	char arr2[20] = "abcd" ;
	
	printf("%d", my_strncmp(arr1, arr2,5));

	system("pause");
	return 0;
}