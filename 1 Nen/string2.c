////
////  string2.c
////  MinhDev
////
////  Created by Hoang Anh on 3/23/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//int string_length(char s[]) {
//    int i=0;
//    
//    while(s[i]!='\0')
//        i++;
//    
//    return i;
//}
//
//void string_reverse(char st[]) {
//    int i,j,len;
//    char ch;
//    
//    j = len = string_length(st) - 1;
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
//
//int main (void)
//{
//    char line[] = "Toi la Minh";
//    char reverse[100] = "", temp[20];
//    int i, j, n;
//    printf("%s",line);
//    for(i= 0; i< 5; i++)
//        temp[i] = line[i] ;
//    printf("%s",temp);
//    strcat(temp, line);
//    printf("%s",line);
//    //    n = string_length(line);
////
////    for(i = n-1; i >= 0; --i)
////    {
////
////        for(j = 0; i >= 0 && line[i] != ' '; --i,++j)
////            temp[j] = line[i];
////
////        temp[j] = '\0';
////        printf("%s",temp);
////
////
////    }
////    printf("%s",temp);
//    return 0;
//    
//}

