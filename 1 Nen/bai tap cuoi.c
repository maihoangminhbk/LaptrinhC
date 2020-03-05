////
////  bai tap cuoi.c
////  MinhDev
////
////  Created by Hoang Anh on 4/22/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//
//void nhapdiem(float diem[], int n)
//{
//    for(int i = 0; i < n - 1; i++)
//        for(int j = i + 1; j < n; j++)
//        {
//            if(diem[i] > diem[j])
//            {
//                int tg = diem[i];
//                diem[i] = diem[j];
//                diem[j] = tg;
//            }
//        }
//}
//void diembinhquan(float diem[], int n)
//{
//    float tong = 0;
//    for(int i = 1; i < n  - 1;i++)
//        tong += diem[i];
//    tong = tong / 3;
//    printf("%f",tong);
//}
//void main()
//{
//    float diem[5];
//    printf("Nhap diem ban giam khao");
//    for(int i = 0; i < 5;i++)
//        scanf("%f",&diem[i]);
//    nhapdiem(diem, 5);
//    diembinhquan(diem, 5);
//    
//}

