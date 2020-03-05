////
////  con tro 2.c
////  MinhDev
////
////  Created by Hoang Anh on 5/5/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h> /* thu vien cho srand va rand */
//
///* ham de tao va tra ve so ngau nhien. */
//int * taosoNH( )
//{
//    static int  r[10];
//    int i;
//    
//    
//    srand( (unsigned)time( NULL ) );
//    for ( i = 0; i < 10; ++i)
//    {
//        r[i] = rand();
//        printf("%d\n", r[i] );
//    }
//    
//    return r;
//}
//
///* ham main de goi ham da dinh nghia o tren */
//int main ()
//{
//    /* mot con tro toi mot so nguyen */
//    int *p;
//    int i;
//    
//    p = taosoNH();
//    for ( i = 0; i < 10; i++ )
//    {
//        printf("*(p + [%d]) : %d\n", i, *(p + i) );
//    }
//    
//    printf("\n===========================\n");
//    printf("VietJack chuc cac ban hoc tot! \n");
//    
//    return 0;
//}
//
