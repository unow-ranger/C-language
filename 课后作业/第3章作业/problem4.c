#include <stdio.h>

/**
 * 问题描述： 有 3 个整数，a b c, 由键盘输入，输出其中最大的数
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem4.c -o problem4
 * 运行: ./problem4
 */


int main(int argc, char const *argv[])
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("the max number is %d\n", (a>b?(a>c?a:c):(b>c?b:c)));
	return 0;
}