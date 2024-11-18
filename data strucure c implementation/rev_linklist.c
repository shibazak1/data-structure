#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node* next;
};

struct Stack{

    struct Node* arr[101];
    int top;
};


void init(struct Stack* stack){

    stack->top = -1;

}


void push(struct Stack stack,struct Node* node){

    stack->top++;
    stack->arr[stack->top] = node;

}

void pop(struct Stack stack){

    stack->top--;

}

struct Node* top(struct Stack stack){

    return stack->arr[stack->top];
}

bool is_empty(struct Stack stack){

    if(stack->top==-1){

	return 1;
    }
    return 0;
}

void reverse(struct Stack stack,struct Node* head){

    struct Node* temp;
    temp = head;

    while(temp!=NULL){

	push(stack,temp);
	temp = temp->next;
	
    }

    temp = top(stack);
    head = temp;
    pop(stack);
   
    while(!is_empty(stack)){


	temp-next = top(stack);
	pop(stack);
	temp = temp->next;
       
    }

    temp->next = NULL;



}


