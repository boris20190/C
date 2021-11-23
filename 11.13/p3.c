#include<stdio.h>
#define N 10

void delete_nullNum(int arr[],int len);

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
    delete_nullNum(arr,N);
    return 0;
}

void delete_nullNum(int arr[],int len) {
    int n = len;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            n--;
            int j;
            for (j = i; j+1 < len; j++)
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