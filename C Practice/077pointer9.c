//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int(* p)[3] = arr;
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", *(*p+j));
//		}
//		printf("\n");
//		p++;
//	}
//	
//}