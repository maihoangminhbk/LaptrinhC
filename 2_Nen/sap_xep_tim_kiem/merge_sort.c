////
////  merge_sort.c
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
//void merge(int* input, int start, int mid, int stop){
//    int copy_1[10];
//    int copy_2[10];
//    for(int i = start; i <= mid; i++){
//        copy_1[i] = input[i];
//    }
//    for(int j = mid + 1; j <= stop; j++){
//        copy_2[j] = input[j];
//    }
//    int i = start;
//    int j = mid + 1;
//    int k = start;
//    while(i <= mid && j <= stop){
//        if(copy_1[i] > copy_2[j]){
//            input[k] = copy_2[j];
//            j++;
//        } else{
//            input[k] = copy_1[i];
//            i++;
//        }
//        k++;
//    }
//    if(k != (stop + 1)){
//        if(i == (mid + 1)){
//            while(j <= stop){
//                input[k] = copy_2[j];
//                j++;
//                k++;
//            }
//        } else{
//            while(i <= mid){
//                input[k] = copy_1[i];
//                i++;
//                k++;
//            }
//        }
//    }
//}
//
//void merge_sort(int* input, int start, int stop){
//    if(start < stop){
//        int mid = (start + stop) / 2;
//        merge_sort(input, start, mid);
//        merge_sort(input, mid + 1, stop);
//        merge(input, start, mid, stop);
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
//int main(){
//    srand((int) time(0));
//    int r;
//    int input[10];
//    for(int i = 0; i < 10; i++){
//        r = rand()%10;
//        input[i] = r;
//    }
//    print(input);
//    merge_sort(input, 0, 9);
//    print(input);
//}

