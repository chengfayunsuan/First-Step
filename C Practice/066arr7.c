//#include <stdio.h>
//
//int chengfa(int arr[], int len, int mun)
//{
//	int min = 0;
//	int max = len - 1;
//	while (min <= max)
//	{
//		int mid = (min + max) / 2;
//		if (arr[mid] < mun)
//		{
//			min = mid + 1;
//		}
//		else if(arr[mid] > mun)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int mun = 2;
//	int index = chengfa(arr, len, mun);
//	printf("%d", index);
//}