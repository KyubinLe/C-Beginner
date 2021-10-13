#include <stdlib.h>
#include <stdio.h>

int main(void){
    int arr1[5]={1,2,3,4,5};
    int arr2[ ] ={1,2,3,4,5,6,7};
    int arr3[5]={1,2};
    int arr1len, arr2len, arr3len, i;

    printf("arr1의 크기: %d \n", sizeof(arr1));

    arr1len = sizeof(arr1) / sizeof(int);
    arr2len = sizeof(arr2) / sizeof(int);
    arr3len = sizeof(arr3) / sizeof(int);

    for(i=0; i<arr1len; i++)
    printf("%d ", arr1[i]);
    printf("\n");

    for(i=0; i<arr2len; i++)
    printf("%d ", arr2[i]);
    printf("\n");

    for(i=0; i<arr2len; i++)
    printf("%d ", arr2[i]);
    printf("\n");
}