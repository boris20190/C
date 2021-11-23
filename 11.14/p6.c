#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[], int len);

int main() {
    int *arr1,n1;
    int *arr2,n2;
    printf("Enter size of array1 n1 = ");
    scanf("%d",&n1);
    arr1 = (int*)malloc(sizeof(int)*n1);
    printf("\nEnter size of array2 n2 = ");
    scanf("%d",&n2);
    arr2 = (int*)malloc(sizeof(int)*n2);
    printf("\nEnter elements of array1:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter elements of array2:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Descend sort\n");
    bubbleSort(arr1,n1);
    bubbleSort(arr2,n2);
    int *arr3;
    arr3 = (int*)malloc(sizeof(int)*(n1+n2));
    int p = 0;
    int q = 0;
    int i = 0;
    while (p<n1 && q<n2)
    {
        arr3[i++] = arr1[p] > arr2[q] ? arr1[p++] : arr2[q++];
    }
    while (p<n1)
    {
        arr3[i++] = arr1[p++];
    }
    while (q<n2)
    {
        arr3[i++] = arr2[q++];
    }
    free(arr1);
    free(arr2);
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",arr3[i]);
    }
    free(arr3);
    printf("\n");
    return 0;
}

void bubbleSort(int arr[], int len) {
    int fl = 1;
    for (int i = 0; fl; i++)
    {   
        fl = 0;
        for (int j = len-1; j >= i; j++)
        {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                fl = 1;
            }
        }   
    }   
}