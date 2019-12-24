#include <stdio.h>

/**
 * 问题描述: 写一个判断素数的函数，在主函数输入一个整数，
 * 输出是否为素数的信息。
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem3.c -o problem3
 * 运行: ./problem3
 */
int isPrime(int a)
{
	int i;
	for( i = 2; i < a; ++i )
	{
		if( a%i == 0 )
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int a;
	printf("%s", "输入任意整数：");
	scanf("%d",&a);
	if(isPrime(a))
		printf("%d%s\n", a,"是素数");
	else
		printf("%d%s\n", a,"不是素数");
	return 0;
}