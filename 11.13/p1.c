#include<stdio.h>
#define N 10

void delete_last(int arr[], int len);
void delete_first(int arr[], int len);

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
    delete_last(arr,N);
    return 0;
}

void delete_last(int arr[], int len) {
    printf("Delete the last number\n");
    int n = len-1;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void delete_first(int arr[], int len) {
    printf("Delete the first number\n");
    int n = len - 1;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
        printf("%d ",arr[i]);
    }
    printf("\n");
}