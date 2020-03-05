////
////  tam giac pascal.c
////  MinhDev
////
////  Created by Hoang Anh on 3/22/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//int tohop(int k,int n)
//{
//    int p = 1,e = 1, q = 1;
//    for(int i = 1; i<= n; i++)
//        p = p*i;
//    for(int z = 1; z<= k; z++)
//        q = q*z;
//    for(int r = 1; r<= (n - k); r++)
//        e = e*r;
//    return (p/(e*q));
//}
//int main()
//{
//    for(int n = 0; n<=10; n++)
//    {
//        for(int k = 0; k<=n; k++)
//        {
//            if(k == 0 || k == n) printf("1 ");
//            else
//            {
//                printf("%d ",tohop(k - 1, n - 1) + tohop(k, n - 1));
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
