#include <stdio.h>

void bubblesort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]){
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
}
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);  
    }
    printf("\n");  
}

int main() {
    int n = 5;
    int a[] = {1, 9, 5, 3, 7};
    bubblesort(a, 5);
    printArray(a, 5);

    return 0;
}
