
//打印素数



//方法1:(常规用法)
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//	int i;
//	printf("Please enter a number:");
//	scanf_s("%d", &num);
//	for (i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//	}
//	if (i < num)
//	{
//		printf("%d 不是素数\n", num);
//	}
//	else
//	{
//		printf("%d 是素数\n", num);
//	}
//	return 0;
//}



//方法2:(简称:择中算法)
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	int num;
//	int i = 0;
//	printf("Please enter a number:");
//	scanf_s("%d", &num);
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			break;
//		}
//
//	}
//	if (i <= sqrt(num))
//	{
//		printf("%d不是素数", num);
//	}
//	else
//	{
//		printf("%d是素数", num);
//	}
//	return 0;
//
//}

//方法3 ：（题中给出范围时使用）----->排除奇偶择中算法
//100-200范围：显示输出素数
//#include <stdio.h>
//#include <math.h>
//int main(void)
//{
//	
//	int i = 0;
//	int j = 0;
//	int n=0;
//	for (i = 101; i <= 200; i = i + 2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d  ", i);
//			n = n + 1;
//		}
//		if (n %10 == 0)
//		{
//			printf("\n");
//		}
//
//	}
//	return 0;
//
//}