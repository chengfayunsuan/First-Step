//#include <stdio.h>
//
//void chengfa(int arr[9], int len, int* p1, int* p2)
//{
//	for (int i = 1; i < len; i++)
//	{
//		if (*p1 > arr[i])
//		{
//			*p1 = arr[i];
//		}
//	}
//	for (int i = 1; i < len; i++)
//	{
//		if (*p2 < arr[i])
//		{
//			*p2 = arr[i];
//		}
//	}
//}
//
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int min = arr[0];
//	int max = arr[0];
//	chengfa(arr,len,&min,&max);
//	printf("最小值:%d\n", min);
//	printf("最大值:%d\n", max);
//}