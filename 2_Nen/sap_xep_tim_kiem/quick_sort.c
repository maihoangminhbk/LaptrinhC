////
////  quick_sort.c
////  MinhDev
////
////  Created by Hoang Anh on 12/4/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int tim_thang_giua(int* input, int start, int stop){
//    int copy[10];
//    for(int i = start; i <= stop; i++){
//        copy[i] = input[i];
//    }
//    int lay_ra = input[(start + stop) / 2];
//    int vi_tri_ra = start;
//    for(int i = start; i < stop; i++){
//        if(copy[i] < lay_ra){
//            input[vi_tri_ra] = copy[i];
//            vi_tri_ra++;
//        }
//    }
//    input[vi_tri_ra] = lay_ra;
//    int j = vi_tri_ra + 1;
//    for(int i = start; i <= stop; i++){
//        if(copy[i] >= lay_ra){
//            input[j] = copy[i];
//            j++;
//        }
//    }
//    return vi_tri_ra;
//}
//
//void quick_sort(int* input, int start, int stop){
//    if(start < stop){
//        int vi_tri_lay_ra = tim_thang_giua(input, start, stop);
//        //printf("%d\t",vi_tri_lay_ra);
//        quick_sort(input, start, vi_tri_lay_ra - 1);
//        quick_sort(input, vi_tri_lay_ra + 1, stop);
//    }
//}
//
//void print(int* input){
//    printf("gia tri la:\n");
//    for(int i = 0; i < 10; i++){
//        printf("%d\t", input[i]);
//
//    }
//}
//
//int main(){
//    srand((int) time(0));
//        int r;
//        int input[10];
//        for(int i = 0; i < 10; i++){
//            r = rand()%10;
//            input[i] = r;
//        }
//    print(input);
//    quick_sort(input, 0, 9);
//    print(input);
//}

