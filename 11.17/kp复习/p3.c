#include<stdio.h>
#include<stdlib.h>

typedef struct str
{
    char str[256];
} str;

int main() {
    printf("Enter number of string n = ");
    int n;
    scanf("%d",&n);
    str arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s",arr[i].str);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",arr[i].str); 
    }
    return 0;
}