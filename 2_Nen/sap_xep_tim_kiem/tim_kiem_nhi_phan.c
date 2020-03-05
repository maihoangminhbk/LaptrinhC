////
////  tim_kiem_nhi_phan.c
////  MinhDev
////
////  Created by Hoang Anh on 10/18/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//int input(int x[]){
//    printf("Nhap so gia tri can nhap\n");
//    int n;
//    scanf("%d", &n);
//    while(getchar() != '\n');
//    for(int i = 0; i < n; i++){
//        printf("Nhap gia tri thu %d\n", i + 1);
//        scanf("%d", &x[i]);
//        while(getchar() != '\n');
//    }
//    return n;
//}
//void sapxep(int x[], int n){
//    for(int i = 0; i < n - 1; i++){
//        for(int j = i + 1; j < n; j++){
//            if(x[i] > x[j]) {
//                int trunggian = x[i];
//                x[i] = x[j];
//                x[j] = trunggian;
//            }
//        }
//    }
//    for(int i = 0; i < n; i++){
//        printf("phan tu thu %d la\t", i + 1);
//        printf("%d\n",x[i]);
//    }
//}
//int timkiemnhiphan(int x[], int dau, int duoi, int socannhap){
//    int giua;
//    if(dau == duoi){
//        printf("khong tim duoc so\n");
//        exit(0);
//    }
//    giua = (dau + duoi) / 2;
//    if(giua > socannhap){
//        timkiemnhiphan(x, dau, giua - 1, socannhap);
//    } else{
//        if(giua == socannhap){
//            printf("tim duoc so can nhap\n");
//            printf("%d\n", giua);
//            exit(giua);
//        } else{
//            timkiemnhiphan(x, giua + 1, duoi, socannhap);
//        }
//    }
//    return 0;
//}
//int main(){
//    int x[30];
//    int n = input(x);
//    sapxep(x, n);
//    printf("Nhap vao so can nhap\n");
//    int socannhap;
//    scanf("%d", &socannhap);
//    printf("so can nhap o vi tri la %d\n",timkiemnhiphan(x, 0, n - 1, socannhap));
//}

