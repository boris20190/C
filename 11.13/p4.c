#include<stdio.h>
#define N 10

void even_num(int arr[],int len);

int main() {
    int arr[N];
    printf("Put in 10 numbers:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("All numbers in array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    even_num(arr,N);
    return 0;
}

void even_num(int arr[],int len) {
    printf("Even number\n");
    int even_arr[len];
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if(arr[i]%2==0) {
            even_arr[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ",even_arr[i]);
    }
    printf("\n");
    return;
}