#include<stdio.h>

void insertion_sort(int arr[], int len);

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
    insertion_sort(arr,n);
    printf("Arrange from largest to smallest:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}