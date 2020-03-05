////
////  delete space.c
////  MinhDev
////
////  Created by Hoang Anh on 3/20/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s[50] = "toi   la   minh";
//    printf("Enter a string: ");
//    
//    
//    // delete all space at start of string
//    while( s[0] == ' ' ) strcpy(&s[0], &s[1]);
//    
//    // delete all space at end of string
//    while( s[ strlen(s)-1 ] == ' ') s[ strlen(s)-1 ] = '\0';
//    
//    // delete all space between two word
//    
//    int i;
//    for(i = 0; i < strlen(s); i++)
//    {
//        if( s[i] == ' ' && s[i+1] == ' ')
//        {
//            strcpy(&s[i], &s[i+1]);
//            i--; // why???
//        }
//    }
//    
//    printf("s=%s.\n", s);
//    
//    return 0;
//}
//
