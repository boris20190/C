#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (max<array[i])
        {
            max = array[i];
        }
    }
    int *temp;
    temp = (int*)malloc(sizeof(int)*(max+1));
    for (int i = 0; i < max+1; i++)
    {
        temp[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        temp[array[i]]++;
    }
    int imax = 0;
    for (int i = 0; i < max+1; i++)
    {
        if(temp[imax]<temp[i]) {
            imax = i;
        }
    }
    printf("most:\n");
    printf("%d\n",imax);
    return 0;
}