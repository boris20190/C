#include<stdio.h>
#define N 10

void delete_minNum(int arr[], int len);

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
    delete_minNum(arr,N);
    return 0;
}

void delete_minNum(int arr[], int len) {
    int min = arr[0];
    for (int i = 0; i < len; i++)
    {
        if(min>arr[i]) {
            min = arr[i];
        }
    }
    int n = len;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==min) {
            n--;
            for (int j = i; j+1 < len; j++)
            {
                arr[j] = arr[j+1];
            }
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}