#include <stdio.h>

/**
 * 问题描述: 写一个函数，将输入的字符串从第 m 个字符开始的全部字符
 * 			复制称为了另一个字符串，用指针实现。
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem7.c -o problem7
 * 运行: ./problem7
 */


void substr(char * p1, char * p2, int m)
{
	int n = 0;
	while( n < m-1 )
	{
		n++;
		p1++;
	}
	while( *p1 != '\0')
	{
		*p2 = *p1;
		p1++;
		p2++;
	}
	*p2 = '\0';
}

int main(int argc, char const *argv[])
{
	char * str1 = "hello world";
	char str2[20];
	substr(str1, str2, 4);
	printf("%s\n", str2);
	return 0;
}

