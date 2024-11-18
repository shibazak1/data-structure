#include <stdio.h>
#include<stdlib.h>

long long MaxPairwiseProductFast(int arr[],int n){

    int max_indx1 =-1;
    
    for(int i=0;i<n;++i){
	if(max_indx1==-1||arr[max_indx1]<arr[i]){

	    max_indx1 = i;
	}

	
    }
    int max_indx2 =-1;
    for(int k=0;k<n;++k){
	if(k != max_indx1 && (max_indx2 ==-1 || arr[max_indx2]<arr[k])){

	    max_indx2 = k;
	}

	
    }

    printf("%d %d ",max_indx1,max_indx2);
    
    return (long long)arr[max_indx1]*arr[max_indx2];
}


long long MaxPairwiseProduct(int arr[],int n){

    long long result = 0;

    for(int i=0;i<n;++i){

	for(int k=i+1;k<n;++k){

	    if(result< arr[i]*arr[k]){

		result =((long long)arr[i]*arr[k]);
	    }

	}


    }


    return result;
}



int main(void){
    /*
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){

	printf("%d\n",arr[j]);
    }
    */

    while(1){
	int n;
	n = rand()%10+2;
	printf("%d",n);
	int arr[n];
	for(int i=0;i<n;i++){

	    arr[i]=rand()%10;
	    
	}
	printf("\n");
	for(int k=0;k<n;k++){

	    printf("%d ",arr[k]);

	}
	printf("\n");
	long long res1 = MaxPairwiseProduct(arr,n);
	long long res2 = MaxPairwiseProductFast(arr,n);
	if(res1!=res2){
	    printf("Wrong answer %lld %lld\n",res1,res2);
	    break;
	}
	else{

	    printf("ok\n");
	}
    }

    /*
    int arr[100000]={0};
    long long result =  MaxPairwiseProductFast(arr,100000);
    printf("%lld\n",result);

    return 0;
    */
    



}
