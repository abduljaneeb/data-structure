#include<stdio.h>
int main()
{
	int ary[10];
	int elements;
	int sum=0;
	int i=0;
	
	printf("enter elements : ");
	scanf("%d",&elements);
	for(i=0; i<elements; i++)
	{
		scanf("%d", &ary[i]);
	}
	
	for(i=0; i<elements; i++)
	{
		sum=sum+ary[i];
	
	}
	printf("%d",sum);
	return(0);
}
