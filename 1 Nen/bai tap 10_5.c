////
////  bai tap 10_5.c
////  MinhDev
////
////  Created by Hoang Anh on 5/11/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "time.h"
//void hamsapxep(int a[], int n)
//{
//    for(int i = 0; i < n-1; i++)
//        for(int j = i + 1; j < n; j ++)
//        {
//            if(a[i] < a[j])
//            {
//                int tg = a[i];
//                a[i] = a[j];
//                a[j] = tg;
//            }
//
//        }
//}
//void hamdemchuoicon(int a[], int n)
//{
//    int dem = 0, dodaichuoi = 0;
//    for(int i = 0; i < n; i++)
//    {
//        if(a[i] == 0)
//            dem++;
//        else dem = 0;
//        if(dodaichuoi < dem) dodaichuoi = dem;
//    }
//    printf("Do dai chuoi 0 lon nhat la %d",dodaichuoi);
//}
//void hamdemsophantu(int a[], int n)
//{
//    int dem = 1;
//    hamsapxep(a, n);
//    for(int i = 0; i < n ; i++)
//    {
//        if(a[i + 1] == a[i])
//        {
//            dem ++;
//        }
//        else {printf("so phan tu %d la %d\n",a[i], dem); dem = 1;}
//    }
//}
//void main()
//{
//    int a[10], demso0 = 0;
//    srand(time(NULL));
//    for(int i = 0; i < 10; i++)
//    {
//        a[i] = rand()%5;
//    }
//    for(int i = 0; i < 10; i++)
//    printf("%d\n",a[i]);
//    /* tim so lan xuat hien so 0 */
//    for(int i = 0; i < 10; i++)
//        if(a[i] == 0) demso0 ++;
//    //printf("So so 0 trong a la %d", demso0);
//    //hamdemchuoicon(a, 10);
//    hamdemsophantu(a, 10);
//
//}

