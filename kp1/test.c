//004

#include <stdio.h>

void bubble_sort(int arr[], int len);
int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, 10);
    int min;
    min=arr[0];
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]==min){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
void bubble_sort(int arr[], int len) {
    int i, j, temp;
    int fl = 1;
    for (i = 1; fl; i++) {
        fl = 0;
        for (j = len - 1; j >= i; j--) {
            if (arr[j - 1] > arr[j]) {
                fl = 1;
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}