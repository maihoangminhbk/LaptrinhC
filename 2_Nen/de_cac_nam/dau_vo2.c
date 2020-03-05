////
////  dau_vo2.c
////  MinhDev
////
////  Created by Hoang Anh on 1/8/20.
////  Copyright © 2020 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define max 100
////Khai bao struct
//typedef struct player{
//    char biet_hieu[30];
//    int mau;
//    int tan_cong;
//    int nhanh_nhen;
//    int phong_thu;
//} player;
//
////khai bao queue
//typedef struct queue{
//    player list[max];
//    int start;
//    int stop;
//} queue;
//
//void make_queue(queue* input_queue){
//    input_queue->start = -1;
//    input_queue->stop = 0;
//}
//
//int isEmpty_queue(queue* input_queue){
//    return input_queue->start < input_queue->stop;
//}
//
//int isFull_queue(queue* input_queue){
//    return (input_queue->start - input_queue->stop + 1) == max;
//}
//
//void en_queue(queue* input_queue, player input_player){
//    if(!isFull_queue(input_queue)){
//        input_queue->list[++input_queue->start] = input_player;
//    }
//}
//
//player* de_queue(queue* input_queue){
//    player* output = NULL;
//    output = (player*) calloc(1, sizeof(player));
//    if(!isEmpty_queue(input_queue)){
//        *output = input_queue->list[input_queue->stop++];
//        return output;
//    } else {
//        printf("Chuong trinh rong roi\n");
//        return 0;
//    }
//}
//
//void print_queue(queue* input_queue){
//    for(int i = input_queue->stop; i <= input_queue->start; i++){
//        printf("thong tin la \t %-15s%-5d%-5d%-5d%-5d\n", input_queue->list[i].biet_hieu, input_queue->list[i].mau, input_queue->list[i].tan_cong, input_queue->list[i].nhanh_nhen, input_queue->list[i].phong_thu);
//    }
//}
//
//int checkValidate(player p)
//{
//    if (p.nhanh_nhen < 0 || p.phong_thu < 0 || p.tan_cong < 0)
//    {
//        return 0;
//    }
//    return 1;
//}
//
////Doc du lieu tu file
//void doc_file(queue* input_queue_monphai1, queue* input_queue_monphai2){
//    
//    //Doc mon phai 1
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/monphai1.txt", "r");
//    player input_player;
//    
//    while(!feof(f)){
//        fscanf(f, "%s %d %d %d %d\n", input_player.biet_hieu, &input_player.mau, &input_player.tan_cong, &input_player.nhanh_nhen, &input_player.phong_thu);
//        if (checkValidate(input_player) == 0)
//        {
//            exit(0);
//        }
//        
//        en_queue(input_queue_monphai1, input_player);
//    }
//    fclose(f);
//    
//    //Doc mon phai 2
//    FILE* f2 = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/de_cac_nam/monphai2.txt", "r");
//    player input_player2;
//    
//    while(!feof(f2)){
//        fscanf(f, "%s %d %d %d %d\n", input_player2.biet_hieu, &input_player2.mau, &input_player2.tan_cong, &input_player2.nhanh_nhen, &input_player2.phong_thu);
//        if (checkValidate(input_player2) == 0)
//        {
//            exit(0);
//        }
//        
//        en_queue(input_queue_monphai2, input_player2);
//    }
//    fclose(f2);
//    
//    // Validate data
//    if((input_queue_monphai1->start - input_queue_monphai1->stop) != (input_queue_monphai2->start - input_queue_monphai2->stop))
//        exit(0);
//}
//
//
//
//// danh sach lien ket luu tru diem cua nguoi choi
//typedef struct data{
//    char name[30];
//    int diem;
//    struct data* next;
//} data;
//
//data* insert_data(data* head, char* input_name, int input_diem){
//    data* output = NULL;
//    output = (data*) calloc(1, sizeof(data));
//    output->diem = input_diem;
//    strcpy(output->name, input_name);
//    if(head == NULL){
//        output->next = NULL;
//        return output;
//    } else {
//        output->next = head;
//        head = output;
//        return head;
//    }
//}
//
//void sort_data(data* head){
//    data* select_1;
//    data* select_2;
//    if(head->next != NULL){
//        for(select_1 = head; select_1->next->next != NULL; select_1 = select_1 ->next){
//            for(select_2 = select_1->next; select_2->next != NULL; select_2 = select_2->next){
//                if(select_1->diem < select_2->diem){
//                    char name_trunggian[30];
//                    int diem_trunggian;
//                    strcpy(name_trunggian, select_1->name);
//                    strcpy(select_1->name, select_2->name);
//                    strcpy(select_2->name, name_trunggian);
//                    diem_trunggian = select_1->diem;
//                    select_1->diem = select_2->diem;
//                    select_2->diem = diem_trunggian;
//                }
//            }
//        }
//    }
//}
//
//int main(){
//    queue* monphai1 = NULL;
//    queue* monphai2 = NULL;
//    
//    monphai1 = (queue*) calloc(1, sizeof(queue));
//    monphai2 = (queue*) calloc(1, sizeof(queue));
//    
//    make_queue(monphai1);
//    make_queue(monphai2);
//    //doc_file(monphai1, monphai2);
//    data* phai1 = NULL;
//    data* phai2 = NULL;
//    //Menu
//    int thaotac = 0;
//    
//    while(thaotac != 4){
//        printf("Menu\n");
//        printf("1. Doc du lieu\n");
//        printf("2. Tien hanh thi dau\n");
//        printf("3. Xep hang\n");
//        printf("4. Thoat chuong trinh\n");
//        printf("\n");
//        printf("Moi nhap vao thao tac...\n");
//        scanf("%d", &thaotac);
//        while(getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                doc_file(monphai1, monphai2);
//                printf("====\n");
//                break;
//            case 2:
//                match(monphai1, monphai2, &phai1, &phai2);
//                printf("====\n");
//                break;
//            case 3:
//                print_data(phai1);
//                print_data(phai2);
//                printf("====\n");
//            default:
//                thaotac = 4;
//                // TODO: thiet exit
//                printf("Chuong trinh ket thuc");
//                break;
//        }
//    }
//}
//
