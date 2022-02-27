#define _CRT_SECURE_NO_WARNINGS
//题目   
//A选手说：B第二，我的三
//B选手说：我第二，E第四
//C选手说：我第一，D的二
//D选手说：C最后，我第三
//E选手说：我第四，A第一
//比赛结束后，每位选手都只说对了一半，请编程确定比赛的名次
#include<stdio.h>
int main()
{
	//每位选手都只说对了一半,
	//则有0+1=1，或1+0=1
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	//使用穷举的方法，
	for (a = 1;a < 6;a++)
	{
		for (b = 1;b < 6;b++)
		{
			for (c = 1;c < 6;c++)
			{
				for (d = 1;d < 6;d++)
				{
					for (e = 1;e < 6;e++)
					{
						if (((b == 2) + (a == 3) == 1) && 
							((b == 2) + (e == 4) == 1) && 
							((c == 1) + (d == 2) == 1) &&
							((c == 5) + (d == 3) == 1) && 
							((e == 4) + (a == 1) == 1))
						{	
								//为了防止偶然性
							if (a * b * c * d * e == 120)
								printf("A第%d名 B第%d名 C第%d名 D第%d名 E第%d名", a, b, c, d, e);
						}
					}
				}
			}
		}
	}
	return 0;
}
