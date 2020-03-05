//MAI HOANG MINH 20184151


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
    char tu[21];
    char nghia[101];
    struct node* left;
    struct node* right;
} node;

node* Insert_tree(node* root, char *input_tu, char* input_nghia){
    if(root == NULL){
        node* new = NULL;
        new = (node*) calloc(1, sizeof(node));
        strcpy(new->tu, input_tu);
        strcpy(new->nghia, input_nghia);
        new->left =NULL;
        new->right = NULL;
        return new;
    }else{
        if(strcmp(root->tu, input_tu) > 0){
            root->left = Insert_tree(root->left, input_tu, input_nghia);
        }
        else{
            root-> right = Insert_tree(root->right, input_tu, input_nghia);
        }
    }
    return root;
}

void input_tree(node** root, char* ten_file){
    FILE* f = fopen(ten_file,"r");
    while((feof(f)) != 1){
        char file_tu[21];
        char file_nghia[101];
        char tachdong[200];
        memset(file_tu, 0, sizeof(file_tu));
        memset(file_nghia, 0, sizeof(file_nghia));
        memset(tachdong, 0, sizeof(tachdong));
        fgets(tachdong, 200, f);
        int vi_tri_dau_cham_phay = 0;
        int vi_tri_dau_xuong_dong = 0;
        for(int i = 0; i < strlen(tachdong); i++){
            if(tachdong[i] == ';') vi_tri_dau_cham_phay = i;
            if(tachdong[i] == '\n') vi_tri_dau_xuong_dong = i;
        }
        int i;
        for(i = 0; i < vi_tri_dau_cham_phay; i++){
            file_tu[i] = tachdong[i];
        }
        file_tu[i] = '\0';
        int j;
        for(j = vi_tri_dau_cham_phay + 1; j < vi_tri_dau_xuong_dong; j++){
            file_nghia[j - vi_tri_dau_cham_phay - 1] = tachdong[j];
        }
        file_nghia[j - vi_tri_dau_cham_phay - 1] = '\0';
        if(file_tu[0] != 0){
            *root = Insert_tree(*root, file_tu, file_nghia);}
    }
    fclose(f);
}

//Make queue
typedef struct queue{
    node* list[30];
    int start;
    int stop;
} queue;

void makequeue(queue* input){
    input->start = 0;
    input->stop = -1;
}

int isEmpty(queue* input){
    if(input != NULL){
        return input->start > input->stop;
    } else return 1;
}

void en_queue(queue* input_queue, node* input_node){
    input_queue->list[++(input_queue->stop)] = input_node;
}

node* de_queue(queue* input_queue){
    if(!isEmpty(input_queue)){
        node* output = NULL;
        output = input_queue->list[(input_queue->start)];
        input_queue->start++;
        return output;
    } else {
        printf("Queue rong roi\n");
        return 0;
    }
}

void printf_tree(queue* input_queue, node* root){
    en_queue(input_queue, root);
    while(!isEmpty(input_queue)){
        node* check = de_queue(input_queue);
        printf("%s:%s\n", check->tu, check->nghia);
        if(check->left != NULL) en_queue(input_queue, check->left);
        if(check->right != NULL) en_queue(input_queue, check->right);
    }
}

int main(){
    char ten_file[200];
    printf("Nhap file can mo\n");
    memset(ten_file, 0, sizeof(ten_file));
    gets(ten_file);
    queue* input_queue = NULL;
    input_queue = (queue*) calloc(1, sizeof(queue));
    makequeue(input_queue);
    node *root = NULL;
    input_tree(&root, ten_file);
    printf_tree(input_queue, root);
}






