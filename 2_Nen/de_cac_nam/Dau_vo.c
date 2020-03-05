//////
//////  20184151.c
//////  MinhDev
//////
//////  Created by Hoang Anh on 11/29/19.
//////  Copyright © 2019 Hoang Anh. All rights reserved.
//////
////
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
////Menu tran thi dau
//
//int turn_hit(player* player_phai_1, player* player_phai_2, int turn){
//    if(turn == 1){
//        int mau_bi_mat = 0;
//        if(player_phai_1->tan_cong > player_phai_2->phong_thu) mau_bi_mat = player_phai_1->tan_cong - player_phai_2->phong_thu;
//        printf("Nguoi %s tan cong\tnguoi %s mat %d mau\n", player_phai_1->biet_hieu, player_phai_2->biet_hieu, mau_bi_mat);
//        player_phai_2->mau -= mau_bi_mat > 0 ? mau_bi_mat : 0;
//        return 2;
//    } else {
//        int mau_bi_mat = 0;
//        if(player_phai_2->tan_cong > player_phai_1->phong_thu) mau_bi_mat = player_phai_2->tan_cong - player_phai_1->phong_thu;
//        printf("Nguoi %s tan cong\tnguoi %s mat %d mau\n", player_phai_2->biet_hieu, player_phai_1->biet_hieu, mau_bi_mat);
//        player_phai_1->mau -= abs(player_phai_2->tan_cong - player_phai_1->phong_thu);
//        return 1;
//    }
//}
//
//int solo(player* player_phai_1, player* player_phai_2, int* diem_1, int* diem_2){
//    int turn;
//    printf("%s\t%d\t%d\t%d\t%d\tvs%s\t%d\t%d\t%d\t%d\n",
//           player_phai_1->biet_hieu,
//           player_phai_1->mau,
//           player_phai_1->tan_cong,
//           player_phai_1->nhanh_nhen,
//           player_phai_1->phong_thu,
//           player_phai_2->biet_hieu,
//           player_phai_2->mau,
//           player_phai_2->tan_cong,
//           player_phai_2->nhanh_nhen,
//           player_phai_2->phong_thu);
//    
//    // truong hop knock out
//    if(player_phai_1->nhanh_nhen > player_phai_2->nhanh_nhen){
//        turn = turn_hit(player_phai_1, player_phai_2, 1);
//        if(player_phai_2->mau <= 0) {
//            (*diem_1) = (*diem_1) + 3;
//            printf("diem nguoi 1 cong them %d\n", 3);
//        }
//        else {
//            (*diem_1)++;
//            printf("diem nguoi 1 cong them %d\n", 1);
//        }
//    } else {
//        turn = turn_hit(player_phai_1, player_phai_2, 2);
//        if(player_phai_1->mau <= 0) {
//            (*diem_2) = (*diem_2) + 3;
//            printf("diem nguoi 2 cong them %d\n", 3);
//        }
//        else {
//            (*diem_2)++;
//            printf("diem nguoi 2 cong them %d\n", 1);
//        }
//    }
//    
//    while(player_phai_1->mau > 0 && player_phai_2->mau > 0){
//        
//        turn = turn_hit(player_phai_1, player_phai_2, turn);
//        if(turn == 1) {
//            (*diem_2)++;
//            printf("diem nguoi 2 cong them %d\n", 1);
//        }
//        if(turn == 2) {
//            (*diem_1)++;
//            printf("diem nguoi 1 cong them %d\n", 1);
//        }
//    }
//    
//    
//    if(player_phai_1->mau <= 0){
//        printf("Nguoi 1 thua roi\n");
//        return 2;
//    }
//    printf("Nguoi 2 thua roi\n");
//    return 1;
//}
//
//void match(queue* monphai_1, queue* monphai_2, data** phai_1, data** phai_2){
//    int so_thu_tu_tran = 1;
//    
//    player* player_phai_1 = de_queue(monphai_1);
//    player* player_phai_2 = de_queue(monphai_2);
//    
//    int nguoi_thang_cuoc = 0;
//    int diem_1 = 0;
//    int diem_2 = 0;
//    
//    while(player_phai_1 != NULL && player_phai_2 != NULL){
//        if(nguoi_thang_cuoc == 1){
//            *phai_2 = insert_data(*phai_2, player_phai_2->biet_hieu, diem_2);
//            diem_2 = 0;
//            player_phai_2 = de_queue(monphai_2);
//            if(player_phai_2 == NULL) {
//                *phai_1 = insert_data(*phai_1, player_phai_1->biet_hieu, diem_1);
//                break;
//                
//            }
//        }
//        if(nguoi_thang_cuoc == 2){
//            *phai_1 = insert_data(*phai_1, player_phai_1->biet_hieu, diem_1);
//            player_phai_1 = de_queue(monphai_1);
//            diem_1 = 0;
//            if(player_phai_1 == NULL) {
//                *phai_2 = insert_data(*phai_2, player_phai_2->biet_hieu, diem_2);
//                break;
//            }
//        }
//        printf("tran %d\n", so_thu_tu_tran++);
//        nguoi_thang_cuoc = solo(player_phai_1, player_phai_2, &diem_1, &diem_2);
//    }
//    
//    // clean queue
//    while(!isEmpty_queue(monphai_1)){
//        player_phai_1 = de_queue(monphai_1);
//        *phai_1 = insert_data(*phai_1, player_phai_1->biet_hieu, 0);
//    }
//    
//    while(!isEmpty_queue(monphai_2)){
//        player_phai_2 = de_queue(monphai_2);
//        *phai_2 = insert_data(*phai_2, player_phai_2->biet_hieu, 0);
//    }
//    
//}
//
//void print_data(data* head){
//    data* select;
//    for(select = head; select != NULL; select = select->next){
//        printf("Ten la %s diem la %d\n", select->name, select->diem);
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
//
//
