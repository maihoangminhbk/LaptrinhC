////
////  danh sach noi don 2.c
////  MinhDev
////
////  Created by Hoang Anh on 10/9/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "string.h"
//typedef struct node {
//    char Name[31];
//    int x;
//    struct node* next;
//} Node;
//Node* Head = NULL;
//Node* Last = NULL;
//void Insert_Head(){
//    Node* add = NULL;
//    
//    printf("Nhap vao cac phan tu cua xau\n");
//    int check = 0;
//    while (check == 0){
//        add = (Node*) calloc(1, sizeof(Node));
//        printf ("Nhap ten\n");
//        gets (add ->Name);
//        if(strlen(add -> Name) == 0) break;
//        //while (getchar() != '\n');
//        printf("NHap gia tri\n");
//        scanf("%d", &(add -> x));
//        while (getchar() != '\n');
//        add -> next = NULL;
//        if(Head == NULL){
//            Head = add;
//            Last = add;
//            
//        } else {
//            add -> next = Head;
//            Head = add;
//        }
////        printf("ket thuc chua \n");
////        scanf("%d", &check);
////        while (getchar() != '\n');
//    }
//    printf("Het roi ne\n");
//    
//}
//int Insert_last(){
//    Node* add = NULL;
//    if(Last == NULL) return 0;
//    else {
//        while(1 == 1){
//            add = (Node*) calloc(1, sizeof(Node));
//            printf("Nhap vao ten\n");
//            gets(add -> Name);
//            if(strlen(add -> Name) == 0) break;
//            printf("Nhap vao gia tri\n");
//            scanf("%d", &(add -> x));
//            Last -> next = add;
//            Last = add;
//        }
//    }
//    return 1;
//}
//void Output(){
//    Node* add = NULL;
//    //add = (Node*) calloc(1, sizeof(Node));
//    add = Head;
//    do {
//        printf("ten la %s co gia tri la %d\n", add -> Name, add -> x);
//        add = add -> next;
//    } while(add != NULL);
//}
//void Delete(){
//    int n;
//    Node* del;
//    Node* select = NULL;
//    printf("Nhap vao vi tri can xoa\n");
//    scanf("%d", &n);
//    while(getchar() != '\n');
//    del = Head;
//    if(n == 0){
//        Head = Head -> next;
//        
//        free(del);
//    } else {
//        for(int i = 0; i < n; i++){
//            select = del;
//            del = del -> next;
//            
//        }
//        select -> next = del -> next;
//        free(del);
//    }
//}
//void Insert_Mid(){
//    Node* add = NULL;
//    Node* select = NULL;
//    
//        int n;
//        printf("Nhap vao vi tri can them\n");
//        scanf("%d", &n);
//        while (getchar() != '\n');
//        select = Head;
//        if(n > 0){
//            for(int i = 0; i < n; i++){
//                select = select -> next;
//            }
//        }
//        
//        
//        add = (Node*) calloc(1, sizeof(Node));
//        memset(add -> Name, 0, sizeof(strlen(add -> Name)));
//        printf("Nhap vao ten\n");
//        gets(add -> Name);
//        printf("Nhap vao gia tri\n");
//        scanf("%d", &(add -> x));
//        while(getchar() != '\n');
//        add -> next = select -> next;
//        select -> next = add;
//    
//}
//int main(){
//    int n;
//    do {
//    printf("Nhap vao so nguyen\n");
//    scanf("%d", &n);
//        while(getchar() != '\n');
//    switch (n) {
//        case 1:
//            Insert_Head();
//            break;
//        case 2:
//            Output();
//            break;
//        case 3:
//            Insert_last();
//            break;
//        case 4:
//            Delete();
//            break;
//        case 5:
//            Insert_Mid();
//            break;
//        default:
//            n = 0;
//            break;
//    }} while(n != 0);
//    
//    return 0;
//}

