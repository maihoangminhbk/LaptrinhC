////
////  de k54.c
////  MinhDev
////
////  Created by Hoang Anh on 6/6/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//typedef struct
//{
//    char cauhoi[100];
//    char pa1[25];
//    char pa2[25];
//    char pa3[25];
//    int dapan;
//} qt_type;
//void Input(qt_type *list)
//{
//    //cau hoi 1
//    strcpy(list[0].cauhoi, "Ai la vua bong da\n");
//    strcpy(list[0].pa1,"Pele");
//    strcpy(list[0].pa2,"Hoang Minh");
//    strcpy(list[0].pa3,"Anh");
//    list[0].dapan = 1;
//    //cau hoi 2
//    strcpy(list[1].cauhoi, "Tran chung ket C1 2010 duoc to chuc tai\n");
//    strcpy(list[1].pa1, "Viet Nam");
//    strcpy(list[1].pa2, "Spain");
//    strcpy(list[1].pa3, "Lao");
//    list[1].dapan = 2;
//    //cau hoi 3
//    strcpy(list[2].cauhoi, "Doi tuyen chu nha World Cup 2010");
//    strcpy(list[2].pa1, "Anh");
//    strcpy(list[2].pa2, "Nam Phi");
//    strcpy(list[2].pa3, "Phap");
//    list[2].dapan = 2;
//}
//void menu()
//{
//    printf("1.Input\n");
//    printf("2.In cau hoi\n");
//    printf("3.Dao dap an\n");
//    printf("4.Thuc hien choi\n");
//    printf("5.Thoat chuong trinh");
//}
//void Ouput(qt_type *list)
//{
//    int check, cauhoi;
//    do
//    {
//        check = 0;
//        printf("Nhap vao cau hoi muon in\n");
//        scanf("%d",&cauhoi);
//        while(getchar() != '\n');
//        if(cauhoi < 1 || cauhoi > 3) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//        for(int i = 0; i < 3; i++)
//        {
//            if(cauhoi == i + 1)
//            {
//                printf("%s\n", list[i].cauhoi);
//                printf("dap an 1: %s\n", list[i].pa1);
//                printf("dap an 2: %s\n", list[i].pa2);
//                printf("dap an 3: %s\n", list[i].pa3);
//            }
//                   
//        }
//    } while(check == 1);
//}
//void daodapan(qt_type list[])
//{
//    int cauhoi, check, check2 = 0, dapanmoi = 0;
//    do
//    {
//        check = 0;
//        printf("Nhap vao cau hoi muon sua\n");
//        scanf("%d", &cauhoi);
//        while(getchar() != '\n');
//        if(cauhoi < 1 || cauhoi > 3) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//        //nhap dap an moi
//        if(check == 0)
//        {
//        do
//        {
//            check2 = 0;
//            printf("Moi ban nhap dap an moi\n");
//            scanf("%d", &dapanmoi);
//            while(getchar() != '\n');
//            if(dapanmoi < 1 || dapanmoi > 3|| dapanmoi == list[cauhoi - 1].dapan) {check2 = 1;printf("Ban nhap sai roi, nhap lai\n");}
//            
//        } while(check2 == 1);
//        }
//        if(check2 == 0)
//        {
//            int i = dapanmoi - 1;
//            printf("%s\n", list[i].cauhoi);
//            printf("dap an 1: %s\n", list[i].pa1);
//            printf("dap an 2: %s\n", list[i].pa2);
//            printf("dap an 3: %s\n", list[i].pa3);
//            
//        }
//    } while(check == 1);
//}
//int main()
//{
//    qt_type list[20];
//    int x;
//    do
//    {
//        menu();
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &x);
//        while(getchar() != '\n');
//        switch (x) {
//            case 1:
//                Input(list);
//                break;
//            case 2:
//                Ouput(list);
//                break;
//            case 3:
//                daodapan(list);
//                break;
//            default: printf("Ban nhap sai roi\n");
//                break;
//        }
//        
//    } while(x != 5);
//}
//
