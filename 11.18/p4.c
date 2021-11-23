#include<stdio.h>
//十个数向右循环移动n位
int main() {
    int len;
    printf("Enter size of array:\n");
    scanf("%d",&len);
    printf("Enter %d number of array:\n",len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Move n 位：\n");
    int n;
    scanf("%d",&n);
    int temp = arr[len-1];
    for (int i = len-1; i >= 0; i--)
    {
        arr[(i+n)%len] = arr[i];
    }
    arr[(len-1+n)%len] = temp;
    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}