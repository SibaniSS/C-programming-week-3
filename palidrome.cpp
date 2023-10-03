# include <stdio.h>
int main()
{
	int num,rem,temp;
	int rev=0;
	printf("Enter a number");
	scanf("%d",&num);
	temp=num;
	while (num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}
	if (temp==rev)
	printf("Palidrome");
	
	else
	printf("Not a palidrome");
}
