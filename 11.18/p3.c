#include<stdio.h>

int same(char arr[]);
int main() {
    char arr[100];
    scanf("%s",arr);
    if (same(arr))
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

int same(char arr[]) {
    for (int i = 0; arr[i+1]; i++)
    {
        if(arr[i]==arr[i+1]) {
            return 1;
        }
    }
    return 0;
}