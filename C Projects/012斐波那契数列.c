#include <stdio.h>
//斐波那契数列
int main()
{
	while (1)
	{
		int a = 1, b = 1;
		int z;
		printf("请输入想查询的数字序号:");
		scanf("%d", &z);
		if (z < 1)
		{
			printf("没有此序号\n");
		}
		else
		{
			if (z == 1 || z == 2)
			{
				printf("第%d个序号对应数字为:1\n\n", z);
			}
			for (int i = 3;i <= z; i++)
			{
				int c = a + b;
				if (i == z)
				{
					printf("第%d个序号对应数字为:%d\n\n", z, c);
					break;
				}
				a = b;
				b = c;
			}
		}
	}
}