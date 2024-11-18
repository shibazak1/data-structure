#include<stdio.h>                                                                     
#include<stdlib.h>
#include<string.h>                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
struct Stack{                                                                                                                                                                                                                                                                     
                                                                                                                                                                                                                                                                                  
    char arr[101];                                                                                                                                                                                                                                                                
    int top;                                                                                                                                                                                                                                                                      
};                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                  
void init(struct Stack* stack){                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                  
    stack->top = -1;                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                  
}                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
void push(struct Stack* stack ,char x){                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                  
    stack->top++;                                                                                                                                                                                                                                                                 
    stack->arr[stack->top] = x;                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                  
}                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
void pop(struct Stack* stack){                                                                                                                                                                                                                                                    
    stack->top--;                                                                                                                                                                                                                                                                 
}                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
char  top(struct Stack* stack){                                                                                                                                                                                                                                                   
                                                                                                                          
    return stack->arr[stack->top];                                                                                                                                                                                                                                                
}

void reverse(char arr[],int len){


    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));

    init(stack);

    for(int i=0;i<len;i++){

	push(stack,arr[i]);



    }

    for(int k=0;k<len;k++){

	arr[k] = top(stack);
	pop(stack);


    }

    






}
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
int main(void){                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                  
    char arr[20];                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
    printf("Enter string : ");                                                                                                                                                                                                                                                    
    scanf("%s",arr);
    int len = strlen(arr);
    
    reverse(arr,len);

    printf("%s",arr);

    
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                  
    return 0;                                                                                                                                                                                                                                                                     
}                                                                                                                                                                                                                                                                                 
                                                                                                                                                                                                                                                                                  
       
