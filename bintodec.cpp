#include <stdio.h>
#include <math.h>
int main()
{
	int num,rem=0,dec,i=0;
	scanf("%d",&num);
	while (num!=0)
	{
	rem=num%10;
	num=num/10;
	dec=dec+rem*pow(2,i);
	++i;
	}
	printf("Binary to decimal is %d",dec);
}
