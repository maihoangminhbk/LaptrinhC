////
////  bai_toan_doi_bong.c
////  MinhDev
////
////  Created by Hoang Anh on 10/25/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct node{
//    int id;
//    char ten[30];
//    int diem;
//    int thang;
//    int thua;
//    struct node* next;
//} node;
//node* head = NULL;
//// make link
//int is_empty(){
//    return head == NULL;
//}
//void insert_node(int id, char name[]){
//    node *add = NULL;
//    add = (node*) calloc(1, sizeof(node));
//    add -> id = id;
//    strcpy(add ->ten, name);
//    add -> next = NULL;
//    add -> thua = 0;
//    add -> thang = 0;
//    add -> diem = 0;
//    if(is_empty()){
//        head = add;
//    } else{
//        add -> next = head;
//        head = add;
//    }
//}
//void delete_last_node(){
//    node *check = NULL;
//    node *check2 = NULL;
//    check = head;
//    check2 = head;
//    while(check ->next != NULL){
//        check = check -> next;
//    }
//    if(check == head){
//        head = NULL;
//        printf("Xoa ca link di roi\n");
//    } else{
//        while(check2->next != check){
//            check2 = check2 ->next;
//        }
//        check2 -> next = NULL;
//        printf("Xoa thanh cong node cuooi\n");
//    }
//}
//// DOC FILE
//void doc_file(){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/bongda.txt", "r");
//    if(f == NULL) printf("mo file khong thanh cong\n");
//    char layten[30];
//    int layid;
//    char xoadong[30];
//    fgets(xoadong, 30, f);
//    for(int i = 0; i < 4; i++){
//        fscanf(f, "%d\t", &layid);
//        fgets(layten, 30, f);
//        layten[strlen(layten) - 1] = 0;
//        insert_node(layid, layten);
//    }
//    fclose(f);
//}
//
//void output(){
//    printf("Bang xep hang la \n");
//    node *check;
//    check = head;
//    printf("%-5s || %-15s || %-7s || %-7s || %-7s\n", "ID", "DOI BONG", "DIEM", "THANG", "THUA");
//    while(check != NULL){
//        printf("%-5d || %-15s || %-7d || %-7d || %-7d\n",check->id, check->ten, check->diem, check->thang, check->thua);
//        check = check -> next;
//    }
//}
//
//char* hamtraten(int i){
//    node *check;
//    check = head;
//    while(check != NULL){
//        if(i == check->id) return check->ten;
//        check = check -> next;
//    }
//    return NULL;
//}
//void inlichthidau(){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/bongda.txt", "r");
//    if(f == NULL) printf("mo file khong thanh cong\n");
//    char xoa[30];
//    int x,y;
//    for(int i = 0; i < 5; i++){
//        fgets(xoa, 30, f);
//    }
//    for(int i = 0; i < 3; i++){
//        fgets(xoa, 30, f);
//        printf("Vong %d\n", i + 1);
//        fscanf(f, "%d\t%d\n", &x, &y);
//        //printf("%d %d\n", x,y);
//        printf("%-15s-%15s\n", hamtraten(x), hamtraten(y));
//        fscanf(f, "%d\t%d\n", &x, &y);
//        printf("%-15s-%15s\n", hamtraten(x), hamtraten(y));
//    }
//   
//    fclose(f);
//}
//
////ham ket qua
//void capnhatketqua(int x, int y, int ketqua_x, int ketqua_y){
//    node* doi1 = NULL;
//    node* doi2 = NULL;
//    doi1 = head;
//    doi2 = head;
//    // gan doi1, doi2 vao 2 doi bong
//    while(doi1 ->id != x){
//        doi1 = doi1 -> next;
//    }
//    while(doi2 -> id != y){
//        doi2 = doi2 -> next;
//    }
//    // so sanh ket qua
//    if(ketqua_x > ketqua_y){
//        doi1 ->diem = doi1->diem + 3;
//        doi1 ->thang++;
//        doi2 ->thua++;
//    } else{
//        if(ketqua_x < ketqua_y){
//            doi2 ->diem+= 3;
//            doi2->thang++;
//            doi1 ->thua++;
//        } else{
//            doi1->diem++;
//            doi2->diem++;
//        }
//    }
//}
//
//void nhapketqua(){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/bongda.txt", "r");
//    if(f == NULL) printf("mo file khong thanh cong\n");
//    char xoa[30];
//    int x,y;
//    int tiso1[3], ketqua1[3];
//    int tiso2[3], ketqua2[3];
//    for(int i = 0; i < 5; i++){
//        fgets(xoa, 30, f);
//    }
//    for(int i = 0; i < 3; i++){
//        fgets(xoa, 30, f);
//        printf("Vong %d\n", i + 1);
//        fscanf(f, "%d\t%d\n", &x, &y);
//        //printf("%d %d\n", x,y);
//        printf("%-15s-%15s\n", hamtraten(x), hamtraten(y));
//        printf("Nhap ti so a_b\n");
//        scanf("%d %d", &tiso1[i], &tiso2[i]);
//        while(getchar() != '\n');
//        capnhatketqua(x, y, tiso1[i], tiso2[i]);
//        fscanf(f, "%d\t%d\n", &x, &y);
//        printf("%-15s-%15s\n", hamtraten(x), hamtraten(y));
//        printf("Nhap ti so a_b\n");
//        scanf("%d %d", &ketqua1[i], &ketqua2[i]);
//        while(getchar() != '\n');
//        capnhatketqua(x, y, ketqua1[i], ketqua2[i]);
//    }
//    
//    fclose(f);
//}
//// LOAI DOI YEU NHAT
//void sapxep(){
//    node* check1 =NULL;
//    node* check2 = NULL;
//    for(check1 = head; check1 ->next != NULL; (check1 = check1 ->next) ){
//        for(check2 = check1 ->next; check2 != NULL; check2 = check2 ->next){
//            if(check1 ->diem < check2 ->diem){
//                node trunggian;
//                trunggian = *check1;
//                *check1 = *check2;
//                *check2 = trunggian;
//                // doi lai link
//                
//                node* trunggian1;
//                trunggian1 = (check1->next);
//                (check1 ->next) = (check2 ->next);
//                (check2 -> next) = trunggian1;
//            }
//        }
//    }
//    
//}
//int main(){
//    doc_file();
//    output();
//    inlichthidau();
//    nhapketqua();
//    output();
//    sapxep();
//    output();
//    delete_last_node();
//    output();
//}
//
//
