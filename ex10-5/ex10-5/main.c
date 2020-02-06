//
//  main.c
//  ex10-5
//
//  Created by mac on 2019. 11. 8..
//  Copyright © 2019년 size. All rights reserved.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
////int main(void) {
////    int num[10] = {0};
////    int max, i, save=0;
////    srand((unsigned)time(NULL));
////
////    for(i=0;i<100;i++)
////    {
////        save = rand()%100;
////        num[save]++;
////    }
////    max = num[0];
////    for(i=0;i<10;i++)
////    {
////        if(max > num[i])
////            max = num[i];
////    }
////
////    printf("가장 많이 나온 수 : %d\n",i);
////    return 0;
////}
//int main(void)
//{
//    int num[10] = {0};
//    int max, i;
//
//    for(i=0;i<100;i++)
//        ++num[rand()%9];
//
//    max = num[0];
//    for(i=0;i<10;i++)
//    {
//        if(max < num[i]){
//            max = num[i];
//        }
//    }
//    for(i=0;i<10;i++)
//    {
//        if(num[i]==max)
//            break;
//    }
//    printf("수 빈도\n");
//    for(i=0;i<10;i++)
//        printf("%d %d\n",i+1,num[i]);
//    printf("가장 많이 나온 수: %d\n",i);
//    printf("생성 횟수: %d\n",max);
//}
//ex10-5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int num[10] = {0};  //모든 요소가 0으로 초기화
    int max, i ,save=0;
    srand((unsigned)time(NULL));
    
    for(i=0;i<100;i++)
    {
        save=rand()%10;
        num[save]++;
    }
    max=num[0];
    for(i=0;i<10;i++)
    {
        if(max<num[i])
            max=num[i]; //최댓값 구하기
    }
    for(i=0;i<10;i++)
    {
        if(num[i]==max)
            break;
    }
    printf("가장 많이 나온수 : %d\n",i);
}

