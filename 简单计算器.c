#include <stdio.h>
int main()
{
	int a,b,c;
	char num;
	scanf("%d%c%d=%d",&a,&num,&b,&c);
	printf("Êä³öÖµ:\n");
	//printf("%d%c%d=%d",a,num,b,c);
	switch (num)
	{
	case '*':
		if(c == (a * b))
		{
			printf("Perfect\n");
		}
		else
		{
			printf("Error!\n%d%c%d=%d\n", a, num, b, a * b);
		}
		break;
	case '/':
		if (c == (a / b))
		{
			printf("Perfect\n");
		}
		else
		{
			printf("Error!\n%d%c%d=%d\n", a, num, b, a / b);
		}
		break;
	case '+':
		if (c == (a + b))
		{
			printf("Perfect\n");
		}
		else
		{
			printf("Error!\n%d%c%d=%d\n", a, num, b, a + b);
		}
		break;
	case '-':
		if (c == (a- b))
		{
			printf("Perfect\n");
		}
		else
		{
			printf("Error!\n%d%c%d=%d\n", a, num, b, a- b);
		}
	}
	return 0;
}