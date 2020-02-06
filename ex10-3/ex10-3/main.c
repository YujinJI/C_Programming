//
//  main.c
//  ex10-3
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//
//ex10-3
#include <stdio.h>

int array_equal(int a[],int b[],int size)
{
    int i,count=0;
    
    for(i=0;i<size;i++)
    {
        if(a[i]==b[i])
            count++;
    }
    if(count==10)
        return 1;   //두개의 배열이 같으면 1을 반환
    else
        return 0;
}
int main(void)
{
    int result;

    int a[10] = {1, 2, 3, 0, 0, 0, 0, 0, 0, 0};
    int b[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ",b[i]);
    printf("\n");

    result = array_equal(a, b, 10);
    
    if(result==1){
        printf("2개의 배열은 같음\n");
    }
    else
    {
        printf("2개의 배열은 다름\n");
    }
}
