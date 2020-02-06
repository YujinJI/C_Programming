//
//  main.c
//  ex6-8
//
//  Created by mac on 2019. 10. 7..
//  Copyright © 2019년 size. All rights reserved.
//
//ex6-8
#include <stdio.h>

int main(void) {
    int time,age;
    
    printf("현재 시간과 나이를 입력하시오(시간, 나이):");    //시간과 나이를 입력받는다
    scanf("%d %d",&time,&age);
    
    if(time < 17)   //17시 이전 시간대의 요금조건을 알아본다
    {
        if ((age > 12) && (age < 65))
            printf("요금은 34000입니다\n");
        if (((age >= 3) && (age <= 12)) || (age >= 65))
            printf("요금은 25000입니다\n");
    }
    if(time >= 17)  //17시 이후 시간대의 요금을 출력한다
        printf("요금은 10000입니다\n");
    return 0;
}
