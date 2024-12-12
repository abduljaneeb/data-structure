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
    printf("Node with data %d created\n", data);
    return newnode;
}

void insertAtFront(int data) {
    struct Node *newnode;
    newnode = createNode(data);
    if (header == NULL) {
        header = newnode;
        printf("Inserted %d at the front as the first node\n", data);
    } else {
        newnode->link = header;
        header = newnode;
        printf("Inserted %d at the front\n", data);
    }
}

void insertAtEnd(int data) {
    struct Node *newnode;
    newnode = createNode(data);
    if (header == NULL) {
        header = newnode;
        printf("Inserted %d at the end as the first node\n", data);
    } else {
        struct Node *temp = header;
        while (temp->link != NULL) {
            temp = temp->link;
        }

