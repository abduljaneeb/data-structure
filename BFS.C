#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// Adjacency matrix
int Adjmatrix[SIZE][SIZE] = {
    {0, 0, 1, 0},
    {1, 0, 0, 0},
    {0, 0, 0, 1},
    {0, 1, 0, 0}
};

int visit[SIZE] = {0, 0, 0, 0};
int queue[SIZE];
int front = -1;
int rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to add an element to the queue
void enqueue(int element) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = element;
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return -1;
    }
    int element = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return element;
}

// Function to perform BFS traversal
void bfs(int startNode) {
    enqueue(startNode);
    visit[startNode] = 1;
    printf("BFS Traversal: ");

    while (!isEmpty()) {
        int currentNode = dequeue();
        printf("%d ", currentNode + 1); // Adding 1 to match typical node numbering

        for (int i = 0; i < SIZE; i++) {
            if (Adjmatrix[currentNode][i] == 1 && visit[i] == 0) {
                enqueue(i);
                visit[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    bfs(0); // Start BFS from node 0
    return 0;
}
