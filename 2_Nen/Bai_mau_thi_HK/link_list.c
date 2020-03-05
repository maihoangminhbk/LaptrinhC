//
//  link_list.c
//  MinhDev
//
//  Created by Hoang Anh on 12/13/19.
//  Copyright © 2019 Hoang Anh. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai bao link list
typedef struct value{
    int MSSV;
    char name[30];
    char email[60];
} value;

typedef struct node{
    value value_node;
    struct node* next;
} node;

// Cac thao tac voi link list
node* insert_node(node* head, value input_value){
    node* output = NULL;
    output = (node*) calloc(1, sizeof(node));
    output->value_node = input_value;
    if(head == NULL){
        output->next = NULL;
    } else{
        output->next = head;
    }
    head = output;
    return head;
}

node* insert_end_node(node* head, value input_value){
    node* last = NULL;
    node* add = NULL;
    add = (node*) calloc(1, sizeof(node));
    add->value_node = input_value;
    add->next = NULL;
    if(head == NULL){
        head = add;
    } else{
        last = head;
        while(last->next == NULL){
            last = last->next;
        }
        last->next = add;
    }
    return head;
}

node* delete_node(node* head){
    if(head != NULL){
        head = head->next;
        return head;
    } else{
        printf("lien ket rong roi\n");
        return 0;
    }
}

void print_node(node* head){
    node* check = NULL;
    if(head == NULL){
        printf("lien ket trong roi\n");
    } else{
        check = head;
        while(check != NULL){
            printf("Ten la %s\t email la %s\n", check->value_node.name, check->value_node.email);
            check = check->next;
        }
    }
}

node* delete_last(node** head){
    if(*head == NULL) return NULL;
    if((*head)->next == NULL){
        node* output = *head;
        *head = NULL;
        return output;
    }
    node* near_last = head;
    
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
        fscanf(f, "%d\n", &output.MSSV);
        fgets(output.name, 30, f);
        while(output.name[strlen(output.name) - 1] == '\n' || output.name[strlen(output.name) - 1] == '\r'){
            output.name[strlen(output.name) - 1] = 0;
        }
        fgets(output.email, 30, f);
        while(output.email[strlen(output.email) - 1] == '\n' || output.email[strlen(output.email) - 1] == '\r'){
            output.email[strlen(output.email) - 1] = 0;
        }
        if(output.name[0] != 0){
            *head = insert_node(*head, output);
    }
    
    }
}

int main(){
    node* head = NULL;
    Doc_file(&head);
    print_node(head);
}



