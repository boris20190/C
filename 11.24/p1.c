#include<stdio.h>

int main() {
    typedef struct stu{
        char name[15];
        int year;
        int mon;
        int day;
        int m[3];
    }stu;
    int n;
    printf("Enter the num of stu\n");
    scanf("%d",&n);
    stu arr[n];
    for(int i = 0; i < n; i++) {
        printf("###################\n");
        printf("Name\n");
        scanf("%s",arr[i].name);
        printf("year\n");
        scanf("%d",&arr[i].year);
        printf("mon\n");
        scanf("%d",&arr[i].mon);
        printf("day\n");
        scanf("%d",&arr[i].day);
        printf("3 score\n");
        scanf("%d%d%d",&arr[i].m[0],&arr[i].m[1],&arr[i].m[2]);
    }
    printf("Show\n*******************\n");
    for(int i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\n",arr[i].name,arr[i].year,arr[i].mon,arr[i].day);
        printf("Score\n");
        printf("%d\t%d\t%d\n",arr[i].m[0],arr[i].m[1],arr[i].m[2]);
        printf("********************\n");
    }
    return 0;
}
