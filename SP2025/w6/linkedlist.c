#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

Node* addItem(int node, Node* head);
void deleteItem(Node* node, Node* head);
Node* createNode(int data);


// Careful this code still has memory leaks
int main() {
    Node* head = NULL;
    for(int i=0; i<3; i++) {
        head = addItem(i, head);
    }
    Node victim;
    victim.data = 1;
    victim.next = NULL;
    deleteItem(&victim, head);
    return 0;
}

Node* createNode(int data) {
    Node* node = NULL;
    node = malloc(sizeof(*node));
    node->data = data;
    node->next = NULL;
    return node;
}

Node* addItem(int data, Node* head) {
    Node* node = createNode(data);
    node->next = head;
    return node;
}


void deleteItem(Node* node, Node* head) {
    Node* tmp = head;
    Node* prev = NULL;
    while(tmp) {
        if(tmp->data == node->data) {
            printf("Found data: %d\n", tmp->data);
            Node* nextNode = tmp->next;
            prev->next = nextNode;
            free(tmp);
            break; 
        }
        prev = tmp;
        tmp = tmp->next;
    } 
}