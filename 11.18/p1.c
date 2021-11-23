#include<stdio.h>

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
    int len1 = 0;
    int len2 = 0;
    int fl1 = 1, fl2 = 1;
    for (int i = 0; i < len-1; i++)
    {   
        if(arr[i]*arr[i+1]>0&&arr[i]>0&&fl1) {
            len1++;
        }
    }
    return 0;
}