//#include <stdio.h>
////回文数检测
//int main()
//{
//	int a;
//	printf("回文数检测器\n");
//	while (1)
//	{
//		printf("请输入一个正整数:");
//		scanf("%d", &a);
//		int d = a;
//		if (a < 1)
//		{
//			printf("不是让你输入正数吗?\n");
//		}
//		else
//		{
//			int c = 0;
//			while (a != 0)
//			{
//				int b = a % 10;
//				c = c * 10 + b;
//				a /= 10;
//			}
//			if (c == d)
//			{
//				printf("这个数是回文数!\n");
//			}
//			else
//			{
//				printf("这个数不是回文数!\n");
//			}
//		}
//	}
//}