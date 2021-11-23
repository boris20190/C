#include<stdio.h>

int main() {
    int n,count=0;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Change array:\n");
    int new_arr[n];
    new_arr[0] = arr[0];
    count++;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < count; j++)
        {
            if(arr[i]==new_arr[j]) {
                flag = 0;
            }
        }
        if (flag)
        {
            new_arr[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ",new_arr[i]);
    }
    printf("\n");
    return 0;
}
