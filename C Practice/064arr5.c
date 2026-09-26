//#include <stdio.h>
//
//int chengfa(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = {0};
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++)
//	{
//		printf("请输入第%d个元素:\n", i+1);
//		scanf("%d",&arr[i]);
//	}
//	chengfa(arr, len);
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++;
//		j--;
//	}
//	chengfa(arr, len);
//}