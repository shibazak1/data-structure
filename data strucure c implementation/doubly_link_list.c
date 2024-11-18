#include<stdio.h>
#include<stdlib.h>


typedef struct node{

    int data;
    struct node* next;
    struct node* pre;

}node_type;

node_type* head;

void InsertAtHead(int x){


    node_type* node  = (node_type*)malloc(sizeof(node_type));
    node->data = x;
    node->next = head;
    node->pre = NULL;
    head = node;
    
}


void InsertAtTail(int x){

    node_type* node = (node_type*)malloc(sizeof(node_type));
    node_type* curr_node = head;
    while(curr_node->next!=NULL){

	curr_node = curr_node->next;


    }
    node->data = x;
    node->next = curr_node->next;
    curr_node->next = node;
    node->pre = curr_node;
    




}

void print(){

    node_type* curr_node;
    curr_node= head;
    while(curr_node!=NULL){

	printf("%d",curr_node->data);
	curr_node = curr_node->next;

    }



}

void reverse_print(){

    node_type* temp = head;
    if(temp==NULL) return ;

    while(temp->next!=NULL){

	temp = temp->next;
    }
    while(temp!=NULL){

	printf("%d",temp->data);
	temp = temp->pre;

    }

    
    
}


int main(void){

    head = NULL;
    InsertAtHead(1);
    InsertAtHead(2);
    InsertAtHead(3);

    InsertAtTail(6);
    InsertAtTail(5);

    print();
    printf("\n");

    reverse_print();


    return 0;
}
