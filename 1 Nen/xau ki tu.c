//#include <stdio.h>
//#include "string.h"
//#include "stdlib.h"
//void daomang(char mang[])
//{
//    for(int i = 0; i < ((strlen(mang) - 1)/2); i++)
//    {
//        char tg = mang[i];
//        mang[i] = mang[strlen(mang) - 1 - i];
//        mang[strlen(mang) - 1 - i] = tg;
//    }
//
//}
//
//void *daoxau(char mang[])
//{
//    char *mangdao;
//    mangdao = (char *) calloc(100, sizeof(char));
//    char copy[20];
//    mangdao[0] = '\0';
//    copy[0] = '\0';
//
//    for(int i = (int)(strlen(mang) - 1); i >= 0; i--)
//    {
//
//        int j = 0;
//
//        while((mang[i] != ' ') && (i >= 0))
//        {
//            copy[j] = mang[i];
//            j++;
//            i--;
//
//            //printf("i =  %d\n", i);
//            //printf("j =  %d\n", j);
//            //printf("value =  %c\n", copy[j-1]);
//        }
//        copy[j] = '\0';
//        daomang(copy);
//
//        //printf("i =  %d\n", i);
//        //printf("value =  %s\n", copy);
//
//        strcat(mangdao, copy);
//    }
//    return mangdao;
//}
//
//void main()
//{
//    char mang[200],*a;
//    printf("Nhap vao mang");
//    fflush(stdin);
//    gets(mang);
//    printf("Mang: %s", mang);
//    a = daoxau(mang);
//    printf("%s",a);
//
//}

