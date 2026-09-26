//#include <stdio.h>
//#include <math.h>
//#include <time.h>
//#include <stdlib.h>
//
//int game(int j)
//{
//	int b = rand() % 100 + 1;
//	int i = 0;
//	int a;
//	m:printf("请输入文本:");
//	scanf("%d", &a);
//	if (a > b)
//	{
//		printf("大了!\n");
//		i++;
//		goto m;
//	}
//	else if (a < b)
//	{
//		printf("小了!\n");
//		i++;
//		goto m;
//	}
//	else
//	{
//		i++;
//		printf("猜中了!\n");
//		printf("您猜了%d次!\n", i);
//	}
//	if (i < j)
//	{
//		j = i;
//	}
//	return j;
//}
//
//int main()
//{	
//	srand(time(NULL));
//	int j = 10000;
//	printf("猜数字!!!\n######################################\n");
//	while (1)
//	{
//		printf("菜单:\n开始游戏:y\n退出游戏:n\n游戏记录:r\n");
//		char c;
//		scanf(" %c", &c);
//		if (c == 'y' || c == 'Y')
//		{
//			j = game(j);
//		}
//		else if (c == 'n' || c == 'N')
//		{
//			printf("欢迎下次光临\n");
//			break;
//		}
//		else if (c == 'r' || c == 'R')
//		{
//			printf("您的游戏记录为:%d\n", j);
//		}
//	}
//}