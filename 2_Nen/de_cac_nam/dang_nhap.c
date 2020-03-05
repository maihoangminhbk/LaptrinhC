////
////  dang_nhap.c
////  MinhDev
////
////  Created by Hoang Anh on 11/27/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////khai bao struct
//typedef struct value {
//    char usename[30];
//    char password[30];
//    float diem;
//} value;
//
//typedef struct node{
//    value value_node;
//    struct node* left;
//    struct node* right;
//} node;
//
////thao tac voi tree
//node* make_tree(node* root, value value_input){
//    if(root == NULL){
//        node* output = NULL;
//        output = (node*) calloc(1, sizeof(node));
//        output->value_node = value_input;
//        output->left = NULL;
//        output->right = NULL;
//        return output;
//    } else {
//        if(strcmp(value_input.usename, root->value_node.usename) > 0){
//            root->right = make_tree(root->right, value_input);
//        } else{
//            root->left = make_tree(root->left, value_input);
//        }
//    }
//    return root;
//}
//
//node* search_tree(node* root, char* usename_input){
//    if(root == NULL) return 0;
//    if(strcmp(usename_input, root->value_node.usename) == 0){
//        return root;
//    } else{
//        if(strcmp(usename_input, root->value_node.usename) < 0){
//            return search_tree(root->left, usename_input);
//        } else return search_tree(root->right, usename_input);
//    }
//}
//
//node* delete_tree(node* root, char* usename_input){
//    if(root == NULL) return root;
//    if(strcmp(usename_input, root->value_node.usename) < 0){
//        root->left = delete_tree(root->left, usename_input);
//    } else{
//        if(strcmp(usename_input, root->value_node.usename) > 0) root->right = delete_tree(root->right, usename_input);
//        else{
//            if(root->left == NULL){
//                node* new = root->right;
//                free(root);
//                return new;
//            } else{
//                if(root->right == NULL){
//                    node* new = root->left;
//                    free(root);
//                    return new;
//                } else{
//                    node* new = NULL;
//                    new = root->right;
//                    while(new->left != NULL) new = new->left;
//                    root->value_node = new->value_node;
//                    root->right = delete_tree(root->right, usename_input);
//                }
//            }
//        }
//    }
//    return root;
//}
//
//value tim_cuoi_tree(node** root){
//    value output;
//    output = (*root)->value_node;
//    if((*root)->left == NULL && (*root)->right == NULL){
//        *root = NULL;
//        return output;
//    } else{
//        if((*root)->left != NULL){
//            return tim_cuoi_tree(&((*root)->left));
//        } else{
//            return tim_cuoi_tree(&((*root)->right));
//        }
//    }
//}
//
//void print_tree(node* root){
//    if(root != NULL){
//        print_tree(root->left);
//        printf("ten %s\t mat khau %s\t diem %f\n", root->value_node.usename, root->value_node.password, root->value_node.diem);
//        print_tree(root->right);
//    }
//}
//
////doc ghi file
//void doc_file(node** root){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/sinh_vien.txt", "r");
//    if(f == NULL) printf("mo file ko thanh cong\n");
//    while(!feof(f)){
//        value value_file;
//        fscanf(f, "%s\t%s\t%f\n", value_file.usename, value_file.password, &value_file.diem);
//        *root = make_tree(*root, value_file);
//    }
//    fclose(f);
//}
//
//void ghi_file_no_stack(node** root){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/sinh_vien.txt", "w");
//    value out_put;
//    do{
//        out_put = tim_cuoi_tree(root);
//        fprintf(f, "%s\t%s\t%f\n", out_put.usename, out_put.password, out_put.diem);
//    } while(*root != NULL);
//    fclose(f);
//}
//
////Menu 11111111
//node* dang_nhap(node* root){
//    printf("Nhap usename\n");
//    char usename_dangnhap[30];
//    gets(usename_dangnhap);
//    node* new = NULL;
//    new = search_tree(root, usename_dangnhap);
//    
////    if(new != NULL){
////        int check = 0;
////        char password_dangnhap[30];
////        while(check < 3){
////            printf("Nhap mat khau nhe\n");
////            gets(password_dangnhap);
////            if(strcmp(new->value_node.password, password_dangnhap) == 0){
////                printf("Ban nhap dung roi\n");
////                if(strcmp(usename_dangnhap, "admin") == 0){
////                    printf("Nguoi dang nhap la admin\n"); return new;
////                }
////                else{
////                    printf("Nguoi dung la nhan vien\n");
////                    return new;
////                }
////            } else{
////                printf("Ban nhap sai roi, nhap lai\n");
////                check++;
////            }
////        }
////    } else{
////        printf("Ban nhap sai ten nguoi dung\n");
////    }
//    
//    if (new == NULL) {
//        printf("Ban nhap sai ten nguoi dung\n");
//        return 0;
//    }
//    
//    int check = 0;
//    char password_dangnhap[30];
//    
//    while(check < 3) {
//        printf("Nhap mat khau nhe\n");
//        gets(password_dangnhap);
//        
//        if(strcmp(new->value_node.password, password_dangnhap) == 0) {
//            printf("Ban nhap dung roi\n");
//            if (strcmp(usename_dangnhap, "admin") == 0) {
//                printf("Nguoi dang nhap la admin\n");
//                return new;
//            } else {
//                printf("Nguoi dung la nhan vien\n");
//                return new;
//            }
//        } else {
//            printf("Ban nhap sai roi, nhap lai\n");
//            check++;
//        }
//    }
//    
//    return 0;
//}
//
//////// MENU Thanh Vien
//void xem_diem(node* thanh_vien){
//    printf("Diem cua %s la\n", thanh_vien->value_node.usename);
//    printf("%f\n", thanh_vien->value_node.diem);
//}
//
//void doi_mat_khau(node* thanh_vien){
//    char new_password1[30];
//    char new_password2[30];
//    printf("Nhap mat khau moi lan 1\n");
//    gets(new_password1);
//    printf("Nhap mat khau moi lan 2\n");
//    gets(new_password2);
//    if(strcmp(new_password1, new_password2) == 0){
//        printf("Ban doi mat khau thanh cong \n");
//        strcpy(thanh_vien->value_node.password, new_password1);
//    } else{
//        printf("Ban nhap sai mat khau roi\n");
//    }
//}
//
//void quyen_thanh_vien(node* thanh_vien, node** root){
//    int thaotac = 0;
//    while(thaotac != 4){
//        printf("MENU: Thanh vien\n");
//        printf("1. Xem diem\n");
//        printf("2. Doi mat khau\n");
//        printf("3. Ghi Thong Tin va Thoat\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                xem_diem(thanh_vien);
//                break;
//            case 2:
//                doi_mat_khau(thanh_vien);
//                break;
//            case 3:
//                ghi_file_no_stack(root);
//                thaotac = 4;
//                break;
//            default: thaotac = 4;
//                break;
//        }
//    }
//}
//
////// MENU admin
//void quyen_admin(node* thanh_vien, node** root){
//    int thaotac = 0;
//    value input_value;
//    while(thaotac != 5){
//        printf("MENU: Admin\n");
//        printf("1. Them nguoi zoo\n");
//        printf("2. In ra danh sach tang dan\n");
//        printf("3. Xoa 1 thang di\n");
//        printf("Nhap vao file roi Thoat\n");
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                printf("Nhap nguoi muon them vo\n");
//                printf("Nhap ten\n");
//                gets(input_value.usename);
//                printf("Nhap password\n");
//                gets(input_value.password);
//                printf("Nhap diem\n");
//                scanf("%f", &input_value.diem);
//                while(getchar() != '\n');
//                make_tree(*root, input_value);
//                break;
//            case 2:
//                print_tree(*root);
//                break;
//            case 3:
//                printf("Nhap ten thang can xoa\n");
//                char ten_thang_xoa[30];
//                gets(ten_thang_xoa);
//                delete_tree(*root, ten_thang_xoa);
//                break;
//            case 4:
//                ghi_file_no_stack(root);
//                printf("Ghi file thanh cong");
//                thaotac = 5;
//                break;
//            default: thaotac = 5;
//                break;
//        }
//    }
//}
//
//int main(){
//    while(1 == 1){
//        printf("MENU\n");
//        printf("1. Dang nhap\n");
//        printf("2. Thoat\n");
//        // Doc file vao cay
//        node* root = NULL;
//        node* quyen_dang_nhap = NULL;
//        doc_file(&root);
//        // Thao tac voi Menu chinh
//        printf("Nhap va thao tac\n");
//        int thaotac;
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                quyen_dang_nhap = dang_nhap(root);
//                if(quyen_dang_nhap == 0) exit(0);
//                else{
//                    if(strcmp(quyen_dang_nhap->value_node.usename, "Admin") == 0){
//                        quyen_admin(quyen_dang_nhap, &root);
//                    } else{
//                        quyen_thanh_vien(quyen_dang_nhap, &root);
//                    }
//                }
//                break;
//            case 2:
//                exit(0);
//                break;
//            default: printf("Ban nhap sai roi, nhap lai\n");
//                break;
//        }
//    }
//    
//    
//}
//
//
//
//
