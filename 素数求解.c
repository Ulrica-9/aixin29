
//��ӡ����



//����1:(�����÷�)
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
//		printf("%d ��������\n", num);
//	}
//	else
//	{
//		printf("%d ������\n", num);
//	}
//	return 0;
//}



//����2:(���:�����㷨)
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
//		printf("%d��������", num);
//	}
//	else
//	{
//		printf("%d������", num);
//	}
//	return 0;
//
//}

//����3 �������и�����Χʱʹ�ã�----->�ų���ż�����㷨
//100-200��Χ����ʾ�������
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