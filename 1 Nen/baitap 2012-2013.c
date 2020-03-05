////
////  baitap 2012-2013.c
////  MinhDev
////
////  Created by Hoang Anh on 6/4/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "string.h"
//typedef struct
//{
//    char name[25];
//    int mau;
//    int Score;
//} nguoichoi;
//char *chuyensangmau(int n)
//{
//    if(n == 0) return "Xanh\t";
//    if(n == 1) return "Do\t";
//    if(n == 2) return "Vang\t";
//    return "\n";
//}
//void Output(int x[][3])
//{
//    for(int i = 0; i < 5; i++)
//    {
//        for(int j = 0; j < 3; j++)
//        {
//            printf("%s",chuyensangmau(x[i][j]));
//        }
//        printf("\n");
//    }
//}
//void Input(int (*x)[3])
//{
//    for(int i = 0; i < 5; i++)
//    {
//        for(int j = 0; j < 3; j++)
//        {
//            printf("Nhap vao hang %d cot %d ",i + 1, j + 1);
//            int check = 0;
//            do
//            {
//                check = 0;
//                scanf("%d", &x[i][j]);
//                //printf("\n");
//                while(getchar() != '\n');
//                if(x[i][j] < 0 || x[i][j] > 2) { check = 1; printf("Ban nhap tu 0-2");}
//            } while(check == 1);
//        }
//    }
//    Output(x);
//}
//void change(int (*x)[3])
//{
//    int mangthay[3];
//    for(int i = 0; i < 5; i++)
//    {
//        printf("Nhap thay doi cho hang %d (nhap 3 so ngan cach nhau boi space)", i + 1);
//        int check = 0;
//        do
//        {
//            check = 0;
//            scanf("%d %d %d", &mangthay[0],&mangthay[1],&mangthay[2]);
//            if((mangthay[0] == x[i][0]) && (mangthay[1] == x[i][1]) && (mangthay[2] == x[i][2]))
//            {
//                check = 1; printf("Ban nhap bi trung voi cu, nhap lai");
//            }
//            for(int j = 0; j < 3; j ++)
//            {
//                if(mangthay[j] < 0 || mangthay[j] > 2) {check = 1; printf("Ban nhap sai roi");}
//            }
//        } while(check == 1);
//        
//    }
//    Output(x);
//}
//void nhapnguoichoi(nguoichoi list[])
//{
//    for(int i = 0; i < 4; i++)
//    {
//        printf("Nhap ten nguoi choi thu %d\n", i + 1);
//        gets(list[i].name);
//        int j = 0;
//        //while(list[i].name[j] != '\n')
//        {
//            if(list[i].name[j] == ' ')
//            {
//                if(list[i].name[j + 1] >= 91) list[i].name[j + 1] -= 32;
//            }
//        }
//        printf("Nhap mau nguoi choi thu %d\n", i + 1);
//        int check = 0;
//        do
//        {
//            check = 0;
//            scanf("%d", &list[i].mau);
//            while(getchar() != '\n');
//            if(list[i].mau < 0 || list[i].mau > 2) {check = 1; printf("Ban nhap sai roi, nhap lai");}
//        } while (check == 1);
//        list[i].Score = 0;
//    }
//}
//void Play(nguoichoi list[], int (*x)[3])
//{
//    int nhapso;
//    for(int j = 0; j < 4; j++)
//    {
//        int check = 1, i = 0;
//        printf("Nguoi choi thu %d choi\n", j + 1);
//        while(check == 1 && i < 5)
//        {
//            printf("Hang thu %d, moi ban nhap so\n", i + 1);
//            scanf("%d", &nhapso);
//            while(getchar() != '\n');
//            if(nhapso == list[j].mau)
//            {
//                printf("Ban nhap dung roi\n");
//                list[j].Score++;
//                i++;
//            }
//            else {check = 0; printf("Ban dung lai roi\n");}
//        }
//    }
//}
//void Inranguoichoi(nguoichoi list[])
//{
//    printf("%-25s | %-10s | %-7s\n", "Ten nguoi choi", "Mau", "Score");
//    for(int i = 0; i < 4; i++)
//    {
//        
//        char *mang = chuyensangmau(list[i].mau);
//        printf("%-25s | %-10s | %-7d\n", list[i].name,mang, list[i].Score);
//    }
//    
//}
//int main()
//{
//    int key[5][3];
//    int thaotac;
//    nguoichoi list[4];
//    do
//    {
//        printf("Nhap vao thao tac 1,2,3,4");
//        scanf("%d", &thaotac);
//        while (getchar() != '\n');
//        switch (thaotac) {
//            case 1:
//                Input(key);
//                break;
//            case 2:
//                change(key);
//                break;
//            case 3:
//                nhapnguoichoi(list);
//                Play(list, key);
//                break;
//            case 4:
//                Inranguoichoi(list);
//            default: printf("Ban nhap sai roi, nhap lai");
//                break;
//        }
//    } while(thaotac != 5);
//}
//
//
//
//
