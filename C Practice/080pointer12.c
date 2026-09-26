//#include <stdio.h>
////装函数指针的数组
//int a(int x, int y)
//{
//	return x + y;
//}
//int b(int x, int y)
//{
//	return x - y;
//}
//int c(int x, int y)
//{
//	return x * y;
//}
//int d(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int (*arr[4])(int, int) = { a,b,c,d };
//	int x, y;
//	printf("请输入两个数字:");
//	scanf("%d %d", &x, &y);
//	printf("请输入要进行的运算:");
//	int choose;
//	scanf("%d", &choose);
//	int r = (arr[choose - 1])(x, y);
//	printf("%d", r);
//}