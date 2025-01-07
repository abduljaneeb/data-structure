#include<stdio.h>
#define max 5
int queue[max];
int rear=-1;
int front=-1;
int item;

void enqueue(){
        if(rear==max-1){
            printf("queue is full");
        }
        else{

            printf("value to be inserted  : ");
            scanf("%d",&item);
            if(front == -1){
                front = 0;
            }
                rear++;
                queue[rear]=item;
                printf("enqueueed item :%d",item);
        }
        printf("\n\n");
    }
void dequeue(){
        if(front==-1 || front > rear){
            printf("queue is empty\n");
        }
        else {
            printf("dequeued items\n : %d",queue[front]);
            front ++;
        }
        printf("\n\n");
}
void traversal(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
            printf("queue items :");
        for(int i = front ; i <= rear ; i++){
            printf("%d",queue[i]);
        }
        printf("\n\n");
    }
    printf("\n\n");
}

int main(){
    int choice;
    do{
        printf("menu\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.traversal\n");
        printf("4.exit\n");
        scanf("%d",&choice);
         switch(choice)
         {
         case 1:
            enqueue();
            break;
         case 2:
            dequeue();
            break;
         case 3:
            traversal() ;
            break;
         case 4:
            break;
         default:
            printf("you are wrong\n");

         }
    }
         while(choice != 4);
         return 0;
    }

