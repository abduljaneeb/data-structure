#include <stdio.h>


	int queue[20];
	int front = -1;
	int rear = -1;

int isEmpty() 
{
    	return front == -1;
}

int isFull() 
{
    	return rear == 20 - 1;
}


void enqueue(int element) 
{
    if (isFull()) 
{
        printf("Queue is full\n");
        return;
    }
   	 if (isEmpty())
 {
        	front = rear = 0;
    } else 
	{
	        rear++;
	 }
    	queue[rear] = element;
    	printf("%d enqueued to queue\n", element);
}

int dequeue() 
{
    	if (isEmpty()) 
{
        	printf("Queue is empty\n");
        return -1;
    }
    	int element = queue[front];
    	if (front == rear) 
{
        front = rear = -1; 
    } else
 {
        front++;
    }
    	return element;
}


void traversel() 
{
    	if (isEmpty())
 {
        printf("Queue is empty\n");
        return;
    }
    	printf("Queue elements: ");
    	for (int i = front; i <= rear; i++) 
{
        printf("%d ", queue[i]);
    }
    	printf("\n");
}

int main() 
{
    	int choice, element;
    	while (1) 
{
        printf("1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
 {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                element = dequeue();
                if (element != -1) 
                {
                    printf("Dequeued element: %d\n", element);
                }
                break;
            case 3:
                traverse();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
