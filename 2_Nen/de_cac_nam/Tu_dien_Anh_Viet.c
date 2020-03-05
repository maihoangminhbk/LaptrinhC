////
////  Tu_dien_Anh_Viet.c
////  MinhDev
////
////  Created by Hoang Anh on 12/23/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct value{
//    char english[20];
//    char viet_nam[20];
//} value;
//
//typedef struct node{
//    value value_node;
//    struct node* left;
//    struct node* right;
//} node;
//
////Khai bao cay
//node* insert_tree(node* head, value input_value){
//    if(head == NULL){
//        node* output;
//        output = (node*) calloc(1, sizeof(node));
//        output->value_node = input_value;
//        return output;
//    } else {
//        if(strcmp(input_value.english, head->value_node.english) < 0){
//            head->left = insert_tree(head->left, input_value);
//        }
//        if(strcmp(input_value.english, head->value_node.english) > 0){
//            head->right = insert_tree(head->right, input_value);
//        }
//    }
//    return head;
//}
//
//void print_tree(node* head){
//    if(head != NULL){
//        print_tree(head->left);
//        printf("%s\t%s\n", head->value_node.english, head->value_node.viet_nam);
//        print_tree(head->right);
//    }
//}
//
//node* search_tree(node* head, char* input_english){
//    if(head == NULL) return 0;
//
//    if(strcmp(input_english, head->value_node.english) < 0){
//        return search_tree(head->left, input_english);
//    }
//    if(strcmp(input_english, head->value_node.english) > 0){
//        return search_tree(head->right, input_english);
//    }
//    return head;
//}
//
////Doc file
//void doc_file(node** head){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/Data.txt", "r");
//    value output_value;
//    while(!feof(f)){
//        memset(output_value.english, 0, sizeof(char));
//        memset(output_value.viet_nam, 0, sizeof(char));
//        fscanf(f, "%s\t", output_value.english);
//        fgets(output_value.viet_nam, 20, f);
//        if(output_value.viet_nam[strlen(output_value.viet_nam) - 1] == '\n'){
//            output_value.viet_nam[strlen(output_value.viet_nam) - 1] = '\0';
//        }
//        if(output_value.viet_nam[0] != '\0') *head = insert_tree(*head, output_value);
//    }
//    fclose(f);
//}
//
////Duyet gia tri cay nhi phan
//void duyet_cay(node* head, value list_value[], int* so_value){
//    if(head != NULL){
//        duyet_cay(head->left, list_value, so_value);
//        list_value[(*so_value)++] = head->value_node;
//        duyet_cay(head->right, list_value, so_value);
//    }
//}
//
//void ghi_file(node* head){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/Data.txt", "w");
//    value list_value[100];
//    int so_value = 0;
//    duyet_cay(head, list_value, &so_value);
//    for(int i = 0; i < so_value; i++){
//        fprintf(f, "%s\t%s\n", list_value[i].english, list_value[i].viet_nam);
//    }
//    fclose(f);
//}
//
////Menu Dich Anh - Viet
//void tach_tu_khoi_xau(char* input_xau, char input_tu[100][20], int* so_tu){
//    int j = 0;
//    for(int i = 0; i < strlen(input_xau); i++){
//        if(input_xau[i] != ' '){
//            input_tu[*so_tu][j++] = input_xau[i];
//        } else {
//            input_tu[(*so_tu)++][j] = '\0';
//            j = 0;
//        }
//    }
//    input_tu[*so_tu][j] = '\0';
//}
//
//void dich_Anh_Viet(node** head){
//    //Xau can dich
//    char xau_Tieng_Anh[100];
//    printf("Nhap vao xau tieng Anh\n");
//    gets(xau_Tieng_Anh);
//    for(int i = 0; i < strlen(xau_Tieng_Anh); i++){
//        if(xau_Tieng_Anh[i] >= 'A' && xau_Tieng_Anh[i] <= 'Z'){
//            xau_Tieng_Anh[i] += 32;
//        }
//    }
//
//    char tu[100][20];
//    int so_tu = 0;
//
//    //Tach tu khoi xau
//    tach_tu_khoi_xau(xau_Tieng_Anh, tu, &so_tu);
//    for(int i = 0; i <= so_tu; i++){
//        printf("%s\n", tu[i]);
//    }
//    
//    //Dich sang tieng Viet
//    for(int i = 0; i <= so_tu; i++){
//        node* output_search = NULL;
//        output_search = search_tree(*head, tu[i]);
//        if(output_search == NULL){
//            printf("tu %s khong co trong tu dien\n", tu[i]);
//            printf("Moi ban them nghia cua tu %s vao tu dien\n", tu[i]);
//            value input_value;
//            gets(input_value.viet_nam);
//            strcpy(input_value.english, tu[i]);
//            *head = insert_tree(*head, input_value);
//        } else {
//            printf("%s ", output_search->value_node.viet_nam);
//        }
//    }
//    printf("\n");
//}
//
//int main(){
//    node* head = NULL;
//    int thaotac = 0;
//    while(thaotac != 4){
//        printf("MENU\n");
//        printf("1. Doc file\n");
//        printf("2. In data\n");
//        printf("3. Dich Anh Viet\n\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//
//        switch (thaotac) {
//            case 1:
//                doc_file(&head);
//                break;
//            case 2:
//                print_tree(head);
//                break;
//            case 3:
//                dich_Anh_Viet(&head);
//                ghi_file(head);
//                break;
//            default:
//                thaotac = 4;
//                break;
//        }
//    }
//}
//
