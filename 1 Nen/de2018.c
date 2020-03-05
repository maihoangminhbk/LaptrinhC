////
////  de2018.c
////  MinhDev
////
////  Created by Hoang Anh on 6/7/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "string.h"
//#include "stdlib.h"
//#define Max 200
//typedef struct
//{
//    unsigned int ClassID;
//    char Coursename[30];
//    char Room[10];
//    int Day;
//    char Slots[10];
//} Class;
//int chuyenxausangso(char *xau, int m)
//{
//    char copy[3];
//    int j, i;
//    if(m == 1)
//    {
//        for(i = 0; i < strlen(xau); i++)
//        {
//            if(xau[i] == '-') break;
//        }
//        for(j = 0; j < i; j++)
//        {
//            copy[j] = xau[j];
//        }
//        copy[j] = '\0';
//        int raso = atoi(copy);
//        return raso;
//    }
//    if(m == 2)
//    {
//        for(i = 0; i < strlen(xau); i++)
//        {
//            if(xau[i] == '-') break;
//        }
//        for(j = i + 1; j < strlen(xau); j++)
//        {
//            copy[j - i - 1] = xau[j];
//        }
//        copy[j - i - 1] = '\0';
//        int raso = atoi(copy);
//        return raso;
//    }
//    return 0;
//}
//void Input(Class list[], int *n)
//{
//    int bonus, check;
//    do
//    {
//        check = 0;
//        printf("Nhap vao so lop hoc\n");
//        scanf("%d", &bonus);
//        while(getchar() != '\n');
//        if(bonus < 1 || bonus + *n > Max) {printf("Ban nhap sai roi, nhap lai\n"); check = 1;}
//    } while(check == 1);
//    for(int i = *n; i < bonus + *n; i++)
//    {
//        printf("Nhap vao ma lop la so nguyen duong\n");
//        scanf("%d", &list[i].ClassID);
//        while(getchar() != '\n');
//        printf("Nhap vao ma phong\n");
//        gets(list[i].Room);
//        printf("Nhap vao khoa hoc\n");
//        gets(list[i].Coursename);
//        do
//        {
//            check = 0;
//            printf("Nhap ngay hoc (trong khoan 2-7)\n");
//            scanf("%d", &list[i].Day);
//            while(getchar() != '\n');
//            if(list[i].Day < 2 || list[i].Day > 7) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//        } while(check == 1);
//        //nhap vao tiet hoc
//        printf("Nhap vao tiep hoc theo khuon dang a-b\n");
//        do
//        {
//            check = 0;
//            gets(list[i].Slots);
//            if(chuyenxausangso(list[i].Slots, 1) < 1 || chuyenxausangso(list[i].Slots, 2) < 1 || chuyenxausangso(list[i].Slots, 1) > 12 || chuyenxausangso(list[i].Slots, 2) > 12) {check = 1; printf("Ban nhap sai khoang cua tiet hoc, nhap lai\n");}
//            if(chuyenxausangso(list[i].Slots, 1) > chuyenxausangso(list[i].Slots, 2)) {check = 1; printf("Ban nhap tiet truoc lon hon tiet sau, nhap lai\n");}
//        } while(check == 1);
//    }
//    *n += bonus;
//}
//void Output(Class list[],int n)
//{
//    for(int i = 0; i < n; i++)
//    {
//        printf("%-7s | %-15s | %-10s | %-5s | %-10s |\n","Ma lop", "Ten mon hoc", "Ma phong", "Thu", "Tiet hoc");
//        printf("%-7d | %-15s | %-10s | %-5d | %-10s |\n", list[i].ClassID, list[i].Coursename, list[i].Room, list[i].Day, list[i].Slots );
//    }
//    
//}
//void Search(Class list[], int n)
//{
//    char maphong[10];
//    int check = 0;
//    printf("Nhap so phong can tim\n");
//    gets(maphong);
//    for(int i = 0; i < n; i++)
//    {
//        if(strcmp(maphong, list[i].Room) == 0)
//        {
//            if(check == 0) printf("%-7s | %-15s | %-10s | %-5s | %-10s |\n","Ma lop", "Ten mon hoc", "Ma phong", "Thu", "Tiet hoc");
//             printf("%-7d | %-15s | %-10s | %-5d | %-10s |\n", list[i].ClassID, list[i].Coursename, list[i].Room, list[i].Day, list[i].Slots );
//            check = 1;
//        }
//    }
//    if(check == 0) printf("Khong tim thay phong %s\n", maphong);
//    
//}
//void Sort(Class list[], int n)
//{
//    for(int i = 0; i < n - 1; i++)
//        for(int j = i + 1; j < n; j++)
//        {
//            if(list[i].ClassID > list[j].ClassID)
//            {
//                Class tg = list[i];
//                list[i] = list[j];
//                list[j] = tg;
//            }
//        }
//    Output(list, n);
//}
//void Check(Class list[], int n)
//{
//    int check1 = 0, check2 = 0, check3 = 0;
//    for(int i = 0; i < n - 1; i++)
//        for(int j = i + 1; j < n; j++)
//        {
//            if(list[i].Day == list[j].Day) check1 = 1;
//            if(strcmp(list[i].Room, list[j].Room) == 0) check2 = 0;
//            if((chuyenxausangso(list[i].Slots, 1) > chuyenxausangso(list[j].Slots, 1) && chuyenxausangso(list[i].Slots, 1) < chuyenxausangso(list[j].Slots, 2))||(chuyenxausangso(list[j].Slots, 1) <chuyenxausangso(list[i].Slots, 2) && chuyenxausangso(list[2].Slots, 1) > chuyenxausangso(list[i].Slots, 1))) check3 = 1;
//            if(check1 == 1 && check2 == 1 && check3 == 1) printf("Hai ma %d \n %d trung nhau\n", list[i].ClassID, list[j].ClassID);
//        }
//    
//}
//int main()
//{
//    Class list[Max];
//    int x,n = 0;
//    do
//    {
//        printf("1.Input\n");
//        printf("2.Output\n");
//        printf("3.Search\n");
//        printf("4.Sort\n");
//        printf("5.Check\n");
//        printf("6.Exit\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &x);
//        while(getchar() != '\n');
//        switch (x) {
//            case 1:
//                Input(list, &n);
//                break;
//            case 2:
//                Output(list, n);
//                break;
//            case 3:
//                Search(list, n);
//                break;
//            case 4:
//                Sort(list, n);
//                break;
//            case 5:
//                Check(list, n);
//            default: if(x != 6) printf("Ban nhap sai thao tac roi\n");
//                break;
//        }
//    } while(x != 6);
//}

