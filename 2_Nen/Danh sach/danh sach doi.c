////
////  danh sach doi.c
////  MinhDev
////
////  Created by Hoang Anh on 10/12/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//typedef struct node{
//    int el;
//    struct node* next;
//    struct node* prev;
//} node;
//node* head = NULL;
//node* tail = NULL;
//void Insert_head(){
//    int check = 1;
//    while(check == 1){
//
//        node* newnode = NULL;
//        newnode = (node*) calloc(1, sizeof(node));
//        printf("nhap vao gia tri\n");
//        scanf("%d", &(newnode ->el));
//        while(getchar() != '\n');
//        if(newnode ->el == 0) break;
//        newnode ->prev =NULL;
//        if(head == NULL){
//            head = newnode;
//            tail = newnode;
//            newnode ->next = NULL;
//        } else{
//            newnode ->next = head;
//            head ->prev = newnode;
//            head = newnode;
//        }
//        printf("Ban muon nhap tiep khong\n");
//        scanf("%d", &check);
//        while(getchar() != '\n');
//    }
//}
//void Insert_prev(){
//    int check = 1;
//    while(check == 1){
//        node* newnode = NULL;
//        node* select = NULL;
//        int n;
//        printf("Nhap vi tri can nhap vao\n");
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        select = head;
//        if(n > 0){
//            for(int i = 0; (i < n) && (select != NULL); i++){
//                select = select -> next;
//            }
//        }
//        if(select == NULL){
//            printf("Ban nhap sai roi\n");
//            break;
//        }
//        newnode = (node*) calloc(1, sizeof(node));
//        printf("nhap vao gia tri\n");
//        scanf("%d", &(newnode ->el));
//        while(getchar() != '\n');
//        if(newnode ->el == 0) break;
//        newnode -> next = select -> next;
//        newnode -> prev = select;
//        if(select != tail){
//            select -> next -> prev = newnode;
//        } else{
//            tail = newnode;
//        }
//        select -> next = newnode;
//        printf("Ban muon nhap tiep khong\n");
//        scanf("%d", &check);
//        while(getchar() != '\n');
//
//    }
//}
//void delete(){
//    int check = 1;
//    while(check == 1){
//        node* select = NULL;
//        int n;
//        printf("Nhap vi tri can xoa\n");
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        select = head;
//        if(n > 0){
//            for(int i = 0; (i < n) && (select != NULL); i++){
//                select = select -> next;
//            }
//        }
//        if(select == NULL){
//            printf("Ban nhap sai roi\n");
//            break;
//        }
//        if(select == head){
//            head = head -> next;
//            head -> prev = NULL;
//        } else {
//        if(select == tail){
//            tail = tail -> prev;
//            tail -> next = NULL;
//        } else {
//            select -> next -> prev = select -> prev;
//            select -> prev -> next = select -> next;
//        }
//        }
//        free(select);
//        printf("Ban muon xoa tiep khong\n");
//        scanf("%d", &check);
//        while(getchar() != '\n');
//
//    }
//}
//void Output(node *first){
//    node* select = NULL;
//    select = first;
//    while(select != NULL){
//        printf("gia tri la %d\n", select -> el);
//        select = select -> next;
//    }
//    printf("head la %d\n, tail la %d\n", head ->el, tail ->el);
//}
//void change(node *x, node* y){
//    node *newnext = NULL;
//    node *newprev =NULL;
//    newnext = y -> next;
//    newprev = y -> prev;
//    // con tro x tro den
//    x -> next -> prev = y;
//    if(x != head){
//        x -> prev -> next = y;
//    }
//    // con tro y tro den
//    y -> next = x -> next;
//    y -> prev = x -> prev;
//
//    newprev -> next = x;
//    x -> prev = newprev;
//    x -> next = newnext;
//    if(y != tail){
//        newnext -> prev = x;
//    }
//    if(x == head) head = y;
//    if(y == tail) tail = x;
//}
//void daogiatri(node *x, node *y){
//    int trunggian;
//    trunggian = x ->el;
//    x ->el = y-> el;
//    y -> el = trunggian;
//}
//void sapxep(){
//    node *first = NULL;
//    node *second = NULL;
//    for(first = head; first != tail; first = first ->next){
//        //printf("%d\n", first ->el);
//        for(second = first ->next; second != NULL; second = second -> next){
//            //printf("%d\n", second -> el);
//
//                if(first ->el < second ->el){
//                    //change(first, second);
//                    daogiatri(first, second);
//
//                    printf("dao thanh cong\n");
//           }
//        }
//    }
//
//
//    }
//
//int main(){
//    int n = 1;
//    while(n != 0){
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        switch (n) {
//            case 1:
//                Insert_head();
//                break;
//            case 2:
//                Insert_prev();
//                break;
//            case 3:
//                delete();
//                break;
//            case 4:
//                Output(head);
//                break;
//            case 5:
//                sapxep();
//                break;
//            default:
//                n = 0;
//
//                break;
//        }
//    }
//}

