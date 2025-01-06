#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
int item;

void push()
{
	if(top==max-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("item to be inserted : ");
		scanf("%d",&item);
		top++;
		stack[top]=item;
		printf("inserted item : %d",item);
	}
	printf("\n\n");
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("poped item : %d",stack[top]);
		top--;
	}
	printf("\n\n");
}
void traversal()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("stack elements are : ");
		for(int i=top ; i>0 ; i--);
		{
			printf("%d ",stack[i]);
		}
	}
}
int main()
{
	push();
	push();
	push();
	
	traversal();
	return 0;
	
}
		

