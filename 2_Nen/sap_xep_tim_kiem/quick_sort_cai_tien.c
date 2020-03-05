////
////  quick_sort_cai_tien.c
////  MinhDev
////
////  Created by Hoang Anh on 12/6/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void swap(int *a, int* b){
//    int trunggian;
//    trunggian = *a;
//    *a = *b;
//    *b = trunggian;
//}
//
//void quick_sort(int* input, int start, int stop){
//    int output, i = 0, j = 0;
//    if(start < stop){
//        i = start;
//        j = stop + 1;
//        output = input[start];
//        do{
//            do i++; while(input[i] < output);
//            do j--; while(input[j] > output);
//            if(i < j) swap(&input[i], &input[j]);
//        } while(i < j);
//
//        swap(&input[start], &input[j]);
//        quick_sort(input, start, j - 1);
//        quick_sort(input, j + 1, stop);
//    }
//
//}
//
//void print_array(int *input){
//    for(int i = 0; i < 10; i++){
//        printf("%d\t", input[i]);
//        //        printf("\n");
//    }
//    printf("\n");
//}
//
//int main(){
//    int input[10];
//    srand((int) time(0));
//    for(int i = 0; i < 10; i++){
//        //        srand((int) time(0));
//        input[i] = rand()%10;
//    }
//    print_array(input);
//    quick_sort(input, 0, 9);
//    print_array(input);
//}
//
//
