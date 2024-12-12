#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *llink;
    struct Node *rlink;
};

struct Node *header = NULL;

struct Node *create_Node(int data) {
    struct Node *Newnode = (struct Node *)malloc(sizeof(struct Node));
    Newnode->data = data;
    Newnode->llink = NULL;
    Newnode->rlink = NULL;
    return Newnode;
}

void insertAtfront(int data) {
    struct Node *Newnode = create_Node(data);
    if (header == NULL) {
        header = Newnode;
    } else {
        Newnode->rlink = header;
        header->llink = Newnode;
        header = Newnode;
    }
}

void insertAtend(int data) {
    struct Node *Newnode = create_Node(data);
    if (header == NULL) {
        header = Newnode;
    } else {
        struct Node *ptr = header;
        while (ptr->rlink != NULL) {
            ptr = ptr->rlink;
        }
        ptr->rlink = Newnode;
        Newnode->llink = ptr;
    }
}

void deleteAtfront() {
    if (header == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *ptr = header;
    header = ptr->rlink;
    if (header != NULL) {
        header->llink = NULL;
    }
    free(ptr);
}
void deleteAtend() {
    if (header == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *ptr = header;
    while (ptr->rlink != NULL) {
        ptr = ptr->rlink;
    }

    if (ptr == header) { 
        free(header);
        header = NULL;
    } else {
        ptr->llink->rlink = NULL;
        free(ptr);
    }
}

void traversal() {
    struct Node *ptr = header;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->rlink;
    }
    printf("\n");
}

int main() {
    insertAtfront(22);
    insertAtfront(22);
    insertAtfront(33);
    insertAtfront(44);

    insertAtend(3);
    insertAtend(96);
    insertAtend(30);
    insertAtend(70);

    deleteAtfront();
    deleteAtend();

    traversal();
    return 0;
}
