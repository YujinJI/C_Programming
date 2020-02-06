//
//  main.c
//  ex9-2
//
//  Created by mac on 2019. 11. 3..
//  Copyright © 2019년 size. All rights reserved.
//
//ex9-2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(int num);

int main()
{
    int num=0;
    
    srand((unsigned)time(NULL));
    get_dice_face(num);
}
int get_dice_face(int num)
{
    int i;
    static int count1 = 0;
    static int count2 = 0;
    static int count3 = 0;
    static int count4 = 0;
    static int count5 = 0;
    static int count6 = 0;
    
    for(i=0;i<100;i++)
    {
        num=rand()%6+1;
        if(num==1)
            count1++;
        if(num==2)
            count2++;
        if(num==3)
            count3++;
        if(num==4)
            count4++;
        if(num==5)
            count5++;
        if(num==6)
            count6++;
        if((i+1)%100==0)
            printf("1>%d\n2>%d\n3>%d\n4>%d\n5>%d\n6>%d\n",
                   count1,count2,count3,count4,count5,count6);
    }
    return num;
}
