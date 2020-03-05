////
////  string3.c
////  MinhDev
////
////  Created by Hoang Anh on 3/23/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//int leng(char s[])
//{
//    int i = 0;
//    while(s[i] != '\0')
//        i++;
//    return i;
//}
//void daonguoc(char st[]) {
//    int i,j,len;
//    char ch;
//
//    j = len = leng(st) - 1;
//    i = 0;
//
//    while(i < j) {
//        ch = st[j];
//        st[j] = st[i];
//        st[i] = ch;
//        i++;
//        j--;
//    }
//}
////void daonguoc(char s[])
////{
////    int len = leng(s);
////    char ch;
////    int j;
////    for(int i = 0, j = len - 1; i < j; i++, j--)
////    {ch = s[i];
////        s[i] = s[j];
////    s[j] = ch;
////    }}
//void main()
//{
//    char s[] = "Toi la Mai Hoang Minh", saochep[20] , ketqua[100];
//    int i,j;
//    for(i = 0; i <= leng(s) - 1; i++)
//    {
//        for(j = 0;(s[i] != ' ' && (i <= leng(s) - 1)); j++, i++)
//        {
//            saochep[j] = s[i];
//        }
//
//        printf("%d  %d",i,j);
//        saochep[j] = '\0';
//        
//        daonguoc(saochep);
//        strcat(ketqua, saochep);
//        
//        strcat(ketqua, " ");
//        
//    }
//    printf("%s", ketqua);
//    printf("%s",s);
//}
//
//
//
