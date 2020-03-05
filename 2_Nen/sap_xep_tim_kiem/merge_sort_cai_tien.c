////
////  merge_sort_cai_tien.c
////  MinhDev
////
////  Created by Hoang Anh on 12/6/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void Merge(int u[], int v[], int e[], int n, int m){
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    while(k < n + m){
//        if(i > m) {e[k] = v[j]; j++;}
//        if(j > n) {e[k] = u[i]; i++;}
//        if(i <= m && j <= n){
//            if(u[i] < v[j]){
//                e[k] = u[i];
//                i++;
//            } else{
//                e[k] = v[j];
//                j++;
//            }
//        }
//        k++;
//    }
//}
//
//
//void merge_sort(int* input, int start, int stop){
//    if(start < stop){
//        int mid = (start + stop) / 2;
//        int copy_1[mid - start + 1];
//        for(int i = start; i <= mid;i++){
//            
//        }
//        
//        merge_sort(input, <#int start#>, <#int stop#>);
//    }
//}
//
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
//    print_array(input);
//}
//
//
//
