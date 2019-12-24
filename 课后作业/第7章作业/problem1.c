#include <stdio.h>

/**
 * 问题描述： 写两个函数，分别求两个整数的最大公约数和最小公倍数，
 * 			用主函数调用这个两个函数，并输出结果。
 *    		两个整数由键盘输入；
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem1.c -o problem1
 * 运行: ./problem1
 */

int maxCommonDivisor(int a, int b){
	int i, minNum = a>b ? b:a,result = 1;
	for( i = 2; i <= minNum; ++i) 
	{
		if( a%i == 0 && b%i == 0 ){
			result = i;
		}
	}
	return result;
}

int minCommonMultiple(int a, int b){
	int result = a>b ? a:b;
	while( result%a != 0 || result%b != 0 )
	{
		result++;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", maxCommonDivisor(90,10));
	printf("%d\n", minCommonMultiple(18,9));
	return 0;
}