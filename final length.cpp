# include <stdio.h>
int main()
{
	int num,c=0;
	scanf("%d",&num);
	while (num>0)
	{
		num=num/10;
		c=c+1;
		
	}
	printf("The count is %d",c);
}
