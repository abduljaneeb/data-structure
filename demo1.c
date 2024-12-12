#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *link;
};

struct Node *header = NULL;

struct Node* createNode(int data) {
    struct Node *newnode;
    newnode = malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->link = NULL;
    return newnode;
}

// Insert at front function
void insertAtFront(int data) {
    struct Node *newnode;
    newnode = createNode(data);
    if (header == NULL) {
        header = newnode;
    } else {
        newnode->link = header;
        header = newnode;
    }
}

int main() {
    insertAtFront(10);
    insertAtFront(20);
    return 0;
}

