#include<stdio.h>
#include<stdlib>
#include<stdbool.h>
#define MAX 1000


struct Stack{
    char* arr[MAX];
    int top;
};

void init(struct Stack* stack){

    stack->top = -1;
    //stack->top = NULL;
}

void push(struct Stack* stack,char* str){

    if(stack->top==MAX-1){
	return ;
    }
    stack->arr[++stack->top] = strdup(str);
    /*struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = stack->top;
    stack->top = new_node;
    */
}


void pop(struct Stack* stack){

    if(is_empty(stack)){

	return;
    }
    stack->arr[stack->top--]= NULL;

    
    //stack->top--;
        /*if(stack->top!=NULL){
        struct Node* temp;
        temp = stack->top;
        stack->top = stack->top->next;
        free(temp);
    }
    else{
        printf("stack is empty");

    }
    */

}
   

char* top(struct Stack* stack){
    if(!is_empty){
        return stack->arr[stack->top];
    }
}

bool is_empty(struct Stack* stack){
    return stack->top==-1;
}



char* simplifyPath(char* path) {

    struct Stack* stack = malloc(sizeof(struct Stack));
    init(stack);
    int idx = 0;
    char str1[50];
    char str2[20];
    

    while(path[idx]!='\0'){

	if(path[idx]=='/'){

	    push(stack,path[idx])


	}
	else{

	    
	}



       
    }
    
}
