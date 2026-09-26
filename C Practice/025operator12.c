//#include <stdio.h>
//
//int main()
//{
//	int i;
//	printf("%d\n", (i = 3, i++, ++i, i += 5));
//
//	//练习
//	int number;
//	printf("请输入一个数字：");
//	scanf("%d", &number);
//	int number2 = number >= 0 ? number :- number;
//	printf("第一步变换：%d\n", number2);
//	int number3 = number2 % 3;
//	printf("第二步变换：%d\n", number3);
//	int number4 = number3 * 10;
//	printf("第三步变换：%d\n\n", number4);
//
//	int num;
//	printf("再次输入数字：\n");
//	scanf("%d", &num);
//	printf("%d", (num=num > 0 ? num : -num, num %= 3, num * 10));
//	return 0;
//}