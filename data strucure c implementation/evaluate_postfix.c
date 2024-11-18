#include<stdio.h>
#include<string.h>

struct Stack{

    int arr[101];
    int top;
};

void init(struct Stack* stack){

    stack->top = -1;
}

void push(struct Stack* stack,int data){

    stack->top++;
    stack->arr[stack->top] = data;
    
}

void pop(struct Stack* stack){

    stack->top--;
}

int top(struct Stack* stack){

    return stack->arr[stack->top];

}

int is_empty(struct Stack* stack){

    if(stack->top==-1){

	return 1;
    }

    return 0;
}

int heigh_pre(char stack_op,char str_op){

    if(stack_op=='*'|| stack_op=='/' &&
       (str_op=='*'||str_op=='/'||str_op=='+'||str_op=='-')){

	return 1;
    }
    return 0;


}


int evaluate_postfix_exp(char arr[],int length){

    
    struct Stack* stack;
    init(stack);
    int op_1,op_2,result;

    for(int i=0;i<length;i++){

	if(arr[i]>='0'&& arr[i]<='9'){

	    push(stack,arr[i]-'0');

	}
	else if(arr[i]=='+'){

	    op_2 = top(stack);
	    pop(stack);
	    op_1 = top(stack);
	    pop(stack);
	    result = op_1+op_2;
	    push(stack,result);

	    

	}
	else if(arr[i]=='-'){
	    op_2 = top(stack);
	    pop(stack);
	    op_1 = top(stack);
	    pop(stack);
	    result = op_1 - op_2;
	    push(stack,result);

	}
	else if(arr[i]=='*'){

	    op_2 = top(stack);
	    pop(stack);
	    op_1 = top(stack);
	    pop(stack);
	    result = op_1 * op_2;
	    push(stack,result);
	    

	}
	else if(arr[i]=='/'){

	    op_2 = top(stack);
	    pop(stack);
	    op_1 = top(stack);
	    pop(stack);
	    result = op_1 / op_2;
	    push(stack,result);
	    

	}

    }

    //return stack->arr[stack->top];
    printf("\t%d\n",stack->arr[stack->top]);
    return 1;


}
void infix_to_postfix(char arr[],int length){

    struct Stack* s;
    init(s);
    char postfix[length];
    int postfix_idx = 0;
   

    for(int i=0;i<length;i++){

	if(arr[i]>='0'&& arr[i]<='9'){

	    postfix[postfix_idx++] = arr[i];
	}
	else if(arr[i]=='+'||arr[i]=='-'||arr[i]=='*'||arr[i]=='/'){

	    while(!is_empty(s) && heigh_pre(s->arr[s->top],arr[i])){

		postfix[postfix_idx++] = s->arr[s->top];
		pop(s);
	    }
	    push(s,arr[i]);

	}
	
    }

    while(!is_empty(s)){

	postfix[postfix_idx++] = s->arr[s->top];
	pop(s);
	
    }
    postfix[postfix_idx] = '\0';
    
    printf("%s\n",postfix);
    return ;


}





int main(void){


    int length,result;
    char arr[20];

    printf("Enter the exp : ");
    scanf("%s",arr);
    length = strlen(arr);

    //result  = evaluate_postfix_exp(arr,length);

    infix_to_postfix(arr,length);
    //printf("%d",result);

    



    
    




}
