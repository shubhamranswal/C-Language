#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* head){
    struct Node*p;
    if(head==NULL){
        printf("Empty");
    }
    else{
        p=head;
        while(p!= NULL){
            printf("%u  ", p->data);
            p=p->next;
        }
    }
    return;
}
 
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
 
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
 
    head->data = 1;
    head->next = second;
    second->data = 2;

    second->next = third;
 
    third->data = 3;
    third->next = NULL;

    display(head);
 
    return 0;
}