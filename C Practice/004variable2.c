//#include <stdio.h>
//
//int main()
//{
//	//四种数据类型
//	//短整型
//	short a = 32767;
//	short b = 65540;
//	printf("%d %d\n",a,b);
//	//int  整数
//	int c = 2147483648;
//	printf("%d\n",c);
//	//long 长整型
//	long d = 2147483648L;
//	printf("%d\n",d);
//	//long long 超长整形
//	long long e = 561531565615646LL;
//	printf("%lld\n\n",e);
//
//	//使用sizeof测量字节长度
//	//short  代表占用2个字节
//	printf("%zu\n",sizeof(short));
//	printf("%zu\n", sizeof(a));
//	//int
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(c));
//	//long
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(d));
//	//long long
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(e));
//	return 0;
//}