////
////  bai tap_3.c
////  MinhDev
////
////  Created by Hoang Anh on 5/26/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include "stdlib.h"
//#include "string.h"
//typedef struct
//{
//    int ClassID;
//    char CourseName[30];
//    char Room[10];
//    int Day;
//    char slots[10];
//} Class;
//void Input(Class **list,int *n)
//{
//    printf("Nhap vao so lop");
//    scanf("%d", n);
//    int c;
//    if((c = getchar()) == '\n') printf("\n");
//    while ((*n < 0) && (*n > 200))
//    {
//        printf("Nhap lai so lop do khong thoa man");
//        scanf("%d", n);
//        int c;
//        if((c = getchar()) == '\n') printf("\n");
//    }
//    for(int i = 0; i < *n; i++)
//    {
//        //nhap ma lop
//        do
//        {
//            printf("Nhap ma lop");
//            scanf("%d", &(*list)[i].ClassID);
//            int c;
//            if((c = getchar()) == '\n') printf("\n");
//            
//        } while ((*list)[i].ClassID <= 0);
//        //Nhap khoa Name
//        printf("Nhap Coursename");
//        gets((*list)[i].CourseName);
//        //Nhap phong hoc
//        printf("Nhap phong hoc");
//        gets((*list)[i].Room);
//        // nhap ngay hoc
//        do
//        {
//            printf("Nhap ngay hoc");
//            scanf("%d", &(*list)[i].Day);
//            int c;
//            if((c = getchar()) == '\n') printf("\n");
//        } while(((*list)[i].Day < 2) || ((*list)[i].Day > 7));
//        //Nhap so tiet hoc
//        printf("Nhap so tiet hoc");
//        gets((*list)[i].slots);
//    }
//}
//void Bonus(Class **list, int *n)
//{
//    int bonus;
//    do
//    {
//        printf("Nhap vao so lop muon nhap them\n");
//        scanf("%d", &bonus);
//        int c;
//        if((c = getchar()) == '\n') printf("\n");
//    } while(bonus <= 0);
//    for(int i = *n; i < bonus + *n; i++)
//    {
//        do
//        {
//            printf("Nhap ma lop");
//            scanf("%d", &(*list)[i].ClassID);
//            int c;
//            if((c = getchar()) == '\n') printf("\n");
//            
//        } while ((*list)[i].ClassID <= 0);
//        //Nhap khoa Name
//        printf("Nhap Coursename");
//        gets((*list)[i].CourseName);
//        //Nhap phong hoc
//        printf("Nhap phong hoc");
//        gets((*list)[i].Room);
//        // nhap ngay hoc
//        do
//        {
//            printf("Nhap ngay hoc");
//            scanf("%d", &(*list)[i].Day);
//            int c;
//            if((c = getchar()) == '\n') printf("\n");
//        } while(((*list)[i].Day < 2) || ((*list)[i].Day > 7));
//        //Nhap so tiet hoc
//        printf("Nhap so tiet hoc");
//        gets((*list)[i].slots);
//    }
//    *n += bonus;
//}
//void Output(Class* list,int n)
//{
//    printf("Ma lop\t");
//    printf("Ten mon hoc\t\t");
//    printf("Ten phong\t");
//    printf("Thu\t");
//    printf("Tiet hoc\t\n");
//    for(int i = 0; i < n; i++)
//    {
//        printf("%-9d", list[i].ClassID);
//        printf("%-14s\t",list[i].CourseName);
//        printf("%-12s",list[i].Room);
//        printf("%-6d",list[i].Day);
//        printf("%-11s\n", list[i].slots);
//    }
//}
//void SearchRoom(Class *list,int n)
//{
//    char tenphong[30];
//    printf("Nhap vao phong can tim");
//    gets(tenphong);
//    for(int i = 0; i < n; i++)
//    {
//        if(strstr(list[i].Room, tenphong) != NULL) Output(&list[i], 1);
//    }
//}
//void Sapxep(Class **list,int *n)
//{
//    for(int i = 0; i < *n - 1; i++)
//        for(int j = i + 1; j < *n; j++)
//        {
//            if((*list)[i].ClassID > (*list)[j].ClassID)
//            {
//                Class tg = (*list)[i];
//                (*list)[i] = (*list)[j];
//                (*list)[j] = tg;
//            }
//        }
//}
//int hamtachxau(char *str, int n)
//{
//    //tach tiet hoc dau
//    if(n == 1)
//    {
//        char x[5];
//        int i,j;
//        for(i = 0; i < strlen(str); i++)
//        {
//            if(str[i] == '-') break;
//        }
//        for(j = 0; j < i; j++)
//        {
//            x[j] = str[j];
//        }
//        x[j] = '\0';
//        int m = atoi(x);
//        return m;
//    }
//    if(n == 2)
//    {
//        char x[5];
//        int i,j;
//        for(i = 0; i < strlen(str); i++)
//        {
//            if(str[i] == '-') break;
//        }
//        for(j = i + 1; j < strlen(str); j++)
//        {
//            x[j - i - 1] = str[j];
//        }
//        x[j] = '\0';
//        int m = atoi(x);
//        return m;
//        
//    }
//    return 0;
//}
//void kiemtratrungphong(Class *list,int n)
//{
//    for(int i = 0; i < n - 1; i++)
//        for(int j = i + 1; j < n; j++)
//        {
//            if((list[i].Day == list[j].Day) && (strcmp(list[i].Room, list[j].Room) == 0) && ( ((hamtachxau(list[i].slots, 2) >= hamtachxau(list[j].slots, 1))&& (hamtachxau(list[i].slots, 2) <= hamtachxau(list[j].slots, 2)))||((hamtachxau(list[j].slots, 2) >= hamtachxau(list[1].slots, 1)) && (hamtachxau(list[j].slots, 2) <= hamtachxau(list[i].slots, 2)))))
//                printf("%d %d", list[i].ClassID, list[j].ClassID);
//        }
//}
//int main()
//{
//    Class *list = NULL;
//    int n = 0, x, check = 0;
//    list = (Class*) calloc(200, sizeof(Class));
//    do
//    {
//        printf("Nhap vao thao tac 1,2,3,4");
//        scanf("%d", &x);
//        int c;
//        if((c = getchar()) == '\n') printf("\n");
//        switch (x) {
//            case 1:
//                Bonus(&list, &n);
//                break;
//            case 2:
//                Output(list, n);
//                break;
//            //case 3:
//                //Bonus(&list, &n);
//                //break;
//            case 4:
//                SearchRoom(list, n);
//                break;
//            case 5:
//            {
//                Sapxep(&list, &n);
//                Output(list, n);
//            }
//                break;
//            case 6: kiemtratrungphong(list, n);
//                break;
//            default: check = 1;
//                break;
//        }
//    } while(check == 0);
//    return 0;
//}
//
//
//
//
//
//
