//#include <stdio.h>
//
//void chengfa(int arr[], int len)
//{
//	for (int j = 0; j < len-1; j++)
//	{
//		if (arr[j] > arr[j + 1])
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[5];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("请输入第%d个数字:\n",i+1);
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < len-1; i++)
//	{
//		chengfa(arr, len);	
//	}
//	printf("从小到大排列:");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}