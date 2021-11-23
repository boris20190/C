#include<stdio.h>
#define N 5

void bubbleSort(int arr[], int len);
void descend(int arr1[], int len1, int arr2[], int len2);

int main() {
    int arr1[N];
    int arr2[N];
    printf("Put in number arr1:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Put in number arr2:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr2[i]);
    }
    descend(arr1,N,arr2,N);
    return 0;
}

void descend(int arr1[], int len1, int arr2[], int len2) {
    int arr3[len1+len2];
    int p = 0;
    int q = 0;
    int i = 0;
    bubbleSort(arr1,len1);
    bubbleSort(arr2,len2);
    while (p<len1 && q<len2)
    {
        arr3[i++] = arr1[p] > arr2[q] ? arr1[p++] : arr2[q++];
    }
    if (p!=len1)
    {
        while (p<len1)
        {
            arr3[i++] = arr1[p++];
        }
    }
    if (q!=len2)
    {
        while (q<len2)
        {
            arr3[i++] = arr2[q++];
        }
    }
    for (int i = 0; i < len1+len2; i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int len) {
    int fl = 1;
    for (int i = 0; fl; i++)
    {   
        fl = 0;
        for (int j = i; j < len; j++)
        {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                fl = 1;
            }
        }   
    }   
}