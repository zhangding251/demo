/*************************************************************************
	> File Name: arr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月12日 星期二 13时59分07秒
 ******************/


#include<stdio.h>
int *GAT(int,int);
int main()
{
    int numb = 1;
    int numb2 = 2;
    printf("%d",*GAT(numb,numb2));
}

int *GAT(int numb,int numb2)
 {
     int i = 1;
     static int r;
     r = numb+numb2+i;
     return &r;
 }
