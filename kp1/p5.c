#include<stdio.h>

int main() {
    int a;
    printf("Enter the target number:\n");
    scanf("%d",&a);
    int count = 0;
    if(a==0) {
        printf("1\n");
        return 0;
    }
    while (a!=0)
    {
        a /= 10;
        count++;
    }
    printf("%d\n",count);
    return 0;
}