////
////  bai tap 9_14.c
////  MinhDev
////
////  Created by Hoang Anh on 5/11/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//void getJudgedata(int *x)
//{
//    do
//    {
//        printf("Nhap vao diem giam khao");
//        scanf("%d",x);
//    }
//    while((*x < 0) || (*x > 10));
//}
//double tinhdiem(int a[], int n)
//{
//    int max = a[0], min = a[0];
//    for(int i = 1; i < n; i++)
//    {
//    if (max < a[i]) max = a[i];
//    if (min > a[i]) min = a[i];
//        
//    }
//    double tong = 0.0;
//    for(int i = 0; i < n; i++)
//        tong += (double)a[i];
//    tong = (double)(tong - max - min) / 3;
//    
//    return tong;
//                        
//}
//void main()
//{
//    int a[5];
//    for(int i = 0; i < 5; i++) getJudgedata(&a[i]);
//    printf("diem trung binh la %fl",tinhdiem(a, 5));
//}

