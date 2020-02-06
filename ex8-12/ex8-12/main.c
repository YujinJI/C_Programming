//
//  main.c
//  ex8-12
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-12
#include <stdio.h>

int print_value(int n){
    for(int i=1;i<=n;i++)
        printf("*");    //n의 개수만큼 별을 출력한다.
    printf("\n");
    return 0;
}
int main(void) {
    int num;
    do{
        
    printf("값을 입력하세요(종료는 음수):");
    scanf("%d",&num);
    
    print_value(num);
    if(num<0)
        break;  //num값이 음수이면 종료한다.
    }
    while(1);{
        
    }
    return 0;
}
