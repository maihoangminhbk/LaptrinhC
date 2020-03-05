////
////  ban_hang.c
////  MinhDev
////
////  Created by Hoang Anh on 1/7/20.
////  Copyright © 2020 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////  Khai bao struct
//typedef struct node{
//    char name[40];
//    char phone_number[12];
//    struct node* next;
//} node;
//
////  Thao tac voi queue
//int is_Empty_queue(node* head){
//    return head == NULL;
//}
//
//node* en_queue(node* head, char* name_input, char* phone_number_input){
//    node* output = (node*) calloc(1, sizeof(node));
//    strcpy(output->name, name_input);
//    strcpy(output->phone_number, phone_number_input);
//    if(is_Empty_queue(head)){
//        output->next = NULL;
//    }
//    else {
//        output->next = head;
//    }
//    head = output;
//    return head;
//}
//
//node* de_queue(node** head){
//    if(is_Empty_queue(*head)) {
//        printf("queue rong roi\n");
//        return NULL;
//    } else {
//        node* tail = *head;
//        node* near_tail = *head;
//        if((*head) ->next == NULL){
//            node* out_put = *head;
//            *head = NULL;
//            return out_put;
//        }
//        while(near_tail->next->next != NULL){
//            near_tail = near_tail->next;
//        }
//        tail = near_tail->next;
//        near_tail->next = NULL;
//        return tail;
//    }
//}
//
////  Doc File danhsach.txt
//void doc_file(node** head){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/danhsach.txt", "r");
//    char name_input[40];
//    char phone_number_input[12];
//    while(!feof(f)){
//        memset(name_input, 0, sizeof(char));
//        memset(phone_number_input, 0, sizeof(char));
//        fscanf(f, "%s %s\n", name_input, phone_number_input);
//        *head = en_queue(*head, name_input, phone_number_input);
//    }
//    fclose(f);
//}
//
////  Them nguoi mua vao hang doi
//void add_queue(node** head){
//    char name_input[40];
//    char phone_input[12];
//    printf("Nhap vao ten nguoi can them\n");
//    gets(name_input);
//    printf("Nhap vao SDT\n");
//    gets(phone_input);
//    //Check gia tri nhap vao
//    int check = 0;
//    for(int i = 0; i < strlen(name_input); i++){
//        if(name_input[i] == ' ') check = 1;
//    }
//    for(int i = 0; i < strlen(phone_input); i++){
//        if(phone_input[i] == ' ') check = 1;
//    }
//    if(check == 0){
//        *head = en_queue(*head, name_input, phone_input);
//    }
//}
//
////  Ban hang
//void ban_hang(node* head){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/banhang.txt", "a");
//    printf("Khach hang tiep theo\n");
//    node* output = de_queue(&head);
//    if(output == NULL){
//        printf("Het khach roi\n");
//    } else {
//        printf("%s %s\n", output->name, output->phone_number);
//        printf("Nhap vao so luong san pham A B C\n");
//        int A, B, C;
//        scanf("%d %d %d", &A, &B, &C);
//        while(getchar() != '\n');
//        // Nhap vao file
//        fprintf(f, "%d %d %d\n", A, B, C);
//    }
//    fclose(f);
//}
//
////  Ghi thong tin
//void ghi_thong_tin(node* head){
//    FILE* f1 = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/danhsach1.txt", "w");
//    if(f1 == NULL) {
//        printf("Doc file khong thanh cong\n");
//        exit(0);
//    }
//    FILE* f2 = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/banhang.txt", "a");
//    while(!is_Empty_queue(head)){
//        node* output = de_queue(&head);
//        fprintf(f1, "%s %s\n", output->name, output->phone_number);
//        
//    }
//    fprintf(f2, "%d\n", -1);
//    fclose(f1);
//    fclose(f2);
//}
//
//void file_banhang()
//{
//    FILE *fp=fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/banhang.txt","r");
//    int a,b,c;
//    int adem[10],bdem[10],cdem[10];
//    for(int k=0;k<10;k++)
//    {
//        adem[k]=bdem[k]=cdem[k]=0;
//    }
//    int i=0;
//    while(!feof(fp))
//    {
//        fscanf(fp,"%d ",&a);
//        if(a!=-1)
//        {
//            fscanf(fp,"%d ",&b);
//            fscanf(fp,"%d\n",&c);
//            printf("%d %d %d\n",a,b,c);
//            adem[i]+=a;
//            bdem[i]+=b;
//            cdem[i]+=c;
//        }
//        else{
//            i++;
//        }
//    }
//    printf("%d\n",i);
//    for(int k=0;k<i;k++)
//    {
//        printf("adem : %5d,",adem[k]);
//        printf("bdem : %5d,",bdem[k]);
//        printf("cdem : %5d\n",cdem[k]);
//        
//    }
//    double tong[i];
//    for(int k=0;k<i;k++)
//    {
//        printf("Tong doanh thu ngay %d: ",k+1);
//        tong[k]=10*adem[k]+50*bdem[k]+80*cdem[k];
//        printf("%.2lf trieu.\n",tong[k]);
//    }
//    fclose(fp);
//}
//
//void Thong_ke(){
//    int loai_A = 0;
//    int loai_B = 0;
//    int loai_C = 0;
//    int Tong = 0;
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/banhang.txt", "r");
//    while(!feof(f)){
//        int A_output;
//        int B_output;
//        int C_output;
//        fscanf(f, "%d %d %d\n", &A_output, &B_output, &C_output);
//        loai_A+= A_output;
//        loai_B+= B_output;
//        loai_C+= C_output;
//    }
//    Tong = loai_A + loai_B + loai_C;
//    printf("%d %d %d %d\n", loai_A, loai_B, loai_C, Tong);
//    fclose(f);
//}
//
////Uu tien
//node* Uu_tien(node* head){
//    if(is_Empty_queue(head)){
//        printf("Rong roi\n");
//    } else {
//        printf("Nhap vao ten khach hang can uu tien\n");
//        char name_input[40];
//        gets(name_input);
//        node* tail = head;
//        node* tro = head;
//        node* near_tro = head;
//        //  Tim nut cuoi
//        while(tail->next != NULL){
//            tail = tail->next;
//        }
//        
//        //  Tim con tro vao
//        while(tro != NULL){
//            if(strcmp(tro->name, name_input) == 0){
//                break;
//            }
//            tro = tro->next;
//        }
//        
//        if(tro == tail){
//            printf("Khong doi cai gi\n");
//            return head;
//        }
//        
//        if(tro == head){
//            head = head->next;
//            tro->next = NULL;
//            tail->next = tro;
//            return head;
//        }
//        
//        
//        if(tro != head){
//            while(near_tro->next != tro){
//            near_tro = near_tro->next;
//        }
//            near_tro->next = tro->next;
//            tro->next = NULL;
//            tail->next = tro;
//        }
//    }
//    return head;
//}
//
//int main(){
//    node* head = NULL;
//    int thao_tac = 0;
//    while(thao_tac != 7){
//        printf("MENU\n");
//        printf("1. Doc File\n");
//        printf("2. Them nguoi mua\n");
//        printf("3, Ban hang\n");
//        printf("4. Ghi thong tin\n");
//        printf("5. Thong ke\n");
//        printf("6. Yeu cau dac biet\n\n");
//        printf("Moi ban nhap vao thao tac\n");
//        scanf("%d", &thao_tac);
//        while(getchar() != '\n');
//        switch (thao_tac) {
//            case 1:
//                doc_file(&head);
//                break;
//            case 2:
//                add_queue(&head);
//                break;
//            case 3:
//                ban_hang(head);
//                break;
//            case 4:
//                ghi_thong_tin(head);
//                break;
//            case 5:
//                //Thong_ke();
//                file_banhang();
//                break;
//            case 6:
//                head = Uu_tien(head);
//                break;
//            default: thao_tac = 7;
//                break;
//        }
//        
//    }
//}
//
//
//
