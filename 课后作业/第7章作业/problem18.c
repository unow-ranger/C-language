#include <stdio.h>

/**
 * 问题描述： 写一个函数，输入的年、月、日，计算该日是该年的第几天。
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem18.c -o problem18
 * 运行: ./problem18
 */

int computeDay(int year, int mouth, int day)
{
	int i, countDay = 0, isLeapYear = 0;

	// 判断输入的月是否错误
	if(mouth < 1 || mouth > 12 || day < 1 )
	{
		printf("%s\n", "输入错误");
		return -1;
	}

	// 判断是否为闰年
	if(( year%4==0 && year%100!=0 ) || (year%400)==0 )
		isLeapYear = 1;

	// 判断二月的天数
	if( mouth == 2 )
	{
		if( (isLeapYear && day > 29) || (!isLeapYear && day > 28) )
		{
			printf("%s\n", "输入错误");
			return -1;
		}
	}

	// 判断输入的日是否错误
	if( (mouth % 2 == 0 && day > 30 ) || (mouth % 2 != 0 && day > 31) )
	{
		printf("%s\n", "输入错误");
		return -1;
	}

	for( i = 1; i < mouth; i++ )
	{
		if( i == 2 )
		{
			countDay += (28 + isLeapYear);
			continue;
		}
		if( i%2 == 0 && i != 8 )
			countDay += 30;
		else
			countDay += 31;
	}
	return countDay+day;
}

int main(int argc, char const *argv[])
{
	int year, month, day;
	printf("%s\n", "请输入年月日，例如：2019 12 27");
	scanf("%d%d%d",&year,&month,&day);
	printf( "%s%d%s\n", "输入的日期为该年的第",computeDay(year,month,day),"天") ;
	return 0;
}



