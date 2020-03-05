//#include <stdio.h>
//#include <string.h>
////#include <malloc.h>
//#include <stdlib.h>
//typedef struct
//{
//    char name[31];
//    char phone[21];
//    char email[61];
//} CONTACT;
//
//CONTACT* contactDIC;
//
//int hash(char* email)
//{
//    int sum = 0;
//    for (int i = 0;i < strlen(email);i++)
//    {
//        sum += email[i];
//    }
//    return sum % 100;
//}
//
//int hash2(char* email){
//    int sum = 0;
//    for (int i = 0;i < strlen(email);i++)
//    {
//        sum += email[i];
//    }
//    return 97 - (sum % 97);
//}
//
//void init()
//{
//    contactDIC = (CONTACT*)calloc(100, sizeof(CONTACT));
//}
//
//void release()
//{
//    free(contactDIC);
//    contactDIC = NULL;
//}
//
//int isavailable(int i)
//{
//    return strlen(contactDIC[i].name) == 0;
//}
//
//int isfull()
//{
//    for (int i = 0;i < 100;i++)
//    {
//        if (isavailable(i))
//            return 0;
//    }
//    return 1;
//}
//
//void insert(CONTACT c)
//{
//    if (!isfull())
//    {
//        int i = hash(c.email);
//        if (isavailable(i))
//        {
//            contactDIC[i] = c;
//        }else
//        {
//            int j = 1;
//            while (!isavailable((i + hash2(c.email) * j) % 100))
//            {
//                j = j + 1;
//            }
//            contactDIC[(i + hash2(c.email) * j) % 100] = c;
//        }
//    }
//}
//
//int find(char* email)
//{
//    int i = hash(email);
//    if (!isavailable(i))
//    {
//        int j = i;
//        while (strcmp(contactDIC[j].email, email) != 0)
//        {
//            j = (j + 1) % 100;
//            if (j == i) return -1;
//        }
//        return i;
//    }else
//        return -1;
//}
//
//void delete(char* email)
//{
//    int i = find(email);
//    if (i >= 0)
//    {
//        memset(&contactDIC[i], 0, sizeof(CONTACT));
//    }
//}
//
//int main()
//{
//    CONTACT c;
//    char email[61];
//    init();
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/sap_xep_tim_kiem/contact.txt","rt");
//    while (!feof(f))
//    {
//        memset(c.email, 0, sizeof(char));
//        fgets(c.name, 31, f);
//        fgets(c.phone, 21, f);
//        fgets(c.email, 61, f);
//        int i = (int) strlen(c.email) - 1;
//        while ( c.email[i] == '\n' ||
//               c.email[i] == '\r')
//            c.email[i--] = 0;
//        if(strlen(c.email) != 0) insert(c);
//    }
//    fclose(f);
//    printf("Nhap email can tim: ");
//    memset(email, 0, sizeof(email));
//    gets(email);
//    int i = find(email);
//    if (i >= 0)
//    {
//        printf("Name: %s", contactDIC[i].name);
//        printf("Phone: %s", contactDIC[i].phone);
//        printf("Email: %s\n", contactDIC[i].email);
//    }else
//        printf("Khong tim thay\n");
//    
//    release();
//}
//
