#include<stdio.h>
 
 int max(int arr[], int len);
 int min(int arr[], int len);
int main() {
    int arr[100],len=0,fl=1;
    for (int i = 0; fl&&i<100; i++)
    {   
        fl = 0;
        scanf("%d",&arr[i]);
        if(arr[i]!=0) {
            len++;
            fl = 1;
        }
    }
    int imax = max(arr,len);
    int imin = min(arr,len);
    printf("max=%d\t",arr[imax]);
    printf("min=%d\n",arr[imin]);
    arr[imin] = arr[imin]^arr[imax];
    arr[imax] = arr[imin]^arr[imax];
    arr[imin] = arr[imin]^arr[imax];
    printf("SWAP\n");
    printf("max=%d\t",arr[imax]);
    printf("min=%d\n",arr[imin]);
    return 0;
}

int max(int arr[], int len) {
    int imax = 0;
    for (int i = 0; i < len; i++)
    {
        imax = arr[imax]<arr[i]?i:imax;
    }
    return imax;
}

int min(int arr[], int len) {
    int imin = 0;
    for (int i = 0; i < len; i++)
    {
        imin = arr[imin]>arr[i]?i:imin;
    }
    return imin;
}
