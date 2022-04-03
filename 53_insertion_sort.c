#include <stdio.h>


    
void printArray(int *A,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
        printf("\n");
    
}






//         step 1> 12 || 56,65,7,23,9 |
//--> consider an array with element as 12 in it nad we want to insert 56 in it

//         step 2> 12 56 || 65 7 23 9
// -->here after inserting 52 from step 1 the array to left is already sorted and for next step we have to insert 56

//         step 3> 12 56 65 || 7 23 9

// -->here after inserting 65 from step 2 the array to left is already sorted and for next step we have to insert 7

//         step 4>  7 12 56 65 || 23 9

// -->here after inserting 7 from step 3 the array to left is need to be sorted (3 possible comparisons and 3 possible swaps) and for next step we have to insert 23

    //         step 5>  7 12 23 56 65 ||  9

// -->here after inserting 7 from step 3 the array to left is need to be sorted (4 possible comparisons and 4 possible swaps) and for next step we have to insert 9

//         step 4>  7 12 56 65 || 23 9

// -->here after inserting 7 from step 3 the array to left is need to be sorted (3 possible comparisons and 3 possible swaps) and for next step we have to insert 23

    //         step 5>  7 12 23 56 65 ||  9

// -->here after inserting 7 from step 3 the array to left is need to be sorted (4 possible comparisons and 4 possible swaps) and for next step we have to insert 9

void insertionSort(int *A,int n){
    int key,j;
    for (int i = 0; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j]>key){
        // while(j>=0 && A[j]<key){ //for descending sorting of array
            A[j+1] = A[j];
            j--;    
        }
        A[j+1] =key;
        
    }
    
        
}


int main(){
/*   
    -1   0   1   2   3   4   5
        12 | 56  65  07  23  09 --> i =1,key = 54, j =0
        12 | 56  65  07  23  09 ==> 1st pass Done(i=1)!
        
        12  56 | 65  07  23  09 --> i =2,key = 65, j =1
        12  56 | 65  07  23  09 ==> 2st pass Done(i=2)!
        
        
        12  56  65 | 07  23  09 --> i =3,key = 07, j =2
        12  56  65 | 65  23  09 --> i =2,key = 07, j =1
        12  56  56 | 65  23  09 --> i =1,key = 07, j =0
        12  12  56 | 65  23  09 --> i =0,key = 07, j =1
        07  12  56 | 65  23  09 --> i =2,key = 07, j =2
        07  12  56 | 65  23  09 --> i =2,key = 07, j =2
        07  12  56 | 65  23  09 ==> 3st pass Done(i=3)!
        
        07  12  56  65 | 23 09 ==> i =4,key = 23, j =3
        07  12  56  65 | 65 09 ==> i =4,key = 23, j =3
        07  12  56  56 | 65 09 ==> i =3,key = 23, j =2
        07  12  23  56 | 65 09 ==> i =2,key = 23, j =1
        07  12  56  65 | 23 09 ==> 4 th pass Done(i=4)!
        
        
        
        07  12  23  56  65 | 09 ==> i =5,key = 09, j =4
        07  12  23  56  56 | 65 ==> i =4,key = 09, j =3
        07  12  23  23  56 | 65 ==> i =3,key = 09, j =2
        07  12  12  23  56 | 65 ==> i =2,key = 09, j =1
        07  09  12  23  56 | 65 ==> i =1,key = 09, j =0
        07  09  12  23  56 | 65 ==> 4 th pass Done(i=4)!
        
    
    
 */   
     int A[]= {12,56,65,7,23,9};
     int n = 6;
     
    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
     return 0;
}