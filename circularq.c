#include<stdio.h>
#define max 5

int cq[max];
int front=-1;
int rear=-1;
int item;

void enq()
{
    if((rear+1)%max==front)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)%max;
        printf("enter item : ");
        scanf("%d",&item);
        cq[rear]=item;
        printf("Inserted item : %d",cq[rear]);
    }
    printf("\n");
}
void deq()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        if(front==rear)
        {
            printf("Deleted item : %d",cq[front]);
            front=rear=-1;
        }
        else
        {
            printf("Deleted item : %d",cq[front]);
            front=(front+1)%max;
        }
    }
    printf("\n");
}
void traversal()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int i=front;
        printf("Elements in queue: ");
        while(i!=rear)
        {
            printf("%d",cq[i]);
            i=(i+1)%max;
        }
        printf("%d ", cq[rear]);
    }
    printf("\n");
}

int main()
{

    int choice;
    do
    {
        printf(" 1-Enqueue \n 2-Dequeue \n 3-Trversal \n 4-Exit \n");
        printf("Enter one of 4 choices : ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            enq();
            break;
        case 2:
            deq();
            break;
        case 3:
            traversal();
            break;
        case 4:
            break;
        default:
            printf("Wrong choice entered \n");
        }
    }while(choice !=4);
return 0;
}
