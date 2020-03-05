////
////  bai tap 1.c
////  MinhDev
////
////  Created by Hoang Anh on 5/25/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include "stdlib.h"
////BAI TAP VE NHAP NHA HANG
//struct Restaurant
//{
//    char name[30];
//    char description[300];
//    int rating;
//    char address[100];
//};
//void InputRestaurant(struct Restaurant **list,int *n)
//{
//    do
//    {
//        printf("Nhap vao so luong nha hang\n");
//        scanf("%d",n);
//        int c;
//        if ((c = getchar()) == '\n')
//            printf("\n");
//        fflush(stdin);
//    }
//    while (n <= 0);
//    (*list) = (struct Restaurant*) calloc(*n, sizeof(struct Restaurant));
//    for(int i = 0; i < *n; i++)
//    {
//        printf("Nhap ten nha hang %d\n",i+1);
//        gets((*list)[i].name);
//        printf("Nhap mo ta\n");
//        gets((*list)[i].description);
//        printf("nhap rating\n");
//        scanf("%d",&(*list)[i].rating);
//        int c;
//        if ((c = getchar()) == '\n')
//            printf("\n");
//        fflush(stdin);
//        printf("Nhap dia chi\n");
//        gets((*list)[i].address);
//        
//    }
//}
//void BonusRestaurant(struct Restaurant** list,int *n)
//{
//    int bonus;
//    printf("Nhap vao so cua hang can nhap them");
//    scanf("%d", &bonus);
//    int c;
//    if ((c = getchar()) == '\n')
//        printf("\n");
//    for(int i = *n; i < *n + bonus; i++)
//    {
//        printf("Nhap ten nha hang %d\n",i);
//        gets((*list)[i].name);
//        printf("Nhap mo ta\n");
//        gets((*list)[i].description);
//        printf("nhap rating\n");
//        scanf("%d",&(*list)[i].rating);
//        int c;
//        if ((c = getchar()) == '\n')
//            printf("\n");
//        fflush(stdin);
//        printf("Nhap dia chi\n");
//        gets((*list)[i].address);
//    }
//    *n += bonus;
//}
//void OutputRestaurant(struct Restaurant *list, int *n)
//{
//    for(int i = 0; i < *n; i++)
//    {
//        printf("ten cua hang %d la\n",i+1);
//        puts(list[i].name);
//        printf("ten dia chi la\n");
//        puts(list[i].address);
//        printf("diem danh gia\n");
//        printf("%d",list[i].rating);
//    }
//}
//void Searchname(struct Restaurant *list, int *n)
//{
//    char namesearch[30];
//    printf("Nhap ten can tim");
//    gets(namesearch);
//    for(int i = 0; i < *n; i++)
//    {
//        if(strcasestr(list[i].name, namesearch) != NULL)
//        {
//            int n = 1;
//            OutputRestaurant(&list[i], &n);
//    }
//    
//    
//    }}
//void Sapxep(struct Restaurant **list, int *n)
//{
//    (*list) = (struct Restaurant*) calloc(*n, sizeof(struct Restaurant));
//    for(int i = 0; i < *n - 1; i++)
//        for(int j = i + 1; j < *n; j++)
//        {
//            if((*list)[i].rating < (*list)[j].rating)
//            {
//                printf("bat dau");
//                struct Restaurant tg = (*list)[i];
//               (*list)[i] = (*list)[j];
//               (*list)[j] = tg;
//            }
//            else printf("Tiep");
//        }
//}
//int main()
//{
//    struct Restaurant *list = NULL;
//    int n,x,check = 0;
//    do
//    {
//        x = 6;
//        printf("Nhap vao thao tac 1,2,3,4,5\n");
//        scanf("%d", &x);
//        int c;
//        if ((c = getchar()) == '\n')
//            printf("\n");
//        if((x == 1) && (check != 0)) BonusRestaurant(&list, &n);
//        if((x == 1) && (check == 0))
//        {
//            InputRestaurant(&list, &n);
//            check = 1;
//        }
//        
//        if(x == 2) OutputRestaurant(list, &n);
//        if(x == 3) Searchname(list, &n);
//        if(x == 4)
//        {
//            Sapxep(list, &n);
//            OutputRestaurant(list, &n);
//        }
//    }
//    while (x != 0);
//    
//    return 0;
//}
//
//
