#include <stdio.h>



void printArray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}

void selectionSort (){
    
}




int main(){
     
    int A[]={3,5,2,13,2};
    int n = 5;
         
     printArray(A,n);
     selectionSort(A,n);
     printArray(A,n);
     return 0;
}