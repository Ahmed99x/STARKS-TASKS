#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;



Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* createLinkedList(int length) {
    if (length <= 0) {
        return NULL;
    }

    Node* head = NULL;
    Node* tail = NULL;

    for (int i = 0; i < length; i++) {
        int data;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);

        Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

void findMiddleElements(Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node* slowPtr = head;
    Node* fastPtr = head;
    Node* prevPtr = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        fastPtr = fastPtr->next->next;
        prevPtr = slowPtr;
        slowPtr = slowPtr->next;
    }

    if (fastPtr == NULL) {
        printf("Middle elements: %d and %d\n", prevPtr->data, slowPtr->data);
    } else {
        printf("Middle element: %d\n", slowPtr->data);
    }
}

void freeLinkedList(Node* head) {
    Node* temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int length;
    while (1) {
        printf("Enter the length of the linked list (0 to exit): ");
        scanf("%d", &length);

        if (length == 0) {
            break;
        }

        Node* head = createLinkedList(length);
        findMiddleElements(head);
        freeLinkedList(head);
    }

    return 0;
}