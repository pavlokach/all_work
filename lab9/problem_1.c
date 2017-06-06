#include <stdio.h>
#include <stdlib.h>

int* multiply(int* arr, int n){
    int* arr1 = (int*) malloc(sizeof(arr)*n);
    for (int i=0; i<n; i++){
        arr1[i] = arr[i] * 2;
    }
    return arr1;
}
void parse(int* arr, int n, int* newN);

int main(){
    int n;
    scanf("%d", &n);
    int* arr;
    arr = (int*) malloc(sizeof(int)*n);
    for (int i=0; i<n; i++){
        scanf("%d", arr+i);
    }
    int* arr1 = multiply(arr, n);
    for (int i=0; i<n; i++){
        printf("%d\n", arr1[i]);
    }
    int* arrClear;
    int nClear;
    
    parse(arr, n, &nClear);
}

void parse(int* arr, int n, int* newN){
    int j = 0;
    for (int i=0; i<n; i++){
        if (arr[i] >= 0) {
            j++;
        }
    }
     *newN = j;
    j = 0;
    int* newArr = (int *)calloc(j, sizeof(int));
    for (int i=0; i<n; i++){
        if (*(arr + 1) >= 0){
            *(newArr + j) = *(arr+i);
            printf("&d\n", *(newArr + j));
            j++;
        }
    
    }
    
    
}