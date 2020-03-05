////
////  sap_xep_so_sanh.c
////  MinhDev
////
////  Created by Hoang Anh on 11/22/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define max 10
//void insert_sort(int *input){
//    for(int i = 0; i < max - 1; i++){
//        for(int j = i + 1; j < max; j++){
//            if(input[i] > input[j]){
//                int trung_gian = input[i];
//                input[i] = input[j];
//                input[j] = trung_gian;
//            }
//        }
//    }
//}
//
//void print_string(int* input){
//    for(int i = 0; i < max; i++){
//        printf("%d\t", input[i]);
//    }
//    printf("\n");
//}
//
//void make_string(int *input){
//    srand((int)time(0));
//    for(int i = 0; i < max; i++){
//        input[i] = rand()%10;
//    }
//}
//
//typedef struct node{
//    int gia_tri;
//    struct node* left;
//    struct node* right;
//} node;
//
//void vun_dong(int* input, int n){
//    int trung_gian = n / 2 - 1;
//    for(int i = trung_gian; i >= 0; i--){
//        if((input[i] < input[i * 2 + 1]) && (i * 2 + 1) < n)
//        {
//            int trunggian = input[i];
//            input[i] = input[i * 2 + 1];
//            input[i * 2 + 1] = trunggian;
//        }
//        if((input[i] < input[i * 2 + 2]) && (i * 2 + 2) < n)
//        {
//            int trunggian = input[i];
//            input[i] = input[i * 2 + 2];
//            input[i * 2 + 2] = trunggian;
//        }
//    }
//    printf("dau la %d\n", input[0]);
//    //printf("cuoi la %d\n", input[n - 1]);
//    int trunggian = input[n-1];
//    input[n-1] = input[0];
//    input[0] = trunggian;
//
//}
//
//int main(){
//    int mang[max];
//    make_string(mang);
//    print_string(mang);
//    //insert_sort(mang);
//    for(int i = max; i >= 1; i--){
//        vun_dong(mang, i);
//    }
//    print_string(mang);
//
//}
//

