////
////  cap phat dong.c
////  MinhDev
////
////  Created by Hoang Anh on 5/10/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//
//
//#include<stdio.h>
//#include <stdlib.h>
//
//void nhapContro(int *(*a), int *n) {
//    int i;
//    
//    printf("Nhap so phan tu cua mang: ");
//    scanf("%d", n); // khong phai &n
//    *a = (int *) malloc ((*n) * sizeof(int));
//    /* *a : lấy địa chỉ của mảng a chứ không phải giá trị của a */
//    
//    for (i = 0; i < *n; i++) {
//        printf("Nhap a[%d] = ", i);
//        scanf("%d", (*a + i));
//    }
//}
//
//void xuatMang(int *a, int n) {
//    int i;
//    for (i = 0; i < n; i++) {
//        printf ("%d \t", a[i]);
//    }
//}
//
//int main() {
//    int *a, n;
//    
//    nhapContro(&a, &n); /* lấy địa chỉ của a và n */
//    xuatMang(a, n);
//    
//    return 0;
//}

