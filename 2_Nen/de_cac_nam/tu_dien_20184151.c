////
////  Mai_Hoang_Minh20184151.c
////  MinhDev
////
////  Created by Hoang Anh on 1/10/20.
////  Copyright © 2020 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct value{
//    char tu[200];
//    char nghia[200];
//} value;
//
//typedef struct node{
//    value value_node;
//    struct node* left;
//    struct node* right;
//} node;
//
//
////Khai bao cay
//node* insert_tree(node* head, value input_value){
//    if(head == NULL){
//        node* output;
//        output = (node*) calloc(1, sizeof(node));
//        output->value_node = input_value;
//        return output;
//    } else {
//        if(strcmp(input_value.tu, head->value_node.tu) < 0){
//            head->left = insert_tree(head->left, input_value);
//        }
//        if(strcmp(input_value.tu, head->value_node.tu) > 0){
//            head->right = insert_tree(head->right, input_value);
//        }
//    }
//    return head;
//}
//
//void printf_tree(node* head){
//    if(head != NULL){
//        printf("%s\n", head->value_node.tu);
//        printf_tree(head->left);
//        printf_tree(head->right);
//    }
//}
//
//void printf_tree_full(node* head){
//    if(head != NULL){
//        printf("%s %s\n", head->value_node.tu, head->value_node.nghia);
//        printf_tree_full(head->left);
//        printf_tree_full(head->right);
//    }
//}
//
//node* search_tree(node* head, char* input_tu){
//    if(head == NULL) return 0;
//    printf("%s\n", head->value_node.tu);
//    if(strcmp(head->value_node.tu, input_tu) == 0) return head;
//    if(strcmp(head->value_node.tu, input_tu) < 0) return search_tree(head->right, input_tu);
//    return search_tree(head->left, input_tu);
//}
//
//
////  doc file
//void doc_file(node** head, char* thamso){
//    //FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/thi.txt", "r");
//    FILE* f = fopen(thamso, "r");
//    if(f == NULL){
//        printf("Khong doc duoc file\n");
//        exit(0);
//    }
//    value output_value;
//    while(!feof(f)){
//        memset(output_value.tu, 0, sizeof(char));
//        memset(output_value.nghia, 0, sizeof(char));
//        fscanf(f, "%s %s\n", output_value.tu, output_value.nghia);
//        *head = insert_tree(*head, output_value);
//    }
//    fclose(f);
//}
//
////  Them tu
//void them_tu(node** head){
//    char input_tu[200];
//    char input_nghia[200];
//    printf("Nhap vao tu\n");
//    gets(input_tu);
//    printf("Nhap nghia\n");
//    gets(input_nghia);
//    value output_value;
//    strcpy(output_value.tu, input_tu);
//    strcpy(output_value.nghia, input_nghia);
//    *head = insert_tree(*head, output_value);
//    
//}
//
////  Dich
//void dich_tu_dien(node* head){
//    char tu_input[200];
//    gets(tu_input);
//    node* output_node = search_tree(head, tu_input);
//    if(output_node == NULL){
//        printf("Khong tim thay tu can tra\n");
//    } else {
//        printf("\ntu la %s\n", output_node->value_node.nghia);
//    }
//    
//}
//
//int main(int argn, char** argv){
//    
//    node* head = NULL;
//    doc_file(&head, argv[1]);
//    printf_tree_full(head);
//    int thao_tac = 0;
//    while(thao_tac != 6){
//        printf("MENU\n");
//        printf("1. Duyet theo chieu sau\n");
//        printf("2. Them tu\n");
//        printf("3. Dich tu\n");
//        printf("Nhap vao thao tac\n\n");
//        scanf("%d", &thao_tac);
//        while(getchar() != '\n');
//        switch (thao_tac) {
//            case 1:
//                printf_tree(head);
//                break;
//            case 2:
//                them_tu(&head);
//                break;
//            case 3:
//                dich_tu_dien(head);
//                break;
//            default: thao_tac = 6;
//                break;
//        }
//    }
//}

