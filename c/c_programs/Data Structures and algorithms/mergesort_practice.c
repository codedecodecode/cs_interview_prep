#include <stdio.h>
#include <stdlib.h>

void printArr(int A[], int size) {
    int i = 0;
    while(i<size) {
        printf("%d ", A[i]);
        i++;
    }
    printf("\n");
}
void merge(int arr[], int l, int m, int r) {
    
    int i , j, k;
    int n1 = m- l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i = 0; i<n1; i++) 
        L[i] = arr[i+l];

    for(i = 0; i<n2; i++) 
        R[i] = arr[i+m+1];

    printf("L[] :- ");
    for (i = 0;i<n1;i++) {
        printf("%d ", L[i]);
    }
    printf("\n");
    
    printf("R[] :- ");
    for (i = 0;i<n2;i++) {
        printf("%d ", R[i]);
    }
    printf("\n");
    i = 0;
    j = 0;
    k = l;

    printf("merge the sub arrays\n");
    while ( (i < n1) && (j < n2)) {
        printf("i = %d, j = %d, k = %d\n", i, j, k);
        if (L[i] < R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        printf("arr[%d] = %d\n", k, arr[k]);
        k++;
    }
    printf("copy the rest of left sub array i = %d, k = %d, n1 = %d\n", i, k, n1 );
    while (i < n1) {
        arr[k] = L[i];
        printf("copy the rest of left sub array i = %d, k = %d, n1 = %d\n", i, k, n1 );
        k++;
        i++;
    }

    printf("copy the rest of right sub array\n");
    while (j < n2) {
        arr[k] = R[j];
        k++;
        j++;
    }
    printf("After merge function\n");
    printArr(arr, 7);
    printf("completed merge\n");
}
void mergesort (int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l)/ 2;
        printf("call merge sort l = %d, m = %d\n", l,m);
        mergesort(arr, l, m);
        printf("call merge sort m+1 = %d, r = %d\n", m+1,r);
        mergesort(arr, m+1, r);

        printf("call merge l = %d, m = %d, r = %d\n", l,m,r);
        merge(arr, l, m, r);
    }
}


int main (void) {
    int arr[] = {13,12,45,65,2,34,56};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Given Array :- ");
    printArr(arr,size);
    mergesort(arr,0,size - 1);
    printf("Sorted Array :- ");
    printArr(arr,size);
}