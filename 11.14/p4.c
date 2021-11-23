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
    int count = 0;
    printf("Array show:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
        if (arr[i]%2==0)
        {
            count++;
        }
        
    }
    printf("\n");
    printf("Even number\n");
    int *new_arr;
    new_arr = (int*)malloc(sizeof(int)*count);
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]%2==0)
        {
            new_arr[i++] = arr[j];
        }
    }
    free(arr);
    for (int i = 0; i < count; i++)
    {
        printf("%d ",new_arr[i]);
    }
    free(new_arr);
    printf("\n");
    return 0;
}