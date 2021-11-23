#include<stdio.h>

int main() {
    int arr[10];
    for (int i = 0; i<10; i++)
    {   
        scanf("%d",&arr[i]);
    }
    int *min;
    int *max;
    min = &arr[0];
    max = &arr[0];
    for (int i = 0; i < 10; i++)
    {
        min = *min>arr[i]?&arr[i]:min;
        max = *max<=arr[i]?&arr[i]:max;
    }
    if(max<min) {
        int *temp;
        temp = max;
        max = min;
        min = temp;
    }
    int sum = 0;
    do
    {
        sum += *(++min);
    } while (min+1!=max);
    printf("sum = %d\n",sum);
    return 0;
}