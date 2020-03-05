////
////  tach ten.c
////  MinhDev
////
////  Created by Hoang Anh on 5/20/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void hamdao(char *str)
//{
//    int n = strlen(str);
//    for(int i = 0; i <(int)((n )/2); i++)
//    {
//        char tg = str[i];
//        str[i] = str[n - 1 - i];
//        str[n - 1 - i] = tg;
//    }
//}
//char* catten(char *str)
//{
//    char ten[7];
//    //printf("bat dau");
//    ten = (char *) malloc(7 * sizeof(char));
//    
//    //printf("bat dau");
//    int n = strlen(str), i;
//    for(i = n - 1; str[i] != ' '; i--)
//        ten[n - 1 - i] = str[i];
//    ten[n - 1 - i] = '\0';
//    puts(ten);
//    hamdao(ten);
//    
//    return ten;
//}
//void main()
//{
//    char str[100];
//    char *raten=NULL;
//    printf("Nhap vao ho ten\n");
//    
//    gets(str);
//    //scanf("%[^\n]",str);
//    //printf("bat dauu");
//    raten = catten(str);
//    printf("%s",raten);
//}
//
