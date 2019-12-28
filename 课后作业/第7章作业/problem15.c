#include <stdio.h>
#include <stdlib.h>
/**
 * 问题描述： 按一下要求写几个函数
 * 			1. 输入10个职工姓名和职工号
 * 			2. 按职工号由小到大排序
 * 			3. 要求输入一个职工号，用折半查找法查找并输出职工号和职工姓名
 * 运行环境: gcc版本4.2.1
 * 编译命令: gcc problem15.c -o problem15
 * 运行: ./problem15
 */
struct Staff
{
	char name[10];
	int num;
};

void createStaffs(struct Staff * staffs,int len)
{
	int i,isCustom;
	printf("%s\n", "输入0，表示系统创建员工 ,输入1，表示手动创建员工");
	scanf("%d",&isCustom);
	if(isCustom)
	{
		for (i = 0; i < len; ++i)
		{
			printf("%s%d%s\n", "输入第",i+1,"个职工的职工号和姓名，例如：1 小王");
			scanf("%d%s", &staffs[i].num,staffs[i].name);
		}
	}
	else
	{
		for (i = 0; i < len; ++i)
		{
			staffs[i].num = random()%(len*100);
		}
	}
	
}

// 使用希尔排序
void sortStaffs( struct Staff * staffs, int len )
{
	struct Staff tmp;
	int i ,preIndex ,gap = len/2;
	while( gap > 0 )
	{
		for( i = gap; i < len; i++)
		{
			tmp = staffs[i];
			preIndex = i - gap;
			while( preIndex >= 0 && staffs[preIndex].num > tmp.num )
			{
				staffs[preIndex + gap] = staffs[preIndex];
				preIndex -= gap;
			}
			staffs[preIndex + gap] = tmp;
		}
		gap /= 2;
	}
}


void getStaff( struct Staff * staffs, int len, int num )
{
	int mid, left = 0, right = len-1;
	while( left <= right )
	{
		mid = (left+right)/2;
		if(staffs[mid].num < num)
		{
			left = mid+1;
		}
		else if(staffs[mid].num > num)
		{
			right = mid-1;
		}
		else if(staffs[mid].num == num)
		{
			printf("%d\n", staffs[mid].num);
			return;
		}
	}
	printf("%s\n", "不存在");
}


int main(int argc, char const *argv[])
{
	int number,target,i;

	printf("%s\n", "输入创建员工数量");
	scanf("%d",&number);
	struct Staff staffs[number];
	createStaffs(staffs, number);
	sortStaffs(staffs, number);
	for ( i = 0; i < number; ++i)
	{
		printf("员工编号：%d\n", staffs[i].num);
	}
	printf("%s\n", "输入要查找的员工号");
	scanf("%d",&target);
	getStaff(staffs,number, target);
	
	return 0;
}



