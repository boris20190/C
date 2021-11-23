#include<stdio.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]) {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==min) {
            count++;
        }
    }
    printf("Number of min element:\n");
    printf("%d\n",count);
    return 0;
}