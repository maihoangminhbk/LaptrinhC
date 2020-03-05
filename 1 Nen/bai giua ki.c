////
////  bai giua ki.c
////  MinhDev
////
////  Created by Hoang Anh on 3/26/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include "stdbool.h"
//
//int main()
//{
//    int x, diemban = 0, diemmay = 0;
//    bool ketthuc = false;
//    do
//    {
//        ///////// Value of human
//        do
//        {
//            printf("Nhap vao 3 so 0,1 hoac 2 (tuong ung keo - bua - bao):");
//            scanf("%d",&x);
//        }
//        while(x != 0 && x != 1 && x != 2);
//        if(x == 0) printf("ban ra keo\n");
//        if(x == 1) printf("ban ra bua\n");
//        if(x == 2) printf("ban ra bao\n");
//        
//        ///////////////// Value of computer
//        srand((unsigned) time(NULL));
//        int y = rand() % 3;
//        if(y == 0) printf("may ra keo\n");
//        if(y == 1) printf("may ra bua\n");
//        if(y == 2) printf("may ra bao\n");
//        
//        ///////////////// Compare
//        if((x == 0 && y == 1) || (x == 1 && y == 2) || (x == 2 && y == 0) )
//        {
//            printf("ban thua roi:))\n");
//            ketthuc = true;
//        }
//        else if(x == y) printf("Hoa roi\n");
//        else
//        {
//                printf("Ban thang roi, tiep tuc nhe :-D\n");
//                diemban ++;
//        }
//    }
//    while(ketthuc);
//    printf("so diem cua ban la %d\n", diemban);
//    return 0;
//}
//
//
