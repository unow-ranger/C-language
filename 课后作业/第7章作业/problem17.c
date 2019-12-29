#include <stdio.h>

/**
 * 问题描述： 写一个函数，输入参数为一个整数 n,用递归将其转为字符串，
 * 			例如：输入 483 ， 转为 “483”
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem17.c -o problem17
 * 运行: ./problem17
 */


void string2Int(int n, char * target) 
{
	if ( n <= 0 ){
		*target='\0';
		return;
	}
	int carry = 1, p = n;
	while(p/=10)
		carry*=10;
	int headNum = n/carry;
	*target = (char)headNum+48;

	string2Int(n-(headNum*carry), ++target);
}


int main(int argc, char const *argv[])
{
	int n = 483;
	char target[10];
	string2Int(n,target);
	printf("%s\n", target);
	return 0;
}



