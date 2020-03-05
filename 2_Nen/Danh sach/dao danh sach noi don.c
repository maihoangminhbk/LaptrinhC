////
////  dao danh sach noi don.c
////  MinhDev
////
////  Created by Hoang Anh on 10/10/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//typedef struct node {
//    int x;
//    struct node* next;
//} node;
//node* head;
//node* last;
//void insert_head () {
//    node* add = NULL;
//    while (1 == 1) {
//        add = (node*) calloc(1, sizeof(node));
//        printf("Nhap gia tri\n");
//        scanf("%d", &(add ->x));
//        while(getchar() != '\n');
//        if (add ->x == 0) break;
//        if (head == NULL) {
//            head = add;
//            last = add;
//        } else {
//            add ->next = head;
//            head = add;
//        }
//    }
//}
//void Output (node* first) {
//    node* select = NULL;
//    select = first;
//    while (select != NULL) {
//        printf("gia tri cua la %d\n", select ->x);
//        select = select ->next;
//    }
//}
//void change(){
//    node* cur = NULL;
//    node* prev = NULL;
//    cur = last;
//    while(cur != head){
//        prev = head;
//        while(prev -> next != cur){
//            prev = prev -> next;
//        }
//        cur -> next = prev;
//        cur = prev;
//    }
//    head -> next = NULL;
//    head = last;
//    last = cur;
//}
//int main(){
//    int n = 1;
//    while(n != 0){
//        printf("Menu\n");
//        printf("1. INPUT\n");
//        printf("2.OUTPUT\n");
//        printf("3.CHANGE\n");
//        printf("Nhap thao tac\n");
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        switch (n) {
//            case 1:
//                insert_head();
//                break;
//            case 2:
//                Output(head);
//                break;
//            case 3:
//                change();
//                break;
//            default: n = 0;
//                break;
//        }
//    }
//}

