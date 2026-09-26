#include <stdio.h>

int main()
{
	char arr[5][10] =
	{
		"周子翔",
		"vdvs",
		"[",
		"cas65",
		"是是是"
	};
	for (int i = 0; i < 5; i++)
	{
		char* str = arr[i];
		printf("%s\n", str);

	}

}