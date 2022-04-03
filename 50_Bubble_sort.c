#include <stdio.h>

void printArray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}

void bubbleSort(int *A,int n){

    int temp;
    for (int i = 0; i < n-1; i++)  {// to traverse for a number of passes
    printf("Bubble sort Working on pass number %d\n",i+1);
        for (int j = 0; j < (n-1-i); j++) // to traverse for no of elements to be compared and swap them
        {
            if (A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }           
        }
        
    }

}

void bubbleSortAdaptive(int *A,int n){

    int temp;
    int isSorted =0;
    
    for (int i = 0; i < n-1; i++)  {// to traverse for a number of passes
            
        isSorted = 1 ;
        printf("Bubble sort Adaptive Working on pass number %d\n",i+1);
        for (int j = 0; j < (n-1-i); j++) // to traverse for no of elements to be compared and swap them
        {
            if (A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted=0 ;
            }           
        }
        if (isSorted){
            return;
        }
    }

}




int main(){
     
    //  int A[]= {12,56,65,7,23,9};
     int A[]= {1,2,3,4,5,6};
     int A2[]= {1,2,3,4,5,6};
     int n=6;
     
     printArray(A,n);// printing the array before sortng
     bubbleSort(A,n);//function to bubble sort array
     printArray(A,n);// printing the array before sortng
     
     bubbleSortAdaptive(A2,n);//function to bubble sort array 
     printArray(A2,n);// printing the array before sortng
     return 0;
}