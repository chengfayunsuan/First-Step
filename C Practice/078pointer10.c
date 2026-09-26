//#include <stdio.h>
//
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[2] = { 8,9 };
//	int* arr[2] = { arr1,arr2 };
//	int** p = arr;
//	int len1 = sizeof(arr1) / sizeof(arr1[0]);
//	int len2 = sizeof(arr2) / sizeof(arr2[0]);
//	int lens[2] = { len1, len2 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < lens[i]; j++)
//		{
//			printf("%d ", *(*p + j));
//		}
//		printf("\n");
//		p++;
//	}
//}