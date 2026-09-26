//#include <stdio.h>
//
//int main()
//{
//	//短路效果
//	int a = 1, b = 2;
//	a > 0 && ++b;
//	printf("a=%d,b=%d\n", a, b);
//	//a成立，执行b，b=3
//
//
//	a = -1, b = 2;
//	a > 0 && ++b;
//	printf("a=%d,b=%d\n", a, b);
//	//a不成立，不执行b，b=2
//	return 0;
//}