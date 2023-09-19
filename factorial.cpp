# include <stdio.h>
int main()
{
	int s=1,num,i;
	printf("Enter a number");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		s=s*i;

	}
	printf("Factorial is %d",s);
}
