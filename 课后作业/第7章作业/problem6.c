#include <stdio.h>

/**
 * 问题描述： 写一个函数，实现 2 个字符串拼接。
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem6.c -o problem6
 * 运行: ./problem6
 */

void contractStr(char * a1, char *a2)
{
	while( *a1 != '\0' ) a1++;
	while( (*(a1++) = *(a2++))!='\0' );
}


int main(int argc, char const *argv[])
{
	char a1[]="hehe";
	char a2[]="haha";
	contractStr(a1,a2);
	printf("%s\n", a1);
	return 0;
}



