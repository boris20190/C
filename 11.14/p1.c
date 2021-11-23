#include<stdio.h>
#include<stdlib.h>

int main() {
    int *arr,n;
    printf("Enter size of array n = ");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array show:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Delete the last number:\n");
    int *new_arr;
    new_arr = (int*)malloc(sizeof(int)*(n-1));
    for (int i = 0; i < n-1; i++)
    {
        new_arr[i] = arr[i];
    }
    free(arr);
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",new_arr[i]);
    }
    free(new_arr);
    printf("\n");
    return 0;
}