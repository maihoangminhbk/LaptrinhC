////
////  bai_thi_cuoi_ki.c
////  MinhDev
////
////  Created by Hoang Anh on 6/8/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define Max 100
//void matran(int (*matran)[100])
//{
//    int check, check1 = 0, check2 = 0, n;
//    printf("Nhap vao so nguyen khong am la bac cua ma tran\n");
//    do
//    {
//        check = 0;
//        scanf("%d", &n);
//        if(n < 0) {check = 1; printf("Ban nhap sai roi, nhap lai\n");}
//    } while(check == 1);
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < n; j++)
//        {
//            printf("Nhap vao phan tu hang %d cot %d\n", i + 1, j + 1);
//            scanf("%d", &matran[i][j]);
//            while(getchar() != '\n');
//        }
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < n; j++)
//        {
//            printf("%d\t", matran[i][j]);
//        }
//        printf("\n");
//    }
//    for(int i = 0; i < n; i++)
//        for(int j = 0; j < n; j++)
//        {
//            if(i == j && matran[i][j] == 1) check1 = 1;
//            if(i != j && matran[i][j] == 0) check2 = 1;
//        }
//    if(check2 == 1 && check2 == 1) printf("Co\n");
//    else printf("Khong\n");
//}
//void tamgiac(int n, char x)
//{
//    int check;
//    printf("Nhap chieu cao cua tam giac\n");
//    do
//    {
//        check = 0;
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        if(n <= 0) { printf("Ban nhap sai roi, nhap lai\n"); check = 1;}
//    } while(check == 1);
//    printf("Nhap vao tam giac xuoi (X) hay nguoc (N)\n");
//    do
//    {
//        check = 0;
//        scanf("%c", &x);
//        while(getchar() != '\n');
//        if(x != 'X' && x != 'N') {printf("Ban nhap sai roi, nhap lai\n"); check = 1;}
//        
//    } while(check == 1);
//    if(x == 'X')
//    {
//    for(int i = 1; i <= n; i++)
//    {
//        for(int j = 1; j <= (2*n - 1); j++)
//        {if(j > (n - i) && j < (n + i)) printf("*");
//        else printf(" ");
//        }
//        printf("\n");
//    }
//    }
//    if(x == 'N')
//    {
//        for(int i = n; i >= 1; i--)
//        {
//            for(int j = 1;j <= (2 * n - 1); j++)
//            {
//                if(j >= (n - i + 1) && j <= (n + i -1))
//                   printf("*");
//                   else printf(" ");
//            }
//                   printf("\n");
//        }
//    }
//    
//    
//    
//}
//void chuyendoiso()
//{
//    int nhapso;
//    printf("Nhap so dien thoai vao\n");
//    scanf("%d", &nhapso);
//    int dem = 0;
//    int check;
//    check = nhapso;
//    while(check != 0)
//    {
//        check = check / 10;
//        dem ++;
//    }
//    
//
//    
//}
//int main()
//{
//    int x,n;
//    char c;
//    char d[100];
//    int matrannhap[Max][Max];
//    do
//    {
//        printf("1.Matran\n");
//        printf("2.Tam giac\n");
//        printf("3.Chuyen doi so\n");
//        printf("4.Phan so\n");
//        printf("Nhap vao thao tac 1,2,3,4,5\n");
//        scanf("%d", &x);
//        while(getchar() != '\n');
//        switch (x) {
//            case 1:
//                matran(matrannhap);
//                break;
//            case 2:
//                tamgiac(n, c);
//                break;
//            case 3:
//                chuyendoiso(d);
//                break;
//            default:
//                break;
//        }
//    } while(x != 5);
//}
//
