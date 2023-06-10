void slectionSort(int a[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }
    printf("\n");  
}

int main() {
    // Write C code here
     int n = 5;
    int a[] = {1, 9, 5, 3, 7};
    slectionSort(a, 5);
    printArray(a, 5);
return 0;
}
