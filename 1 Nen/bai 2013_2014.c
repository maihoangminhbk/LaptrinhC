////
////  bai 2013_2014.c
////  MinhDev
////
////  Created by Hoang Anh on 6/4/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//typedef struct
//{
//    char Name[25];
//    int Old;
//    int Score[5];
//} Game;
//void Keyword(char key[])
//{
//    int check = 0;
//    do
//    {
//        check = 0;
//        printf("Nhap vao xau gom 20 -40 ki tu khong khang trang");
//        gets(key);
//        for(int i = 0; i < strlen(key); i++)
//        {
//            if(key[i] == ' ') {check = 1; printf("Ban nhap co khong trang ban nhap sai roi nhap lai\n");}
//        }
//        if(strlen(key) < 20 || strlen(key) > 40) {check = 1; printf("ban nhap qua gioi han\n");}
//    } while (check == 1);
//}
//void Input(Game **list, int *n)
//{
//    printf("Nhap vao so nguoi choi");
//    int check = 1;
//    while(check == 1)
//    {
//        check = 0;
//        scanf("%d",n);
//        while (getchar() != '\n');
//        if(*n < 0 || *n > 5) {check = 1; printf("Ban nhap sai roi, nhap laij \n");}
//    }
//    for(int i = 0; i < *n; i++)
//    {
//        //Nhap ten
//        printf("Nhap ten nguoi choi\n");
//        gets((*list)[i].Name);
//        // nhap tuooi
//        printf("Nhap tuoi\n");
//        scanf("%d",&(*list)[i].Old);
//        while (getchar() != '\n');
//        for(int j = 0; j < 4; j++)
//        {
//            (*list)[i].Score[j] = 0;
//        }
//    }
//    
//}
//void Play(Game **list,int *n, char key[])
//{
//    char mang[4], mang2[40];
//    for(int i = 0; i < strlen(key); i++)
//    {
//        mang2[i] = '*';
//    }
//    for(int i = 0; i < *n; i++)
//    {
//        printf("Luot nguoi choi thu %d\n", i + 1);
//        for(int j = 0; j < 4; j++)
//        {
//            printf("Doan lan thu %d\n", j + 1);
//            scanf("%c", &mang[i]);
//            while (getchar() != '\n');
//            for(int k = 0; k < strlen(key); k++)
//            {
//                if(mang[i] == key[k] || (mang[i] + 32) == key[k] ) {
//                    mang2[k] = mang[i]; (*list)[i].Score[j]++;
//                }
//                printf("%c", mang2[k]);
//            }
//        
//        }
//        printf("Ban doan o chu");
//        char doan[40];
//        gets(doan);
//        if(strcmp(key, doan) == 0) (*list)[i].Score[4] = 20;
//    }
//    
//}
//void Output(Game *list,int n)
//{
//    int tong[n], i;
//    for(i = 0; i < n; i++)
//    {tong[i] = 0;
//        for(int j = 0; j < 5; j++)
//    {
//        tong[i] += list[i].Score[j];
//    }}
//    printf("%-20s | %-5s | %-5s | %-5s | %-5s | %-5s | %-5s | %-5s\n", "Ten", "Tuoi","L1","L2", "L3","L4","L5","Tong");
//    for(int i = 0; i < n; i++)
//    {
//        printf("%-20s | %-5d | %-5d | %-5d | %-5d | %-5d | %-5d | %-5d\n", list[i].Name, list[i].Old, list[i].Score[0],list[i].Score[1],list[i].Score[2], list[i].Score[3], list[i].Score[4], tong[i]);
//    }
//}
//int main()
//{
//    int n;
//    Game *list = NULL;
//    char key[40];
//    list = (Game*) calloc(5, sizeof(Game));
//    int thaotac;
//    do
//    {
//        int check = 1;
//        printf("Nhap vao thao tac");
//        while (check == 1)
//        {
//            check = 0;
//            scanf("%d", &thaotac);
//            while (getchar() != '\n');
//            if(thaotac < 1 || thaotac > 5)
//            {
//                check = 1; printf("Nhap sai thao tac, nhap lai \n");
//            }
//        }
//    switch (thaotac) {
//        case 1:
//            Keyword(key);
//            break;
//        case 2:
//            Input(&list, &n);
//            break;
//        case 3:
//            Play(&list, &n, key);
//            break;
//        case 4:
//            Output(list, n);
//            break;
//        default:
//            break;
//    }} while(thaotac != 5);
//}
//
//
//
