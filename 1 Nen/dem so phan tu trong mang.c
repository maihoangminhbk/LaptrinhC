////
////  dem so phan tu trong mang.c
////  MinhDev
////
////  Created by Hoang Anh on 4/22/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void sapxep(int diem[], int n)
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
//int main()
//{
//    int arr[10], dem = 1;
//    srand((unsigned)time(NULL));
//    for(int i = 0; i < 10; i++)
//        arr[i] = rand() % 10;
//    
//    sapxep(arr, 10);
//    for(int i = 0; i < 10; i++)
//    {
//        printf("%d\n",arr[i]);
//    }
//    for(int i = 0; i < 10; i++)
//    {
//        if(arr[i] == arr[i + 1]) dem ++;
//        if(arr[i] != arr[i + 1])
//        {
//            printf("so ki tu %d la %d\n", arr[i], dem);
//            dem = 1;
//        }
//        
//    }
//}
//
//
