#include<stdio.h>

void bubbleSort(int arr[], int len);

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    printf("Arrange from largest to smallest:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int arr[], int len) {
    int fl = 1;
    for (int i = 0; fl; i++)
    {
        fl = 0;
        for (int j = len-1; j > i; j++)
        {
            if(arr[j-1]>arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                fl = 1;
            }
        }
    }
}