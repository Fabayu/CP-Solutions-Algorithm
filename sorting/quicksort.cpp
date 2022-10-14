#include <stdio.h> 
void swap (int *a, int *b) { 
    int t *a; 
    *a = *b; 
    *b= t; 
} 
int partition (int a[], int i, int h) { 
    int pivot= a [h]; 
    int i = (l-1); 
    for (int j= l; j<h; j++) { 
        if (a[j] <= pivot) { 
            i++; 
            Swap(a[ i ],a[ j ]); 
            } 
        } 
        Swap (a[i+1], a [h]); 
        return (i+1); 
        } 
void rquicksort (int a[], int i, int h) { 
    if (l<h){ 
        int pivot = partition (a, l, h); 
        rquickSort (a, l, pivot-1); 
        rquicksort ( a, pivot +1, h);
    }
}  
void printArray (int a[], int n) { 
    for (int i=0; i<n;i++){ 
        printf("%d", a[i]); 
    }
        printf("\n");
}
int main(){ 
    int n; 
    printf("Enter size: "); 
    scanf("%d", &n); 
    printf("Enter array elements: "); 
    int a[n]; 
    for (int i=0; i<n; i++) { 
        Scanf("%d", &a[i]); 
     }
    printf("Unsorted Array In "); 
    print Array (a, n); 
    rquickSort (a, 0, n-1); 
    printf ("Sorted array \n"); 
    printArray (a,n); 
    return 0; 
}