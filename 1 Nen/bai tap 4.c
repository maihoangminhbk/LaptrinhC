////
////  bai tap 4.c
////  MinhDev
////
////  Created by Hoang Anh on 6/5/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "string.h"
//#define total 6
//typedef struct
//{
//    char Name[25];
//    int Old;
//    float Suggest[6];
//} Result;
//void Input(Result list[], float *N, int *m)
//{
//    printf("Nhap vao so bi mat");
//    int check;
//    do
//    {
//        check = 0;
//        scanf("%f", N);
//        while(getchar() != '\n');
//        if(*N < 0 || *N > 100) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//    } while(check == 1);
//    printf("Nhap vao so nguoi choi");
//    do
//    {
//        check = 0;
//        scanf("%d", m);
//        while(getchar() != '\n');
//        if(*m < 0 || *m > total) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//    } while(check == 1);
//    for(int i = 0; i < *m; i++)
//    {
//        printf("Nhap ten\n");
//        do
//        {
//            check = 1;
//            gets(list[i].Name);
//            for(int j = 0; j < strlen(list[i].Name); j++)
//            {
//                if(list[i].Name[j] == ' ') check = 0;
//            }
//        } while(check == 1);
//        printf("Nhap tuoi\n");
//        do
//        {
//            check = 0;
//            scanf("%d", &list[i].Old);
//            while(getchar() != '\n');
//            if(list[i].Old < 0) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//        } while(check == 1);
//        
//    }
//    for(int i = 0; i < *m; i++)
//    {
//        printf("\nNguoi choi thu %d la\t", i + 1);
//        printf("%s", list[i].Name);
//    }
//}
//void Play(Result *list, int N, int m)
//{
//    for(int i = 0; i < m; i++)
//    {
//        printf("Luot choi nguoi thu %d\n", i + 1);
//        for(int j = 0; j < 6; j++)
//        {
//            printf("Ban doan lan %d\n", j + 1);
//            scanf("%f", &list[i].Suggest[j]);
//            while(getchar() != '\n');
//            if(list[i].Suggest[j] > N) printf("Ban nhap lon hon so can tim roi\n");
//            if(list[i].Suggest[j] < N) printf("Ban nhap nho hon so can tim roi\n");
//            if(list[i].Suggest[j] == N) {printf("Ban nhap lon hon so can tim roi\n"); break; }
//        }
//    }
//    printf("%-20s | %-6s | %-6s | %-6s | %-6s | %-6s | %-6s |","Ho va ten", "L1","L2","L3","L4","L5","L6");
//    for(int i = 0; i < m; i++)
//    {
//        printf("%-20s | %-6g | %-6g | %-6g | %-6g | %-6g | %-6g\n", list[i].Name, list[i].Suggest[0], list[i].Suggest[1], list[i].Suggest[2], list[i].Suggest[3], list[i].Suggest[4], list[i].Suggest[5]);
//    }
//}
//void Compare(Result *list,int N, int m)
//{
//    float dosailech[m], check = 0;
//    for(int i = 0; i < m; i++)
//        dosailech[i] = 100;
//    for(int i = 0; i < m; i++)
//    {
//        for(int j = 0; j < 6; j++)
//        {
//            check = (list[i].Suggest[j] / N) - 1;
//            if(check < 0) check = -check;
//            if(dosailech[i] > check) dosailech[i] = check;
//        }
//    }
//    for(int i = 0; i < m - 1; i++)
//        for(int j = 0; j < m; j++)
//        {
//            if(dosailech[i] < dosailech[j])
//            {
//                Result tg = list[i];
//                list[i] = list[j];
//                list[j] = tg;
//                
//            }
//        }
//    printf("%-25s | %-20s\n", "Ho va ten", "do sai lech");
//    for(int i = 0; i < m; i++)
//    {
//        printf("%-25s | %-25g\n", list[i].Name, dosailech[i]);
//    }
//    
//}
//int main()
//{
//    Result Person[total];
//    int m,x;
//    float N;
//    do
//    {
//        printf("Nhap vao thao tac 1,2,3,4");
//        scanf("%d", &x);
//        while(getchar() != '\n');
//        switch (x) {
//            case 1:
//                Input(Person, &N, &m);
//                break;
//            case 2:
//                Play(Person, N, m);
//                break;
//            case 3:
//                Compare(Person, N, m);
//            default:
//                break;
//        }
//    } while(x != 5);
//}
//
