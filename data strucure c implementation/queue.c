// array implementation of queue
#include<stdio.h>

struct Queue{

    int arr[10];
    int rear;
    int front;
};

void init(struct Queue* queue){

    queue->rear = -1;
    queue->front = -1;
}

int is_empty(struct Queue* queue){

    if(queue->rear==-1 && queue->front==-1){
	return 1;
    }
    return 0;
}

int is_full(struct Queue* queue){

    if((queue->rear+1)%10==queue->front){
	return 1;
    }
    return 0;
}

void enqueue(struct Queue* queue,int x){

    if((queue->rear+1)%10==queue->front){

	return;
    }
    
    else if(is_empty(queue)){

	queue->rear = 0;
	queue->front = 0;
    }
    else{
	queue->rear = (queue->rear+1)%10;
    }
    queue->arr[queue->rear] = x;
    
}

void dequeue(struct Queue* queue){

    if(is_empty(queue)){

	return;
    }
    else if(queue->front == queue->rear){


	queue->front = -1;
	queue->rear = -1;
    }
    

    queue->front = (queue->front+1)%10;
    
    
}

int front(struct Queue* queue){

    return queue->arr[queue->front];
}



int main(void){

    struct Queue* q;
    init(q);

    enqueue(q,0);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    dequeue(q);
    dequeue(q);
    //dequeue(q);
    printf("%d",front(q));

    return 0;
   
}
