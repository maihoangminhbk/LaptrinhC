////
////  bai tap 10_4.c
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
//     for(int j = 0; j < n; j ++)
//         printf("%d\n",a[j]);
//}
//void hamsapxeple(int a[], int n)
//{
//    for(int i = 0; i < n-1; i++)
//        for(int j = 1 + i; j < n; j ++)
//        {
//            if((a[i] % 2 == 1) && (a[j] % 2 == 1) &&((a[i] < a[j])))
//            {
//                int tg = a[i];
//                a[i] = a[j];
//                a[j] = tg;
//            }
//        }
//    for(int j = 0; j < n; j++)
//    {if((a[j] % 2 == 1))
//        printf("%d\n",a[j]);
//        }
//}
//void main()
//{
//    int a[10];
//    srand(time(NULL));
//    for(int i = 0; i < 5; i++)
//    {
//        a[i] = rand()%10;
//    }
//    for(int i = 0; i < 5; i++)
//        printf("%d\n",a[i]);
//    hamsapxep(a, 5);
//    hamsapxeple(a, 5);
//
//}
//
