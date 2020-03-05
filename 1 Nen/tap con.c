////
////  tap con.c
////  MinhDev
////
////  Created by Hoang Anh on 3/20/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define MAX 100
//int n, k, count, C[MAX], Stop;
//void Init(void){
//    int i;
//    printf("\n Nhap n="); scanf("%d", &n);
//    printf("\n Nhap k="); scanf("%d", &k);
//    for (i = 1; i <= k; i++)
//        C[i] = i;
//}
//void Result(void){
//    int i; count++;
//    printf("\n Tap con thu %d:", count);
//    for (i = 1; i <= k; i++)
//        printf("%3d", C[i]);
//}
//void Next_Combination(void){
//    int i, j;
//    i = k;
//    while (i > 0 && C[i] == n - k + i)
//        i--;
//    if (i > 0) {
//        C[i] = C[i] + 1;
//        for (j = i + 1; j <= k; j++)
//            C[j] = C[i] + j - i;
//    }
//    else Stop = TRUE;
//}
//void Combination(void){
//    Stop = FALSE;
//    while (!Stop){
//        //Result();
//        Next_Combination();
//    }
//}
//int main(void){
//    Init();
//    //Combination();
//    return 0;
//}
//
