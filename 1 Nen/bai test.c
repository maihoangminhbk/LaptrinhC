//#include <stdio.h>
//
//const int ARR_X = 3;
//const int ARR_Y = 4;
//
//// dinh nghia prototype
//void displayNumbers(int num[ARR_X][ARR_Y]);
//
//int main() {
//    int num[ARR_X][ARR_Y], i, j;
//    printf("Nhap mang num :\n");
//    for (i = 0; i < ARR_X; i++) {
//        for (j = 0; j < ARR_Y; j++) {
//            printf("num[%d][%d]=", i, j);
//            scanf("%d", &num[i][j]);
//        }
//    }
//    // truyen mang da chieu vao ham displayNumbers
//    displayNumbers(num);
//    return 0;
//}
//
///*
// * hien thi mang 2 chieu
// */
//void displayNumbers(int num[ARR_X][ARR_Y]) {
//    int i, j;
//    printf("Mang 2 chieu:\n");
//    for (i = 0; i < ARR_X; i++) {
//        for (j = 0; j < ARR_Y; j++) {
//            printf("%d ", num[i][j]);
//        }
//        printf("\n");
//    }
//}
//
