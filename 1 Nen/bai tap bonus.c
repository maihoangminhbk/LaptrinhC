////
////  bai tap bonus.c
////  MinhDev
////
////  Created by Hoang Anh on 6/5/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#define Max 6
//typedef struct
//{
//    char hoten[35];
//    int diem[5];
//} ketquathidau;
//void Input(ketquathidau list[], int *n)
//{
//    printf("Nhap vao so nguoi tham gia\n");
//    int check;
//    do
//    {
//        check = 0;
//        scanf("%d", n);
//        while(getchar() != '\n');
//        if(*n < 0 || *n > Max) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//    } while(check == 1);
//    for(int i = 0; i < *n; i++)
//    {
//        printf("Nhap ten\n");
//        do
//        {
//            check = 1;
//            gets(list[i].hoten);
//            for(int j = 0; j < strlen(list[i].hoten); j++)
//            {
//                if(list[i].hoten[j] == ' ') check = 0;
//            }
//            if(check == 1) printf("Ban nhap sai roi, nhap lai\n");
//        } while(check == 1);
//        for(int j = 0; j < 5; j++)
//        {
//            list[i].diem[j] = 0;
//        }
//    }
//    printf("Danh sach van dong vien la\n");
//    for(int i = 0; i < *n; i++)
//    {
//        printf("Van dong vien thu %d la %s\n", i + 1, list[i].hoten);
//    }
//}
//void Nhapketquaban(ketquathidau list[], int n)
//{
//    int check;
//    printf("Nhap ket qua thi dau\n");
//    for(int i = 0; i < n; i++)
//    {
//        printf("Nhap ket qua nguoi choi thu %d\n", i + 1);
//        for(int j = 0; j < 5; j++)
//        {
//            printf("Luot choi thu %d ", j + 1);
//            do
//            {
//                check = 0;
//                scanf("%d", &list[i].diem[j]);
//                while(getchar() != '\n');
//                if(list[i].diem[j] < 0 || list[i].diem[j] > 10) {check = 1; printf("Ban nhap sai roi\n");}
//            } while(check == 1);
//        }
//    }
//    printf("%-20s | %-5s | %-5s | %-5s | %-5s | %-5s |\n", "Ho ten", "L1","L2","L3","L4","L5");
//    for(int i = 0; i < n; i++)
//    {
//        printf("%-20s | %-5d | %-5d | %-5d | %-5d | %-5d |\n", list[i].hoten, list[i].diem[0], list[i].diem[1], list[i].diem[2], list[i].diem[3], list[i].diem[4]);
//    }
//        
//}
//void Sort(ketquathidau list[], int n)
//{
//    int tong[n];
//    for(int i = 0; i < 5; i++)
//    {
//        tong[i] = 0;
//    }
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < 5; j++)
//        {
//            tong[i] += list[i].diem[j];
//        }
//    }
//    for(int i = 0; i < n - 1; i++)
//        for(int j = i; j < n; j++)
//        {
//            if(tong[i] < tong[j])
//            {
//                ketquathidau tg = list[i];
//                list[i] = list[j];
//                list[j] = tg;
//                int tg2 = tong[i];
//                tong[i] = tong[j];
//                tong[j] = tg2;
//            }
//        }
//    printf("%-20s | %-10s | %d\n", list[0].hoten, "vang", tong[0]);
//    printf("%-20s | %-10s | %d\n", list[1].hoten, "bac", tong[1]);
//    printf("%-20s | %-10s | %d\n", list[2].hoten, "dong", tong[2]);
//    
//}
//void sieuxathu(ketquathidau list[], int n)
//{
//    
//    for(int i = 0; i < n; i++)
//    {
//        int count = 0;
//        for(int j = 0; j < 5; j++)
//        {
//            if(list[i].diem[j] == 10) {count++; if(count == 3) printf("Nguoi thu %d la sieu xa thu", i + 1);}
//            else count = 0;
//        }
//        
//    }
//}
//int main()
//{
//    ketquathidau list[Max];
//    int n = 0, x;
//    do
//    {
//        printf("nhap vao thao tac 1,2,3,4");
//        scanf("%d", &x);
//        while (getchar() != '\n');
//        switch (x) {
//            case 1:
//                Input(list, &n);
//                break;
//            case 2:
//                Nhapketquaban(list, n);
//                break;
//            case 3:
//                Sort(list, n);
//                break;
//            case 4:
//                sieuxathu(list, n);
//                
//            default: //printf("Ban nhap sai roi\n");
//                break;
//        }
//    } while(x != 5);
//}

