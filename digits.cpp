#include <stdio.h>
int main()
{
	int n,c=0;
	printf("Enter number");
	scanf("%d",&n);
	while (n!=0)
		{
			n=n/10;
			c++;

		}
	printf("The number of digits is %d",c);
}
