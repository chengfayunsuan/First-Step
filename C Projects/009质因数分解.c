//#include <stdio.h>
////质因数分解
//int main()
//{
//	int a;
//	printf("请输入一个正整数:");
//	scanf("%d", &a);
//	if (a < 1)
//	{
//		printf("不是让你输入正数吗?");
//	}
//	else if (a == 1)
//	{
//		printf("1没有质因数");
//	}
//	else
//	{
//		printf("%d=", a);
//		for (int i = 2; i * i <= a; i++)
//		{
//			while (1)
//			{
//				if (a % i == 0)
//				{
//					a /= i;
//					printf("%d ", i);
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		if (a > 1)
//		{
//			printf("%d", a);
//		}
//	}
//}