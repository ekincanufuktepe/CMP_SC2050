#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    void* data;
    struct node *next;
}Node;

Node* addItem(void* node, Node* head);
void deleteItem(Node* node, Node* head);
Node* createNode(void* data);
void freeLinkedList(Node* head);

int main() {
    Node* head = NULL;
    for(int i=0; i<3; i++) {
        int* data = malloc(sizeof(int));
        *data = i;
        head = addItem(data, head);
    }

    // char a = 0;
    // head = addItem(&a, head);
    // char b = 1;
    // head = addItem(&b, head);
    // char c = 2;
    // head = addItem(&c, head);
    // }
    // Node victim;
    // char* x = &b;
    // victim.data = x;
    // victim.next = NULL;
    // deleteItem(&victim, head);
    freeLinkedList(head);
    return 0;
}

Node* createNode(void* data) {
    Node* node = NULL;
    node = malloc(sizeof(*node));
    node->data = data;
    node->next = NULL;
    return node;
}

Node* addItem(void* data, Node* head) {
    Node* node = createNode(data);
    node->next = head;
    return node;
}


void deleteItem(Node* node, Node* head) {
    Node* tmp = head;
    Node* prev = NULL;
    while(tmp) {
        if(tmp->data == node->data) {
            // printf("Found data: %d\n", tmp->data);
            printf("Found data at: %p\n", tmp->data);
            Node* nextNode = tmp->next;
            prev->next = nextNode;
            free(tmp);
            break; 
        }
        prev = tmp;
        tmp = tmp->next;
    } 
}

void freeLinkedList(Node* head) {
    Node* nextNode;
    // Node* node = NULL;
    // for(node=head; node!=NULL; node = node->next);
    while(head) {
        nextNode = head->next;
        // int* p = (int*)head->data;
        free(head->data);
        free(head);
        head = nextNode;
    }
}