//
//  main.c
//  ex11-5
//
//  Created by mac on 2019. 11. 11..
//  Copyright © 2019년 size. All rights reserved.
//
//ex11-5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void convert(double *grades, double *scores, int size){
    int i;
    for(i=0;i<size;i++){
        grades[i] = (rand()%44) / 10.0;
        scores[i] = grades[i] / 4.3 * 100.0;
        printf("0%.2f ",grades[i]);     //소수 2째자리까지 출력한다.
    }
    printf("\n");
    for(i=0;i<size;i++)
        printf("%.2f ",scores[i]);      //소수 2째자리까지 출력한다.
    printf("\n");
}
int main(void) {
    double grades[SIZE];    //크기가10인 grades배열
    double scores[SIZE];    //크기가10인 scores배열
    srand((unsigned)time(NULL));
    
    convert(grades, scores, SIZE);
    return 0;
}
