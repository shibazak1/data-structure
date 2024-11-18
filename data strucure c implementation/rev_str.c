#include<stdio.h>
#include<stdlib.h>

struct Node{

    char data;
    struct Node* next;
    
};

struct Node* top = NULL;

void push(char x){

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = top;
    top = new_node;
    
}

void pop(){

    struct Node* temp;
    temp = top;
    top = top->next;

    free(temp);
}


char Top(){

    return top->data;
}

int main(void){

    char arr[] = {'a','b','c'};

    for(int k=0;arr[k]!='\0';k++){

	push(arr[k]);
	
   }


    /*while(top!=NULL){

	struct Node* temp;
	temp = top;
	printf("%c",temp->data);
	temp = temp->next;

    }
    */

    for(int j=0;arr[j]!='\0';j++){

	char x;
	x = Top();

	arr[j] = x;
	pop();

    }

    for(int i=0;arr[i]!='\0';i++){

	printf("%s",arr[i]);
	

    }  

    




    return 0;
}
