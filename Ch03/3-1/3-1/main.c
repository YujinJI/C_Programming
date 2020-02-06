//
//  main.c
//  3-1
//
//  Created by mac on 2019. 9. 16..
//  Copyright © 2019년 size. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float x;        // 첫번째 실수를 저장할 변수
    float y;        // 두번째 실수를 저장할 변수
    float z;        // 세번째 실수를 저장할 변수
    float sum;      // 3개의 실수의 합을 저장할 변수
    float avg;      // 3개의 실수의 평균을 저장할 변수
    
    printf("실수를 입력하시오: ");      //입력 안내 메시지 출력
    scanf("%f",&x);                //하나의 실수를 받아서 x에 저장
    printf("실수를 입력하시오: ");     //입력 안내 메시지 출력
    scanf("%f",&y);               //하나의 실수를 받아서 x에 저장
    printf("실수를 입력하시오: ");     //입력 안내 메시지 출력
    scanf("%f",&z);               //하나의 실수를 받아서 x에 저장
    
    sum = x + y + z;            // 변수 3개를 더한다
    avg = sum / 3.0;            // 변수 3개의 평균을 구한다
    
    printf("합은 %f이고 평균은 %f입니다.\n",sum,avg);     // 출력
    return 0;
}
