#include<stdio.h>

int main() {
    printf("Min number of a b c\n");
    int a,b,c,z;
    printf("Enter a b c:\n");
    scanf("%d%d%d",&a,&b,&c);
    z = a < b ? a < c ? a : c : b > c ? c : b;
    printf("%d\n",z);
    return 0;
}