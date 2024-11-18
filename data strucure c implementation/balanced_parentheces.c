#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Stack{

    char arr[101];
    int top;
    
};

void init(struct Stack* stack){

    stack->top=-1;
}

void push(struct Stack* stack,char x){

    stack->top++;
    stack->arr[stack->top] = x;

}

void pop(struct Stack* stack){

    stack->top--;
}

char top(struct Stack* stack){

    return stack->top;
}

int is_empty(struct Stack* stack){

    return stack->top==-1;
}

int check_balanced_parantheces(struct Stack* stack ,char arr[],int length){

    for(int i=0;i<length;i++){

	if(arr[i]=='('|| arr[i]=='[' || arr[i]=='{'){

	    push(stack,arr[i]);
	}
	else if(arr[i]==')'||arr[i]==']'||arr[i]=='}'){

	    if(is_empty(stack)||

	       stack->arr[stack->top] =='(' && arr[i]!=')'||
	       stack->arr[stack->top] =='[' && arr[i]!=']'||
	       stack->arr[stack->top] =='{' && arr[i]!='}'){


		return 0;
		
	    }
	    else{

		pop(stack);
	    }


		

	}


    }

    return is_empty(stack)?1:0;

}



int main(void){

    char arr[20];
    int length,result;
    
    struct Stack* stack;
    init(stack);

    printf("Enter string : ");
    
    scanf("%s",arr);

    length = strlen(arr);
    result = check_balanced_parantheces(stack,arr,length);

    printf("%d",result);
    
    



    return 0;



}
