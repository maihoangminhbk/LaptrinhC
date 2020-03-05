////
////  bai_tap.c
////  MinhDev
////
////  Created by Hoang Anh on 10/25/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "string.h"
//typedef struct node{
//    int ma;
//    char ten[31];
//    char quequan[61];
//} node;
//node *list = NULL;
//int a = 2;
//void Input(){
//    
//    //list = (node*) calloc(1, sizeof(node));
//    int maSV;
//    char tenSV[31];
//    char queSV[61];
//    printf("Nhap vao thong tin\n");
//    while(1 == 1){
//        printf("Nhap vao ten\n");
//        gets(tenSV);
//        printf("Nhap vao ma sinh vien\n");
//        scanf("%d", &maSV);
//        while(getchar() != '\n');
//        if(maSV == 0){
//            printf("Ket thuc nhap\n");
//            break;
//        }
//        printf("Nhap vao que\n");
//        gets(queSV);
//        
//        //truyen vao list
//        list = (node*) realloc(list, (++a) * sizeof(node));
//        list[a - 1].ma = maSV;
//        //printf("ma laaaaaa%d\n", list[0].ma);
//        strcpy(list[a - 1].ten, tenSV);
//        //printf("ten laaaaaa %s", list[0].ten);
//        strcpy(list[a - 1].quequan, queSV);
//        
//    }
//}
//void Output(){
//    for(int i = 0; i < a; i++){
//        printf("ten %s\n", list[i].ten);
//        printf("que quan %s\n", list[i].quequan);
//        printf("Ma sinh vien %d\n", list[i].ma);
//    }
//}
//void ghifile(){
//    FILE *f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/test/a.txt", "w");
//    if(f == NULL) printf("Ghi file khong thanh cong\n");
//    for(int i = 0; i < a; i++){
//        fprintf(f, "%s\n%d\n%s\n", list[i].ten, list[i].ma, list[i].quequan);
//    }
//    fclose(f);
//}
//void ghifile_nhiphan(){
//    FILE *f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/test/b", "wb");
//    if(f == NULL) printf("Ghi file ko thanh\n");
//    for(int i = 0; i < a; i++){
//       fwrite(&list[i], sizeof(node), 1, f);
//    }
//    //fwrite(list, sizeof(node), a, f);
//    fclose(f);
//}
//
//// doc file
//void docfile_nhiphan(){
//    FILE *f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/test/b", "rb");
//    if(f == NULL) printf("Ghi file ko thanh\n");
//    node *data = NULL;
//    data = (node*) calloc(20, sizeof(node));
//    for(int i = 0; i < a; i++){
//        fread(&data[i], sizeof(node), 1, f);
//    }
//    for(int i = 0; i < a; i++){
//        printf("%s\n", data[i].ten);
//        printf("%s\n", data[i].quequan);
//        printf("%d\n", data[i].ma);
//    }
//    //for(int i = 0; i < a - 1; i++){
//        //for(int j = 0; j < a)
//    //}
//    fclose(f);
//}
//
//
//void docfile(){
//    FILE *f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/test/a.txt", "r");
//    if(f == NULL) printf("mo file khong thanh cong\n");
//    node *data = NULL;
//    int i = 0;
//    while(!feof(f)){
//        data = (node*) realloc(data, (i + 1) * sizeof(node));
//        //fscanf(f, "%s\n%d\n%s\n", data[i].ten, &data[i].ma, data[i].quequan);
//        fgets(data[i].ten, 30, f);
//        //printf("ki tu cuoi la %c\n", data[i].ten[strlen(data[i].ten) -]);
//        //printf("do dai la %d", (int) strlen(data[i].ten));
//        data[i].ten[strlen(data[i].ten) - 1] = '\0';
//        
//        fscanf(f, "%d\n", &data[i].ma);
//        fgets(data[i].quequan, 30, f);
//        data[i].quequan[strlen(data[i].quequan) - 1] = '\0';
//        i++;
//        
//    }
//    for(int i = 0; i < a; i++){
//        printf("%s\n", data[i].ten);
//        printf("%s\n", data[i].quequan);
//        printf("%d\n", data[i].ma);
//    }
//    fclose(f);
//}
//
//void docfile1(node** data){
//    FILE *f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/test/a.txt", "r");
//    if(f == NULL) printf("mo file khong thanh cong\n");
//    //node *data = NULL;
//    int i = 0;
//    while(!feof(f)){
//        *data = (node*) realloc(*data, (i + 1) * sizeof(node));
//        //fscanf(f, "%s\n%d\n%s\n", data[i].ten, &data[i].ma, data[i].quequan);
//        fgets((*data)[i].ten, 30, f);
//        //printf("ki tu cuoi la %c\n", data[i].ten[strlen(data[i].ten) -]);
//        //printf("do dai la %d", (int) strlen(data[i].ten));
//        (*data)[i].ten[strlen((*data)[i].ten) - 1] = '\0';
//        
//        fscanf(f, "%d\n", &(*data)[i].ma);
//        fgets((*data)[i].quequan, 30, f);
//        (*data)[i].quequan[strlen((*data)[i].quequan) - 1] = '\0';
//        i++;
//        
//    }
//    for(int i = 0; i < a; i++){
//        printf("%s\n", (*data)[i].ten);
//        printf("%s\n", (*data)[i].quequan);
//        printf("%d\n", (*data)[i].ma);
//    }
//    fclose(f);
//}
//
//int main(){
//    node* data = NULL;
//    
//    //Input();
//    //Output();
//    
//    //ghifile();
//    docfile1(&data);
//    //ghifile_nhiphan();
//    //docfile_nhiphan();
//    
//    return 0;
//}
//
//
//
