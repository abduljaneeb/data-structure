#include<stdio.h>
#define max 5

int stack[max];
int top=-1;
int item;


void push()
{
	if(top==max-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		printf("enter item to be pushed :");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
		printf("pushed item : %d\n", item);
	}	
}
void pop()
{
	if(top<0)
	{
	printf("stack is empty");
	}
	else
	{
		printf("Popped item :%d\n",stack[top]);
		int poppeditem=stack[top];
		top--;
	}
}
void traversal()
{
	if(top<0)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("stack items are : ");
		for(int i=top; i>=0; i--)
		{
			printf("%d\t\n",stack[i]);

		}
	}
}
int main()
{
	int choice;
	
	
	do
	{
		printf("1. push\n2. pop\n3. Traversel\n4. Exit\n");
        	printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				printf("traversal");
				break;
			case 4:
				break;
	
			default:
				printf("you have chosen wrong choice");

		}
 	}while(choice !=4);
	 return(0);
}

	
