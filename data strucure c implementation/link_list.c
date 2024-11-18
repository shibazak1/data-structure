#include<stdio.h>
#include<stdlib.h>



struct node{

    int data;
    struct node* next;



};
struct node* head;




int add_node(struct node* a,struct node*b){

    struct node* temp;
    temp =a;
    while(temp->next!=NULL){

	temp = temp->next;


    }
    temp->next=b;



}
void insert(int x){

    // insert node at beging

    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = x;
    
    if(head!=NULL){

	new_node->next = head ;
	head = new_node; 


    }
    else{

    head = new_node;
    new_node->next = NULL;
    }
    
}

void insert_at_position(int p,int x){

    struct node* temp = head;

    if(p==1){

	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = x;
	new_node->next = head;
	head = new_node;


    }
    else{
	for(int i=0;i<p-2;i++){
	    
	    temp = temp->next;
      
    }

	struct node* new_node = (struct node*)malloc(sizeof(struct node));

	new_node->data = x;;
	new_node->next = temp->next;
	temp->next  = new_node;
    }
}


void print(){

    struct node* temp;
    temp = head;

    printf("the list is ");
    while(temp!=NULL){

	printf("%d " , temp->data);
	temp = temp->next;
	



    }
    printf("\n");

}

void delete(int p){

    struct node* temp;
    temp = head;
    struct node* temp1;

    if(p==1){

	head = temp->next;
	free(temp);
    }
    
    for(int i=0;i<p-2;i++){

	temp = temp->next;
    }
    temp1 = temp->next;

    temp->next = temp1->next;

    free(temp1);
    
    //temp->next = temp->next->next;
    

    

    return;


}
void reverse(){

    struct node* curr_node = head;
    struct node* pre_node;
    struct node* next_node;

    pre_node = NULL;
    while(curr_node!=NULL){
	next_node = curr_node->next;

	//pre_node = temp;
	curr_node->next = pre_node;
	pre_node = curr_node;

	//pre_node = temp;
	/*if(next_node==NULL){
	    head = pre_node;
	    return;

	}
	*/
	curr_node = next_node;
	
    }
    head = pre_node;

    return;


}

struct node* reverse2(struct node* curr_node){

    
    struct node* next_node;
    if(curr_node->next==NULL){
	
	head = curr_node;
	return curr_node;
    }
    else{
	next_node =  reverse2(curr_node->next);
	next_node->next  = curr_node;
	curr_node->next = NULL;
	
	//printf("%d",curr_node->data);
    }


}



int main(void){


    head =NULL;
    int n,x,i;
    printf("how many numbers");
    scanf("%d",&n);

    for(i=0;i<n;i++){

	scanf("%d",&x);

	insert(x);
	print();
	
	

    }

    //insert_at_position(1,55);
    //delete(3);
    //reverse();
    struct node* curr_node = head;
    reverse2(curr_node);
    print();
                                                                                                                            
    return 0;

}
