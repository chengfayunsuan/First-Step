//#include <stdio.h>
////数组删除数据
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("原始数组:");
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int a;
//	while (1)
//	{
//		printf("\n输入你想删除的数:");
//		scanf("%d", &a);
//		int p = 0;
//		for (int i = 0; i < len; i++)
//		{
//			if (a == arr[i])
//			{
//				for (int j = i; j < len - 1; j++)
//				{
//					arr[j] = arr[j + 1];
//				}
//				p = 1;
//				goto m;
//			}
//		}
//		if (p == 0)
//		{
//			printf("您输入的数字不在数组里!\n");
//		}
//	}
//	m: printf("更正数组:");
//	for (int i = 0; i < len-1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}