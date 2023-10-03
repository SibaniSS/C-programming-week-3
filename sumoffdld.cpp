# include <stdio.h>
int main()
{
	int num,fd,ld,c=0,i,sum,digit,temp;
	scanf("%d",&num);
	temp=num;
	ld=num%10;
	while (num>0)
	{
		num=num/10;
		c=c+1;
		
    }
    
    for(i=0;i<c;i++)
    {
    	
    	digit=temp%10;
    	temp=temp/10;
	}
	fd=digit;
	sum=fd+ld;
	printf("The sum is %d",sum);
}
