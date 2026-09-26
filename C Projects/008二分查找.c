//#include <stdio.h>
////二分查找
//int chengfa(int arr[], int len, int a)
//{
//	int mid;
//	int max = len - 1;
//	int min = 0;
//	while (min <= max)
//	{
//		mid = (max + min) / 2;
//		if (a < arr[mid])
//		{
//			max = mid-1;
//		}
//		else if (a > arr[mid])
//		{
//			min = mid+1;
//		}
//		else if(a == arr[mid])
//		{
//			return mid + 1;
//		}
//	}
//	return 99;
//}
//
//int main()
//{
//	int arr[] = { 10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入你想查找的数字:");
//	int a;
//	scanf("%d", &a);
//	int r = chengfa(arr, len, a);
//	if (r == 99)
//	{
//		printf("您查找的数字不在数组里!");
//	}
//	else
//	{
//		printf("您查找的数字在第%d个!",r);
//	}
//}