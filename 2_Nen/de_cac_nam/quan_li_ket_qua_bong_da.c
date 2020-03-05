////
////  quan_li_ket_qua_bong_da.c
////  MinhDev
////
////  Created by Hoang Anh on 12/21/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct value{
//    char name[10];
//    int diem;
//} value;
//
//typedef struct node{
//    value value_node;
//    struct node* left;
//    struct node* right;
//} node;
//
//int thu_tu = 0;
//
////thao tac cay nhi phan
//node* insert_tree(node* tree, value value_input){
//    if(tree == NULL){
//        node* output = NULL;
//        output = (node*) calloc(1, sizeof(node));
//        output->value_node = value_input;
//        return output;
//    } else{
//        if(strcmp(value_input.name, tree->value_node.name) < 0){
//            tree->left = insert_tree(tree->left, value_input);
//        } else{
//            tree->right = insert_tree(tree->right, value_input);
//        }
//    }
//    return tree;
//}
//
//node* search_tree(node* tree, value value_input){
//    if(tree == NULL){
//        //printf("Khong tim duoc\n");
//        return NULL;
//    } else{
//        if(strcmp(value_input.name, tree->value_node.name) == 0){
//            return tree;
//        } else{
//            if(strcmp(value_input.name, tree->value_node.name) < 0){
//                return search_tree(tree->left, value_input);
//            } else{
//                return search_tree(tree->right, value_input);
//            }
//        }
//    }
//}
//
//node* delete_tree(node* tree, char* name){
//    if(tree == NULL){
//        printf("Khong tim duoc cai de xoa\n");
//        return 0;
//    }
//    
//    if(strcmp(name, tree->value_node.name) < 0){
//        tree->left = delete_tree(tree->left, name);
//        return tree;
//    }
//    
//    if(strcmp(name, tree->value_node.name) > 0){
//        tree->right = delete_tree(tree->right, name);
//        return tree;
//    }
//    
//    if(tree->left == NULL) {
//        return tree->right;
//    }
//    
//    if(tree->right == NULL){
//        return tree->left;
//    }
//    
//    node* output = NULL;
//    output = tree->right;
//    while(output->left != NULL){
//        output = output->left;
//    }
//    tree->value_node = output->value_node;
//    delete_tree(output, name);
//    
//    return tree;
//}
//
//void print_tree(node* tree){
//    if(tree != NULL){
//        printf("%s\t", tree->value_node.name);
//        printf("%d\n", tree->value_node.diem);
//        print_tree(tree->left);
//        print_tree(tree->right);
//    }
//}
//
////doc file
//void from_file_to_tree(node** tree, char* team1, char* team2, int ti_so1, int ti_so2){
//    value input_value;
//    memset(input_value.name, 0, sizeof(char));
//    strcpy(input_value.name, team1);
//    input_value.diem = 0;
//    node* team_1 = NULL;
//    team_1 = search_tree(*tree, input_value);
//    if(team_1 == NULL) {
//        *tree = insert_tree(*tree, input_value);
//        printf("nut thu %d\n", ++thu_tu);
//        team_1 = search_tree(*tree, input_value);
//    }
//    memset(input_value.name, 0, sizeof(char));
//    strcpy(input_value.name, team2);
//    input_value.diem = 0;
//    node* team_2 = NULL;
//    team_2 = search_tree(*tree, input_value);
//    if(team_2 == NULL){
//        *tree = insert_tree(*tree, input_value);
//        printf("nut thu %d\n", ++thu_tu);
//        team_2 = search_tree(*tree, input_value);
//    }
//    if(ti_so1 > ti_so2){
//        team_1->value_node.diem = team_1->value_node.diem + 3;
//    } else {
//        if(ti_so1 < ti_so2){
//            team_2->value_node.diem = team_2->value_node.diem + 3;
//        } else {
//            team_1->value_node.diem++;
//            team_2->value_node.diem++;
//        }
//    }
//    
//}
//
//void doc_file(node** tree){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/BongDa_2.txt", "r");
//    while(!feof(f)){
//        char team1[10];
//        memset(team1, 0, sizeof(char));
//        char team2[10];
//        memset(team2, 0, sizeof(char));
//        int ti_so1 = 0;
//        int ti_so2 = 0;
//        fscanf(f, "%s\t%s\t%d\t%d\n", team1, team2, &ti_so1, &ti_so2);
//        from_file_to_tree(tree, team1, team2, ti_so1, ti_so2);
//    }
//    fclose(f);
//}
//
////Menu tim kiem
//void menu_search(node* input_tree){
//    printf("Nhap vao doi bong can tim\n");
//    char input_search[10];
//    gets(input_search);
//    value output_value;
//    strcpy(output_value.name, input_search);
//    node* output_node = NULL;
//    output_node = search_tree(input_tree, output_value);
//    if(output_node == NULL){
//        printf("Khong tim thay\n");
//    } else {
//        printf("%s\t%d\n", output_node->value_node.name, output_node->value_node.diem);
//    }
//}
//
//// Menu xuong hang
//void duyet_cay_theo_diem(node* input_tree, int X, char list_name[30][10], int* thu_tu){
//    if(input_tree != NULL){
//        if(input_tree->value_node.diem < X){
//            //printf("doi bong %s bi loai\n", input_tree->value_node.name);
//            printf("%d\n", *thu_tu);
//            strcpy(list_name[(*thu_tu)++], input_tree->value_node.name);
//            printf("%d\n", *thu_tu);
//        }
//        duyet_cay_theo_diem(input_tree->left, X, list_name, thu_tu);
//        duyet_cay_theo_diem(input_tree->right, X, list_name, thu_tu);
//    }
//}
//
//void menu_xuong_hang(node** input_tree){
//    printf("Nhap vao so nguyen X\n");
//    printf("Nhung doi bong co diem thap hon se... toang\n");
//    int X;
//    scanf("%d", &X);
//    while(getchar() != '\n');
//    
//    // Lay ra danh sach doi bong xuong hang
//    int so_lan_duyet = 0;
//    char list_name[30][10];
//    duyet_cay_theo_diem(*input_tree, X, list_name, &so_lan_duyet);
//    for(int i = 0; i < so_lan_duyet; i++){
//        *input_tree = delete_tree(*input_tree, list_name[i]);
//    }
//}
//
////Xuat file
//void duyet_cay_lay_thong_tin(node* tree, value output_value[30], int* so_doi_bong){
//    if(tree != NULL){
//        strcpy(output_value[*so_doi_bong].name , tree->value_node.name);
//        output_value[(*so_doi_bong)++].diem = tree->value_node.diem;
//        duyet_cay_lay_thong_tin(tree->left, output_value, so_doi_bong);
//        duyet_cay_lay_thong_tin(tree->right, output_value, so_doi_bong);
//    }
//}
//
//void Ghi_file(node* tree){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/Bai_mau_thi_HK/Ketqua.txt", "w");
//    int so_doi_bong = 0;
//    value output_name[30];
//    duyet_cay_lay_thong_tin(tree, output_name, &so_doi_bong);
//    for (int i = 0; i < so_doi_bong; i++) {
//        fprintf(f, "%s\t%d\n", output_name[i].name, output_name[i].diem);
//    }
//    
//    fclose(f);
//}
//
//int main(){
//    node* head = NULL;
//    int thaotac = 0;
//    while(thaotac != 6){
//        printf("MENU\n");
//        printf("1. Tao cay\n");
//        printf("2. Xep hang\n");
//        printf("3. Tim kiem\n");
//        printf("4. Xuong hang\n");
//        printf("5. Xuat file\n\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                doc_file(&head);
//                break;
//            case 2:
//                print_tree(head);
//                break;
//            case 3:
//                menu_search(head);
//                break;
//            case 4:
//                menu_xuong_hang(&head);
//                break;
//            case 5:
//                Ghi_file(head);
//            default: thaotac = 6;
//                break;
//        }
//        
//        
//    }
//    
//    
//    
//    
//}
//
//
//
//
//
