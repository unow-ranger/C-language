#include <stdio.h>

/**
 * 问题描述: 写一函数，实现两个字符串的比较。用指针实现。
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem7.c -o problem17
 * 运行: ./problem17
 */

int myStrcmp(char * p1, char *p2)
{
	int code;
	while( (code = (*p1 - *p2)) == 0 )
	{
		if ( *p1 == '\0' || *p2 == '\0')
			return code;
		p1++;
		p2++;
	}
	return code;

}


int main(int argc, char const *argv[])
{
	char a1[10]="123a";
	char a2[10]="123";
	printf("%d\n", myStrcmp(a1,a2));
	return 0;
}

