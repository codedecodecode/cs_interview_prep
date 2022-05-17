#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node*));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* l1 = newNode(10);
    l1->next = newNode(12);
    l1->next->next = newNode(14);
    l1->next->next->next = newNode(18);

    printList(l1);
    struct Node* l2 = newNode(11);
    l2->next = newNode(13);
    l2->next->next = newNode(15);
    l2->next->next->next = newNode(17);
    printList(l2);
}