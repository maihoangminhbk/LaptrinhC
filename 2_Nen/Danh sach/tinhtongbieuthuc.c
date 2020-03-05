////
////  tinhtongbieuthuc.c
////  MinhDev
////
////  Created by Hoang Anh on 10/17/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "string.h"
//typedef struct node{
//    int chiso;
//    int somu;
//    struct node *next;
//} node;
////node* head = NULL;
////node* tail = NULL;
//void Insert(node** head, node** tail, int chiso, int somu){
//    node* newnode = NULL;
//    newnode = (node*) calloc(1, sizeof(node));
//    newnode ->somu = somu;
//    newnode -> chiso = chiso;
//    if(*tail == NULL){
//        *head = newnode;
//        *tail = newnode;
//    } else{
//        (*tail) ->next = newnode;
//        *tail = newnode;
//    }
//    newnode -> next = NULL;
//}
//
//
//node* hamtinhtong(node *head1, node* head2){
//    node* ketqua_dau = NULL;
//    node* ketqua_duoi = NULL;
//    node* first1 = head1;
//    node* first2 = head2;
//    while((first1 != NULL) && (first2 != NULL)){
//        if((first1 ->somu) < (first2 ->somu)){
//            Insert(&ketqua_dau, &ketqua_duoi, first1 ->chiso, first1 ->somu);
//            first1 = first1 -> next;
//        } else{
//            if((first1 ->somu) > (first2 -> somu)){
//                Insert(&ketqua_dau, &ketqua_duoi, first2 ->chiso, first2 ->somu);
//                first2 = first2 -> next;
//            } else{
//                Insert(&ketqua_dau, &ketqua_duoi, first2 ->chiso + first1 ->chiso, first1 ->somu);
//                first2 = first2 -> next;
//                first1 = first1 -> next;
//            }
//        }
//    }
//    while(first2 != NULL){
//        Insert(&ketqua_dau, &ketqua_duoi, first2 ->chiso, first2 ->somu);
//        first2 = first2 -> next;
//
//    }
//    while(first1 != NULL){
//        Insert(&ketqua_dau, &ketqua_duoi, first1 ->chiso, first1 ->somu);
//        first1 = first1 -> next;
//
//    }
//    return ketqua_dau;
//}
//void output(node *head){
//    node *el = NULL;
//    el = head;
//    while(el != NULL){
//        printf("chi so - so mu la %d %d\t", el ->chiso, el ->somu);
//        el = el -> next;
//    }
//    printf("\n");
//}
//int main(){
//    //int check = 1;
//    node *head1 = NULL;
//    node *tail1 = NULL;
//    node *head2 = NULL;
//    node *tail2 = NULL;
//    while(1 == 1){
//        int x, y;
//        printf("Nhap vao day 1... chi so - so mu\n");
//        scanf("%d %d", &x, &y);
//        while(getchar() != '\n');
//        if(x == 0) break;
//        Insert(&head1, &tail1, x, y);
//    }
//    while(1 == 1){
//        int x, y;
//        printf("Nhap vao day 2... chi so - so mu 2\n");
//        scanf("%d %d", &x, &y);
//        while(getchar() != '\n');
//        if(x == 0) break;
//        Insert(&head2, &tail2, x, y);
//
//
//    }
//    output(head1);
//    output(head2);
//    output(hamtinhtong(head1, head2));
//      return 0;
//}
//
