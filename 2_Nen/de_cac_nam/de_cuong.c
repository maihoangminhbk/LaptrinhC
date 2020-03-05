////
////  de_cuong.c
////  MinhDev
////
////  Created by Hoang Anh on 1/8/20.
////  Copyright © 2020 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////  Ham chuan hoa cau
//void chuan_hoa(char* string_input){
//    
//    //  Xoa cach dau
//    while(string_input[0] == ' '){
//        for(int i = 0; i < (strlen(string_input) - 1); i++){
//            string_input[i] = string_input[i + 1];
//        }
//        string_input[strlen(string_input) - 1] = '\0';
//    }
//    
//    // Xoa cach cuoi
//    while(string_input[strlen(string_input) - 1] == ' '){
//        string_input[strlen(string_input) - 1] = '\0';
//    }
//    
//    // Xoa het \n
//    for(int i = 0; i < strlen(string_input); i++){
//        if(string_input[i] == '\n') string_input[i] = ' ';
//    }
//    
//    //  Xoa het khoang trong kep
//    for(int i = 0; i < strlen(string_input); i++){
//        if(string_input[i] == ' ' && string_input[i + 1] == ' '){
//            for(int j = i; j < strlen(string_input) - 1; j++){
//                string_input[j] = string_input[j + 1];
//                
//            }
//            string_input[strlen(string_input) - 1] = '\0';
//            i--;
//        }
//    }
//}
//
////  Ham tim kiem - Thay the
//void tim_kiem_thay_the(char* string_input, char* string_search, char* string_instead){
//    int leng = (int) strlen(string_search);
//    char string_check[30];
//    int check = 0;
//    int i = 0;
//    for(i = 0; i < strlen(string_input) - leng + 1; i++){
//        int j = 0;
//        for(j = 0; j < leng; j++){
//            string_check[j] = string_input[i + j];
//        }
//        string_check[j] = '\0';
//        if(strcmp(string_search, string_check) == 0){
//            printf("Da tim thay\n");
//            check = 1;
//            break;
//        }
//    }
//    if(check == 0) printf("Khong tim thay theo yeu cau\n");
//    else {
//        if(strlen(string_instead) != leng){
//            printf("Khong thoa man do dai thay the\n");
//        } else {
//            for(int j = 0; j < strlen(string_search); j++){
//            string_input[i + j] = string_instead[j];
//            }
//        }
//    }
//}
//
////  Ham check 1 xau co phai ten rieng hay khong
//int check_ten_rieng(char* string_input){
//    if(strlen(string_input) <= 3) return 0;
//    if(string_input[0] < 'A' || string_input[0] > 'Z') return 0;
//    return 1;
//}
//
//// Ham check chinh ta
//void tach_tu(char* string_input, char list[10][30], int* sotu){
//    char tach[30];
//    int j = 0;
//    for(int i = 0; i < strlen(string_input); i++){
//        if(string_input[i] != ' '){
//            tach[j] = string_input[i];
//            j++;
//        } else {
//            tach[j] = '\0';
//            strcpy(list[(*sotu)++], tach);
//            j = 0;
//        }
//    }
//    tach[j] = '\0';
//    strcpy(list[(*sotu)++], tach);
//}
//
//    //Cay nhi phan chua cac tu
//typedef struct node{
//    char data[30];
//    struct node* left;
//    struct node* right;
//} node;
//
//node* insert_tree(node* head, char* data_input){
//    if(head == NULL){
//        node* output = (node*) calloc(1, sizeof(node));
//        strcpy(output->data, data_input);
//        return output;
//    }
//    if(strcmp(data_input, head->data) < 0){
//        head->left = insert_tree(head->left, data_input);
//    }
//    if(strcmp(data_input, head->data) > 0){
//        head->right = insert_tree(head->right, data_input);
//    }
//    return head;
//}
//
//node* search_tree(node* head, char* data_input){
//    if(head == NULL) return 0;
//    if(strcmp(head->data, data_input) == 0) return head;
//    if(strcmp(head->data, data_input) < 0) return search_tree(head->right, data_input);
//    return search_tree(head->left, data_input);
//}
//
//    //  Doc file chinh ta
//void doc_file(node** head){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/chinhta.txt", "r");
//    if(f == NULL){
//        printf("Doc file khong thanh cong\n");
//        exit(0);
//    }
//    while(!feof(f)){
//        char data_input[30];
//        memset(data_input, 0, sizeof(char));
//        fscanf(f, "%s\n", data_input);
//        if(data_input[0] != '\0') *head = insert_tree(*head, data_input);
//    }
//}
//
//void printf_tree(node* head){
//    if(head != NULL){
//        printf_tree(head->left);
//        printf("%s\n", head->data);
//        printf_tree(head->right);
//    }
//}
//
//void check_chinh_ta(char* string_input, char list[10][30], int* sotu, node* head){
//    tach_tu(string_input, list, sotu);
//    for(int i = 0; i < *sotu; i++){
//        node* output = search_tree(head, list[i]);
//        if(output == NULL){
//            printf("tu %s bi sai chinh ta roi\n", list[i]);
//        }
//    }
//}
//
////  Ham tinh tan so
//typedef struct word{
//    char word[30];
//    int freq;
//} word;
//
//void luu_tru_vao_mang(word list_input[10], char list[10][30], int sotu){
//    
//}
//
//
////void tinh_tan_so(char* string_input, int )
//
//int main(){
//    printf("Nhap xau\n");
//    char xau[30];
//    char xau_timkiem[30];
//    char xau_thaythe[30];
//    gets(xau);
//    node* head = NULL;
//    char list[10][30];
//    int sotu = 0;
//    int thao_tac = 0;
//    while(thao_tac != 7){
//        printf("MENU\n\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &thao_tac);
//        while(getchar() != '\n');
//        switch (thao_tac) {
//            case 1:
//                chuan_hoa(xau);
//                break;
//            case 2:
//                printf("Nhap xau can tim\n");
//                gets(xau_timkiem);
//                printf("Nhap xau thay the\n");
//                gets(xau_thaythe);
//                tim_kiem_thay_the(xau, xau_timkiem, xau_thaythe);
//                break;
//            case 3:
//                doc_file(&head);
//                printf_tree(head);
//                check_chinh_ta(xau, list, &sotu, head);
//                break;
//            default: thao_tac = 7;
//                break;
//    }
//    }
//    chuan_hoa(xau);
//    puts(xau);
//}
//
//
//
