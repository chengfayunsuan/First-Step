//#include <stdio.h>
//
//int chengfa(int num1, int num2, int* res)
//{
//	if (num2 == 0)
//	{
//		return 0;
//	}
//	*res = num1 % num2;
//	return 1;
//}
//
//int main()
//{
//	int num1;
//	printf("请输入被除数:");
//	scanf("%d", &num1);
//	int num2;
//	printf("请输入除数:");
//	scanf("%d", &num2);
//	int res = 0;
//	int a = chengfa(num1, num2, &res);
//	if (a != 0)
//	{
//		printf("%d",res);
//	}
//	else
//	{
//		printf("出错了!");
//	}
//	
//}