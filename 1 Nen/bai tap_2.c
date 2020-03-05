////
////  bai tap_2.c
////  MinhDev
////
////  Created by Hoang Anh on 5/26/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//#include "math.h"
//
//
//typedef struct
//{
//    int Id;
//    char name[30];
//    int x,y;
//    int r;
//} station;
//void Input(station **list, int *n)
//{
//    do
//    {
//        printf("Nhap vao so tram thu phi");
//        scanf("%d", n);
//        int c;
//        if((c =getchar()) == '\n') printf(" ");
//    } while((*n < 0) || (*n > 50));
//    for(int i = 0; i < *n; i++)
//    {
//        //Nhap ID
//        printf("Nhap ID");
//        int check;
//        do
//        {
//        check = 0;
//        scanf("%d", &(*list)[i].Id);
//        int c;
//        if((c =getchar()) == '\n') printf(" ");
//        for(int j = -1; j < i; j++)
//        {
//            check = 0;
//            if((*list)[i].Id == (*list)[j].Id) { check = 1; printf("ID bi trung, nhap lai");}
//        }
//        } while (((*list)[i].Id <= 0) || check == 1);
//        //Nhap ten nguoi quan li
//        printf("Nhap ten nguoi quan li");
//        gets((*list)[i].name);
//        //Toa do tram
//        printf("Nhap toa do tram");
//        scanf("%d %d",&(*list)[i].x,&(*list)[i].y);
//        int c;
//        if((c =getchar()) == '\n') printf(" ");
//        //Nhap ban kinh
//        do
//        {
//            printf("Nhap ban kinh la so duong");
//            scanf("%d", &(*list)[i].r);
//        } while ((*list)[i].r <= 0);
//        
//    }
//}
//float space(int x,int y)
//{
//    float khoangcach = sqrtf(x * x + y * y);
//    return khoangcach;
//}
//void Output(station *list, int n)
//{
//    printf("%-6s| %-30s |%-10s| %-10s | %-15s\n","ID"," ten truong tram"," Toa do"," ban kinh","khoang cach");
//    for(int i = 0; i < n; i++)
//    {
//        printf("%-5d | %-30s | %-10d %d | %-10d | %-15f\n ", (list)[i].Id, (list)[i].name, (list)[i].x, (list)[i].y, (list)[i].r,space((list)[i].x, (list)[i].y) );
//}
//}
//void Bonus(station **list, int *n)
//{
//    int bonus;
//    do
//    {
//        printf("Nhap so tram them");
//        scanf("%d", &bonus);
//        int c;
//        if((c =getchar()) == '\n') printf(" ");
//    } while((bonus <= 0) || (bonus + *n > 50));
//    //*list = (station*) calloc(*n + bonus, sizeof(station));
//    for(int i = *n; i < bonus + *n; i++)
//    {
//        //Nhap ID
//        printf("Nhap ID");
//        int check;
//        do
//        {
//            check = 0;
//            scanf("%d", &(*list)[i].Id);
//            int c;
//            if((c =getchar()) == '\n') printf(" ");
//            for(int j = 0; j < i; j++)
//            {
//                if((*list)[i].Id == (*list)[j].Id)
//                {
//                    check = 1; printf("ID bi trung, nhap lai");
//                }
//            }
//        } while (((*list)[i].Id <= 0) || check == 1);
//        //Nhap ten nguoi quan li
//        printf("Nhap ten nguoi quan li");
//        gets((*list)[i].name);
//        //Toa do tram
//        printf("Nhap toa do tram");
//        scanf("%d %d",&(*list)[i].x,&(*list)[i].y);
//        int c;
//        if((c =getchar()) == '\n') printf(" ");
//        //Nhap ban kinh
//        do
//        {
//            printf("Nhap ban kinh la so duong");
//            scanf("%d", &(*list)[i].r);
//        } while ((*list)[i].r <= 0);
//        
//}
//    *n += bonus;
//}
//
//void sapxep(station **list, int *n)
//{
//    for(int i = 0; i < *n - 1; i++)
//        for(int j = i; j < *n; j++)
//        {
//            if(space((*list)[i].x, (*list)[i].y) < space((*list)[j].x, (*list)[j].y))
//            {
//                printf("co dung ko\n");
//                station tg = (*list)[i];
//                (*list)[i] = (*list)[j];
//                (*list)[j] = tg;
//            }
//        }
//    
//    
//        printf("%-4s | %-30s | %-10s | %-10s | %-15s\n","ID"," ten truong tram"," Toa do"," ban kinh","khoang cach");
//        for(int i = 0; i < *n; i++)
//        {
//            printf("%-5d | %-30s | %-6d %d | %-10d | %-15f\n ", (*list)[i].Id, (*list)[i].name, (*list)[i].x, (*list)[i].y, (*list)[i].r,space((*list)[i].x, (*list)[i].y) );
////            printf("%-9s\t", (*list)[i].name);
////            printf("%d %d\t", (*list)[i].x, (*list)[i].y);
////            printf("%d\t", (*list)[i].r);
////            printf("%.2f\t\n", space((*list)[i].x, (*list)[i].y));
//        }
//    
//}
//int main()
//{
//    int n,x;
//    station *list;
//    list = (station*) calloc(5, sizeof(station));
//    int isEnd = 0;
//    do
//    {
//        printf("Nhap vao thao tac 1,2,3,4,5\n");
//        scanf("%d", &x);
//        int c;
//        if((c =getchar()) == '\n') printf("\n");
//        switch (x)
//        {
//            case 1:
//                Input(&list, &n);
//                break;
//            case 2:
//                Output(list, n);
//                break;
//            case 3:
//                Bonus(&list, &n);
//                break;
//            case 4:
//                sapxep(&list, &n);
//                break;
//            case 5:
//                isEnd = 1;
//                break;
//            default:
//                break;
//        }
////        if(x == 1) Input(&list, &n);
////        if(x == 2) Output(list, n);
////        if(x == 3) Bonus(&list, &n);
////        if(x == 4) sapxep(&list, &n);
//    } while(isEnd != 1); // isEnd == 0
//    return 0;
//}
//
//
