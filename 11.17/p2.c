// Created by xun on 2021/11/17
#include <stdio.h>
#include <string.h>

int find(const char* st1,const char* st2);

int main(){
    char st1[]="asdagshjk";
    char st2[]="dag";
    printf("%d\n",find(st1,st2));
    return 0;
}

int find(const char* st1,const char* st2){
    int len1,len2,flag,i,j;
    len1=strlen(st1);
    len2=strlen(st2);
    if(len1<len2)
        return -1;
    for (i=0;i<len1-len2+1;i++)
    {
        flag=1;
        for(j=0;j<len2 && flag;j++){
            if(st1[i+j]!=st2[j])
                flag=0;
        }
            if(flag)
                return i;
    }
    return -1;
}