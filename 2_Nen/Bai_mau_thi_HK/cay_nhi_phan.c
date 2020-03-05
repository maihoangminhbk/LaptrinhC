//
//  cay_nhi_phan.c
//  MinhDev
//
//  Created by Hoang Anh on 12/15/19.
//  Copyright © 2019 Hoang Anh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai bao cay nhi phan
typedef struct value{
    char name[30];
    char MSSV[10];
    int phone;
} value;

typedef struct node{
    value value_node;
    struct node* left;
    struct node* right;
} node;

// Tao cay nhi phan, Key la name
node* insert_tree(node* tree, value value_input){
    if(tree == NULL){
        node* output = NULL;
        output = (node*) calloc(1, sizeof(node));
        output->value_node = value_input;
        return output;
    } else{
        if(strcmp(value_input.name, tree->value_node.name) < 0){
            tree->left = insert_tree(tree->left, value_input);
        } else{
            tree->right = insert_tree(tree->right, value_input);
        }
    }
    return tree;
}

node* search_tree(node* tree, char* key_input){
    if(tree == NULL){
        printf("Khong tim duoc\n");
        return tree;
    } else{
        if(strcmp(key_input, tree->value_node.name) == 0){
            return tree;
        } else{
            if(strcmp(key_input, tree->value_node.name) < 0){
                return search_tree(tree->left, key_input);
            } else{
                return search_tree(tree->right, key_input);
            }
        }
    }
}

node* delete_tree(node* tree, value value_input){
    if(tree == NULL){
        printf("Khong tim duoc cai de xoa\n");
        return 0;
    } else{
        if(strcmp(value_input.name, tree->value_node.name) < 0){
            tree->left = delete_tree(tree->left, value_input);
        } else{
            if(strcmp(value_input.name, tree->value_node.name) > 0){
                tree->right = delete_tree(tree->right, value_input);
            } else{
                if(tree->left == NULL){
                    return tree->right;
                } else{
                    if(tree->right == NULL){
                        return tree->left;
                    }
                    else{
                        node* output = NULL;
                        output = tree->right;
                        while(output->left != NULL){
                            output = output->left;
                        }
                        tree->value_node = output->value_node;
                        delete_tree(output, value_input);
                    }
                }
            }
        }
    }
    return tree;
}

void print_tree(node* head){
    if(head != NULL){
        print_tree(head->left);
        printf("Ten la %s\t MSSV la %s\t so dien thoai la %d\n", head->value_node.name, head->value_node.MSSV, head->value_node.phone);
        print_tree(head->right);
    }
}

//Tim nhung thang co MSSV la 20184151
void search_phone(node* head, int phone_input, value list[], int* count){
    if(head != NULL){
        if(head->value_node.phone == phone_input){
            list[(*count)++] = head->value_node;
        }
        search_phone(head->left, phone_input, list, count);
        search_phone(head->right, phone_input, list, count);
    }
}

// Doc tu file
void Doc_file(node** head){
    char ten_file[100];
    printf("Nhap vao ten file can doc\n");
    gets(ten_file);
    FILE* f = fopen(ten_file, "r");
    if(f == NULL){
        printf("Mo file khong thanh cong\n");
        exit(0);
    }
    value output;
    while(!feof(f)){
        memset(output.name, 0, sizeof(char));
        fgets(output.name, 30, f);
        while(output.name[strlen(output.name) - 1] == '\n' || output.name[strlen(output.name) - 1] == '\r'){
            output.name[strlen(output.name) - 1] = 0;
        }
        fgets(output.MSSV, 10, f);
        while(output.MSSV[strlen(output.MSSV) - 1] == '\n' || output.MSSV[strlen(output.MSSV) - 1] == '\r'){
            output.MSSV[strlen(output.MSSV) - 1] = 0;
        }
        fscanf(f, "%d\n", &output.phone);
        if(output.name[0] != 0){
            *head = insert_tree(*head, output);
        }
    }
}

int main(){
    node* head = NULL;
    Doc_file(&head);
    print_tree(head);
    value value_input;
    strcpy(value_input.name, "Mai Hoang Minh");
    //node* in_ra = search_tree(head, value_input);
    //printf("\n\n%s\t%s\t%d\n", in_ra->value_node.name, in_ra->value_node.MSSV, in_ra->value_node.phone);
    
    //Ham search phone
    int count = 0;
    value list[20];
    int phone_input = 3654466;
    search_phone(head, phone_input, list, &count);
    for(int i = 0; i < count; i++){
        
        printf("%s %d\n", list[i].name, list[i].phone);
    }
}






