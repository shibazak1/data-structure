#include<stdio.h>

int reverse(int n,int *arr){

    int *temp;
    for(int i=0;i<n;i++){

	for(int k=n-1;k<i;k--){

	    *temp = *(arr+i);
	    *(arr+i) = *(arr+k);
	    *(arr+k) = *temp;


	}




    }
    




}




int main(void){

    int n = 3;
    int arr[] = {1,2,3};


    reverse(n,arr);

    for(int i=0;i<n;i++){

	printf("%d",*(arr+i));


    }

    return 0;



    






}
