
#include <stdio.h>
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int a[], int low, int high){
    int pivot = a[low];
    int i=low+1;
    int j=high;
    int temp;
do    


{
    while(a[i]<= pivot){
        i++;
    }
    while(a[j]> pivot){
        j--;
    }
    if (i<j){
        temp =a[i];
        a[i]=a[j];
        a[j]= temp;
    }
    }while(i <j);
    temp = a[low];
    a[low]= a[j];
    a[j] = temp;
    return j;
}

void quickSort(int a[], int low, int high) {
  int partionIndex;
  if(low<high){
  partionIndex = partition(a, low, high);
  

 
    quickSort(a, low, partionIndex - 1);
    quickSort(a, partionIndex + 1, high);
  }
}


int main() {
    // Write C code here
int n = 5;
    int a[] = {1, 9, 5, 3, 7};
    quickSort(a,0, n-1);
    printArray(a, n);
    return 0;
}