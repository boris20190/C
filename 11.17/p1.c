// Created by xun on 2021/11/16.
//Даны два массива a и b, элементы которых упорядочены по возрастанию. Объединить эти массивы так, чтобы результирующий массив остался упорядоченны
//给定两个数组 a 和 b，它们的元素按升序排列。 连接这些数组，以便生成的数组保持有序

#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int arr[],int len);

int main(){
    int *a;
    a = malloc(sizeof(int)*10);
    int *b;
    b = malloc(sizeof(int)*10);
    for(int i=0;i<10;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    //合并a，b数组，再利用冒泡排序
    int *arr;
    arr = malloc(sizeof(int)*20);
    for(int i=0;i<10;i++){
        arr[i]=a[i];
    }
    free(a);
    for(int i=10;i<20;i++){
        arr[i]=b[i-10];
    }
    free(b);
    bubble_sort(arr,20);
    for(int i=0;i<20;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    printf("\n");
    return 0;
}

void bubble_sort(int arr[],int len){
        int i, j, temp;
        int fl = 1;
        for (i = 1; fl; i++) {
            fl = 0;
            for (j = len - 1; j >= i; --j) {
                if (arr[j - 1] > arr[j]) {
                    fl = 1;
                    temp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }