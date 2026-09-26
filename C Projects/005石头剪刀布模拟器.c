//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
////石头剪刀布模拟器
//void game(int* ww, int* ll,int* ee)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		int ai = rand() % 3 + 1;
//	m:printf("请输入数字:");
//		int player;
//		scanf(" %d", &player);
//		if (player == 1 || player == 2 || player == 3)
//		{
//			if (player - ai == 2 || player - ai == -1)
//			{
//				printf("你赢了!\n");
//				printf("对方出的是:%d\n\n", ai);
//				(*ww)++;
//			}
//			else if (player - ai == -2 || player - ai == 1)
//			{
//				printf("你输了!\n");
//				printf("对方出的是:%d\n\n", ai);
//				(*ll)++;
//			}
//			else if (player == ai)
//			{
//				printf("平局!\n");
//				printf("对方出的是:%d\n\n", ai);
//				(*ee)++;
//			}
//		}
//		else
//		{
//			printf("你输错了!\n");
//			goto m;
//		}
//	}
//	printf("\n\n");
//}
//
//
//int main()
//{
//	srand(time(NULL));
//	printf("石头剪刀布模拟器!!!\n");
//	printf("####################################\n");
//	printf("规则:\n石头=1  剪刀=2  布=3\n");
//	printf("人机大战!!!\n\n");
//	int w = 0, l = 0, e = 0;
//	while (1)
//	{
//		printf("菜单:\n");
//		printf("开始游戏(十番棋):y\n退出游戏:n\n查看战绩:r\n");
//		char a;
//		scanf(" %c", &a);
//		if (a == 'y' || a == 'Y')
//		{
//			game(&w, &l, &e);
//		}
//		else if (a == 'n' || a == 'N')
//		{
//			printf("下次再见...");
//			return 0;
//		}
//		else if (a == 'r' || a == 'R')
//		{
//			printf("胜:%d\n", w);
//			printf("负:%d\n", l);
//			printf("平:%d\n\n", e);
//		}
//		else
//		{
//			printf("错误!\n\n");
//		}
//	}
//	return 0;
//}