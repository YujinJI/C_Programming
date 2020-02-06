//
//  main.c
//  ex8-11
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex8-11
#include <stdio.h>
#include <stdlib.h>


double f_rand(){
    double num;
    num = rand()/(double)RAND_MAX;
    return num;
}
int main(void) {
    for(int i=1;i<=5;i++)
        printf("%lf ",f_rand());    //난수를 5번 출력한다.
    printf("\n");   //5번 출력이 끝나고 난 다음 줄바꿈을 해준다.
    return 0;
}
