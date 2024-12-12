
#include<stdio.h>
int main()
{	
	int ary[10];
	int elements;
	int i;
	int sum=0;
	printf("enter size:");
	scanf("%d",&elements);
	for(i=0;i<elements;i++)
	{
		printf("element %d : ",i+1);
		scanf("%d",&ary[i]);
	}
	for(i=0;i<elements;i++)
	{
		sum=sum+ary[i];
	}
	printf("sum =%d",sum);
	return(0);
}




