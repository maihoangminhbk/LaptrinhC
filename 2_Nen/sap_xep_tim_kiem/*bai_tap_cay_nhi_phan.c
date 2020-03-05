////
////  bai_tap_cay_nhi_phan.c
////  MinhDev
////
////  Created by Hoang Anh on 11/15/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct node{
//    char tu[21];
//    char nghia[101];
//    struct node* left;
//    struct node* right;
//} node;
//
//node* Insert_tree(node* root, char *input_tu, char* input_nghia){
//    if(root == NULL){
//        node* new = NULL;
//        new = (node*) calloc(1, sizeof(node));
//        strcpy(new->tu, input_tu);
//        strcpy(new->nghia, input_nghia);
//        new->left =NULL;
//        new->right = NULL;
//        return new;
//    }else{
//        if(strcmp(root->tu, input_tu) > 0){
//            root->left = Insert_tree(root->left, input_tu, input_nghia);
//            }
//    else{
//        root-> right = Insert_tree(root->right, input_tu, input_nghia);
//    }
//    }
//    return root;
//}
//
//node* delete_tree(node* root, char* input_tu){
//if(root == NULL) return 0;
//if(strcmp(input_tu, root->tu) < 0){
//        root->left = delete_tree(root->left, input_tu);
//    } else{
//        if(strcmp(input_tu, root->tu) > 0){
//            root->right = delete_tree(root->right, input_tu);
//        } else{
//            if(root->left == NULL) return root->right;
//            else{
//                if(root->right == NULL) return root->left;
//                else{
//                    node* choose = NULL;
//                    choose = root->right;
//                    while (choose->left != NULL) {
//                        choose = choose->left;
//                    }
//                    strcpy(root->tu, choose->tu);
//                    strcpy(root->nghia, choose->nghia);
//                    free(choose);
//                    return root;
//                }
//            }
//        }
//    }
//    return root;
//}
//
//void* search_tree(node* root, char* input_tukhoa){
//if(root == NULL) return 0;
//if(strcmp(root->tu, input_tukhoa) == 0) return root;
//    else{
//        if(strcmp(root->tu, input_tukhoa) < 0) return search_tree(root->right, input_tukhoa);
//        else{
//            return search_tree(root->left, input_tukhoa);
//        }
//    }
//}
//
//void input_tree(node** root){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/sap_xep_tim_kiem/minh","r");
//    char file_tu[21];
//    char file_nghia[101];
////    for(int i = 0; i < 5; i++){
////        fscanf(f, "%s ", file_tu);
////        fscanf(f, "%s\n", file_nghia);
////        *root = Insert_tree(*root, file_tu, file_nghia);
////    }
//    while((feof(f)) != 1){
//        char tachdong[200];
//        fgets(tachdong, 200, f);
//        int vi_tri_dau_cham_phay = 0;
//        int vi_tri_dau_xuong_dong = 0;
////        memset(file_tu, 0, sizeof(file_tu));
////        memset(file_nghia, 0, sizeof(file_nghia));
////        memset(tachdong, 0, sizeof(tachdong));
//        for(int i = 0; i < strlen(tachdong); i++){
//            if(tachdong[i] == ';') vi_tri_dau_cham_phay = i;
//            if(tachdong[i] == '\n') vi_tri_dau_xuong_dong = i;
//        }
//        int i;
//        for(i = 0; i < vi_tri_dau_cham_phay; i++){
//            file_tu[i] = tachdong[i];
//        }
//        file_tu[i] = '\0';
//        int j;
//        for(j = vi_tri_dau_cham_phay + 1; j < vi_tri_dau_xuong_dong; j++){
//            file_nghia[j - vi_tri_dau_cham_phay - 1] = tachdong[j];
//        }
//        file_nghia[j - vi_tri_dau_cham_phay - 1] = '\0';
//        if(file_tu[0] != 0) *root = Insert_tree(*root, file_tu, file_nghia);
//    }
//    fclose(f);
//}
//
////Make queue
//typedef struct queue{
//    node* list[30];
//    int start;
//    int stop;
//} queue;
//
//void makequeue(queue* input){
//    input->start = 0;
//    input->stop = -1;
//}
//
//int isEmpty(queue* input){
//    if(input != NULL){
//        return input->start > input->stop;
//    } else return 1;
//}
//
//void en_queue(queue* input_queue, node* input_node){
//    input_queue->list[++(input_queue->stop)] = input_node;
//}
//
//node* de_queue(queue* input_queue){
//    if(!isEmpty(input_queue)){
//        node* output = NULL;
//        output = input_queue->list[(input_queue->start)];
//        input_queue->start++;
//        return output;
//    } else {
//        printf("Queue rong roi\n");
//        return 0;
//    }
//}
//
//void printf_tree(queue* input_queue, node* root){
//    en_queue(input_queue, root);
//    while(!isEmpty(input_queue)){
//        node* check = de_queue(input_queue);
//        printf("%s:%s\n", check->tu, check->nghia);
//        if(check->left != NULL) en_queue(input_queue, check->left);
//        if(check->right != NULL) en_queue(input_queue, check->right);
//    }
//}
//
//int main(){
//    queue* input_queue = NULL;
//    input_queue = (queue*) calloc(1, sizeof(queue));
//    makequeue(input_queue);
//    node *root = NULL;
//    input_tree(&root);
//    printf_tree(input_queue, root);
//    while(1 == 1){
//        printf("Nhap vao tu can xoa\n");
//        char input_tuxoa[20];
//        gets(input_tuxoa);
//        if(strcmp(input_tuxoa, "0") == 0) exit(0);
//        root = delete_tree(root, input_tuxoa);
//        printf_tree(input_queue, root);
//    }
//}
//
//
//
//
//
//
//
