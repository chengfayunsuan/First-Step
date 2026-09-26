//#include <stdio.h>
////ц╟ещеепР
//void chengfa(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 645,9486,123,456,819,34,1589,21,158 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	chengfa(arr, len);
//	for (int z = 0; z < len; z++)
//	{
//		printf("%d ", arr[z]);
//	}
//}