// array based implementation of stack

#include<stdio.h>
#define max_size 101

int arr[max_size];
int top = -1;

void Push(int x){

    if(top==max_size-1){

	printf("Error stack overflow \n");
	return;
    }
    arr[++top] = x;
    
}

void Pop(){

    if(top==-1){

	printf("Error no element to pop");
	return ;
    }
    top--;
}

int Top(){

    return arr[top];
    
}

void print(){

    printf("stack : ");
    for(int k=0;k<=top;k++){
	
	printf("%d ",arr[k]);
	
    }

    printf("\n");

}


int main(void){


    Push(1);
    print();
    

    
    return 0;
}
