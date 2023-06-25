#include <iostream>
#include <stdio.h>

void foo()
{
    int *p=(int *) malloc (sizeof(int));
    return ;
}//memory leak

int main()
{
    int * p=NULL;

    p=(int *)malloc(4*sizeof(int));

    p =(int *)malloc (8*sizeof(int));

    free p;

    //循环1024次、一个T的内存
    for (int i = 0; i < 1024; i++)
    {
        //申请一个G的内存
        p = (int *) malloc (1024*1024*1024);
    }

    printf("End\n");    

    return 0;
}