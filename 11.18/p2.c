#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* delete_same(char *arr);

int main() {
    char *arr;
    arr = (char*)malloc(sizeof(char)*100);
    printf("Enter elements of string:\n");
    scanf("%s",arr);
    char* arr2;
    arr2 = delete_same(arr);
    printf("%s\n",arr2);
    free(arr2);
    return 0;
}

char* delete_same(char *arr) {
    char *new_arr;
    new_arr = (char*)malloc(sizeof(arr));
    new_arr[0] = arr[0];
    for (int i=0; arr[i]; i++)
    {   
        int flag = 1;
        int j = 0;
        for (j; new_arr[j]; j++)
        {
            if(new_arr[j]==arr[i]) {
                flag = 0;
            }
        }
        if(flag) {
            new_arr[j] = arr[i];
        }
    }
    free(arr);
    return new_arr;
}