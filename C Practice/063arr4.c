//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int c(int arr[],int len,int a)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == a)
//		{
//			return 1;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	srand(time(NULL));
//	
//	for (int i = 1; i <= len;)
//	{
//		int a = rand() % 100 + 1;
//		int f = c(arr, len, a);
//		if (f != 1)
//		{
//			arr[i] = a;
//			i++;
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n", sum);
//	float sum1 = sum / 10;
//	printf("%1f\n", sum1);
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < sum1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}