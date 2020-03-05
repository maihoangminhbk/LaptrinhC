////
////  danh sach moc noi.c
////  MinhDev
////
////  Created by Hoang Anh on 9/19/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct PointerType
//{
//    long Inf;
//    struct PointerType *Next;
//} PointerType;
//PointerType *Insert_Middle (PointerType *Pred, long X)
//{
//    PointerType *TempNode;
//    TempNode = (PointerType *) malloc(sizeof(PointerType));
//    TempNode -> Inf = X;
//    TempNode -> Next = Pred -> Next;
//    Pred -> Next = TempNode;
//    return TempNode;
//}
//long Delete (PointerType *Pred)
//{
//    long X;
//    X = Pred -> Next -> Inf;
//    Pred -> Next = Pred -> Next -> Next;
//    
//    return X;
//}
//PointerType *Insert_ToHead (PointerType *First, long X)
//{
//    PointerType *TempNode;
//    TempNode = (PointerType *) malloc(sizeof(PointerType));
//    TempNode -> Inf = X;
//    TempNode -> Next = First;
//    printf("%ld", First -> Inf);
//    First -> Inf = 10;
//    First = TempNode;
//    
//    printf("%ld", First -> Inf);
//    return First;
//}
//int main()
//{
//    PointerType *S1, *S2 = NULL;
//    S1 -> Inf = 20;
//    //S1 = Insert_ToHead(S1, 1);
//    S2 = Insert_ToHead(S1, 2);
//    printf("%ld", S1 -> Inf);
//    return 0;
//}
//
//
//
//
//
