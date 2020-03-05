////
////  test2_file.c
////  MinhDev
////
////  Created by Hoang Anh on 10/3/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//typedef struct
//{
//    char name[31];
//    char phone[11];
//    char email[31];
//}PHONEBOOK;
//
//PHONEBOOK* lstContacts = NULL;
//int nContacts = 0;
//
//int NhapTuBanPhim(PHONEBOOK** pb)
//{
//    int n = 0;
//    printf("So luong: ");
//    scanf("%d",&n);
//    PHONEBOOK* tmp = (PHONEBOOK*)calloc(n, sizeof(PHONEBOOK));
//    for (int i = 0;i < n;i++)
//    {
//        fpurge(stdin);
//        printf("Ten: ");
//        gets(tmp[i].name);
//        fpurge(stdin);
//        printf("Dien thoai: ");
//        gets(tmp[i].phone);
//        fpurge(stdin);
//        printf("Email: ");
//        gets(tmp[i].email);
//    }
//    *pb = tmp;
//    return n;
//}
//
//void GhiFile(char* fname)
//{
//    FILE* f = fopen(fname,"w+");
//    if(f == NULL) printf("Mo file ko thanh cong\n");
//    if (nContacts > 0)
//    {
//        fwrite(lstContacts, sizeof(PHONEBOOK), nContacts, f);
//    }
//    fclose(f);
//}
//
//void DocFile(char* fname)
//{
//    FILE* f = fopen(fname,"r");
//    fseek(f, 0, SEEK_END);
//    long size = ftell(f);
//    nContacts = (int) size / sizeof(PHONEBOOK);
//    fseek(f, 0, SEEK_SET);
//    lstContacts = (PHONEBOOK*)calloc(nContacts, sizeof(PHONEBOOK));
//    fread(lstContacts, sizeof(PHONEBOOK), nContacts, f);
//    printf("%s\n", lstContacts);
//    fclose(f);
//}
//
//int main()
//{
//    nContacts = NhapTuBanPhim(&lstContacts);
//    printf("So luong da nhap la: %d\n", nContacts);
//    
//    GhiFile("a.txt");
//    DocFile("a.txt");
//    
//    return  0;
//}
//
