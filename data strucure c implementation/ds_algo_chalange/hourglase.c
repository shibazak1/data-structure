#include<stdio.h>
#include<stdlib.h>

int sum(int **arr){

    int sum;
    for(int i =0;i<5;i++){

	for(int j=0;j<5;j++){

	    sum = arr[i][j]+arr[i][j+1]+arr[i][j+2] +arr[i+1][j+1]+ arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
	    


	}


       

    }


    return sum;


}


int main(void){


   
   int **arr = (int**)malloc(6*sizeof(int*));

    for(int i=0;i<6;i++){

	*(arr+i) = (int*)malloc(6*sizeof(int));

    }

    for(int k=0;k<6;k++){

	for(int j=0;j<6;j++){

	    *(*(arr+k)+j) = 1;


	}
	



    }

    for(int i=0;i<6;i++){

	for(int k=0;k<6;k++){

	    printf("%d",*(*(arr+i)+k));


	}

	printf("\n");



    }
    
    int s = sum(arr);
    printf("%d",s);




    return 0;

}
