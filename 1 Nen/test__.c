////
////  test__.c
////  MinhDev
////
////  Created by Hoang Anh on 6/3/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include<stdio.h>
//#include<string.h>
//#define total 4
//typedef struct game{
//    char name[25];
//    int old;
//    int score[6];
//} game;
////menu
//void menu()
//{
//    printf("\n");
//    printf("MENU\n");
//    printf("1.Input\n");
//    printf("2.Play\n");
//    printf("3.Result\n");
//    printf("4.exit\n");
//}
////nhap xau
//void nhaps(char a[])
//{
//    int i=0,count=0;
//    printf("\nMoi ban nhap xau (tu 20 ki tu den 40 ki tu khong co dau cach):\n");
//    gets(a);
//    while(a[i]!='\0')
//    {
//        if(a[i]==' ') count++;
//        i++;
//    }
//    while(strlen(a)>40||strlen(a)<20||count!=0)
//    {
//        count=0;
//        printf("\nBan da nhap sai!\n");
//        printf("Moi ban nhap lai xau (tu 20 ki tu den 40 ki tu khong co dau cach):\n");
//        gets(a);
//        while(a[i]!='\0')
//        {
//            if(a[i]==' ') count++;
//            i++;
//        }
//    }
//    printf("\nxau ban da nhap: %s\n",a);
//}
////nhap nguoi choi
//void nhapnguoi(int n, game a[])
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        while(getchar()!='\n');
//        printf("\nMoi nhap thong tin nguoi choi thu %d:\n",i+1);
//        printf("Ho ten: "); gets(a[i].name);
//        printf("Tuoi: "); scanf("%d",&a[i].old);
//    }
//    printf("\nDanh sach nguoi choi:\n");
//    printf("%-25s%-6s\n","Ho va ten","Tuoi");
//    for(i=0;i<n;i++)
//        printf("%-25s%-6d\n",a[i].name,a[i].old);
//}
////play
//void play(char a[], char b[], char d[], int n, game c[])
//{
//    int i,j,l,dem,point;
//    char k;
//    for(i=0;i<n;i++)
//    {
//        dem=0;
//        for(j=0;j<=strlen(a);j++)
//        {
//            b[j]='*';
//            if(j==strlen(a)) b[j]='\0';
//        }
//        printf("\nO chu can doan: %s\n",b);
//        printf("\nMoi nguoi choi thu %d:\n",i+1);
//        for(j=1;j<=4;j++)
//        {
//            point=0;
//            printf("\nMoi ban doan lan thu %d: ",j);
//            scanf("%c",&k);
//            while(getchar()!='\n');
//            for(l=0;l<strlen(a);l++)
//                if(k==a[l])
//                {
//                    b[l]=k;
//                    point++;
//                }
//            c[i].score[j]=point;
//            printf("%s\n",b);
//        }
//        printf("\nMoi ban du doan o chu: ");
//        gets(d);
//        for(l=0;l<strlen(a);l++)
//        {
//            if(a[l]!=d[l]) dem=1;
//        }
//        if(dem==1)
//        {
//            printf("Rat tiec, ban da doan sai!\n");
//            c[i].score[5]=c[i].score[1]+c[i].score[2]+c[i].score[3]+c[i].score[4];
//        }
//        else
//        {
//            printf("\nChuc mung, ban da doan dung!\n");
//            printf("O chu la: %s\n",a);
//            c[i].score[5]=c[i].score[1]+c[i].score[2]+c[i].score[3]+c[i].score[4]+20;
//        }
//    }
//}
////ket qua
//void kq(int n, game a[])
//{
//    int i,j;
//    printf("\nKet qua:\n");
//    printf("%-25s%-6s%-6s%-6s%-6s%s\n","Ho va ten","L1","L2","L3","L4","Ket qua");
//    for(i=0;i<n;i++)
//    {
//        printf("%-25s",a[i].name);
//        for(j=1;j<=5;j++) printf("%-6d",a[i].score[j]);
//        printf("\n");
//    }
//}
////high score
//void hs(int n, game a[])
//{
//    int i,j,tam;
//    int b[100];
//    for(i=0;i<n;i++) b[i]=i;
//    for(i=0;i<n;i++)
//        for(j=i+1;j<n;j++)
//        {
//            if(a[i].score[5]<a[j].score[5])
//            {
//                tam=b[i];
//                b[i]=b[j];
//                b[j]=tam;
//            }
//        }
//    printf("\nDiem cao:\n");
//    printf("%-5s%-25s%-6s%-6s%-6s%-6s%s\n","STT","Ho va ten","L1","L2","L3","L4","Ket qua");
//    for(i=0;i<n;i++)
//    {
//        printf("%-5d%-25s",i+1,a[b[i]].name);
//        for(j=1;j<=5;j++) printf("%-6d",a[b[i]].score[j]);
//        printf("\n");
//    }
//}
////chuong trinh
//int main()
//{
//    int c,N,demxau;
//    char S[100], X[100], Y[100];
//    game person[total];
//    while(c!=4)
//    {
//        menu();
//        printf("Moi ban chon 1 chuc nang: ");
//        scanf("%d",&c);
//        while(c!=1&&c!=2&&c!=3&&c!=4)
//        {
//            printf("ban da nhap sai!\n");
//            printf("Moi ban chon 1 chuc nang: ");
//            scanf("%d",&c);
//        }
//        printf("\n");
//        while(getchar()!='\n');
//        switch(c)
//        {
//            case 1:
//            {
//                printf("Chuc nang 1:\n");
//                nhaps(S);
//                printf("\nMoi ban nhap so luong nguoi choi (0<N<5): ");
//                scanf("%d",&N);
//                while(N<1||N>4)
//                {
//                    printf("Ban da nhap sai!\n");
//                    printf("Moi ban nhap so luong nguoi choi (0<N<5): ");
//                    scanf("%d",&N);
//                }
//                nhapnguoi(N,person);
//            } break;
//            case 2:
//            {
//                play(S,X,Y,N,person);
//                kq(N,person);
//            } break;
//            case 3:
//            {
//                hs(N,person);
//            } break;
//            case 4:
//            {
//                printf("Thoat chuong trinh!\n");
//            }
//        }
//    }
//    
//    return 0;
//}
//
