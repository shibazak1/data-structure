// link list implementation of queue
#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node* next;

};

struct Queue{

    struct Node* front;
    struct Node* rear;

};

void init(struct Queue* q){

    q->front = NULL;
    q->rear = NULL;
}

int is_empty(struct Queue* q){

    return q->front == NULL && q->rear == NULL;
}

void enqueue(struct Queue* q,int x){

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = NULL;
    if(is_empty(q)){

	q->front = q->rear =  new_node;
	return;
	//q->rear = new_node;
	//q->rear->next = NULL;
    }

    q->rear->next = new_node;
    q->rear = new_node;
    //q->rear->next = NULL;
}

void dequeue(struct Queue* q){

    if(is_empty(q)){

	return;
    }
    if(q->front == q->rear){

	q->front = q->rear = NULL;
    }
    else{
	struct Node* temp;
	temp = q->front;
	q->front  = q->front->next;
	free(temp);
    }
}

int front(struct Queue* q){

    return q->front->data;

}


int main(void){

    struct Queue* q = malloc(sizeof(struct Queue));
    init(q);

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);

    dequeue(q);
    dequeue(q);

    printf("%d",front(q));


    return 0;
   
}
