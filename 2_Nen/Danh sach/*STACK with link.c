////
////  STACK with link.c
////  MinhDev
////
////  Created by Hoang Anh on 10/16/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// cau truc stack
//typedef int item;
//typedef struct node{
//    item giatri;
//    struct node *next;
//} node;
//typedef struct stack{
//    node* head;
//} stack;
//stack *make(){
//    stack *s;
//    s = (stack*) calloc(1, sizeof(stack));
//    if(s != NULL) printf("tao stack thanh cong\n");
//    return s;
//}
//int empty(stack *s){
//    return s->head == NULL;
//}
//void push(stack *s){
//    item n;
//    node* newnode = NULL;
//    newnode = (node*) calloc(1, sizeof(node));
//    printf("Nhap gia tri\n");
//    scanf("%d", &n);
//    while(getchar() != '\n');
//    newnode -> giatri = n;
//    if(empty(s)){
//        newnode -> next = NULL;
//        s -> head = newnode;
//    } else {
//        newnode -> next = s -> head;
//        s -> head = newnode;
//    }
//}
//
//void push2(stack *s, item n){
//    node* newnode = NULL;
//    newnode = (node*) calloc(1, sizeof(node));
//    newnode -> giatri = n;
//    if(empty(s)){
//        newnode -> next = NULL;
//        s -> head = newnode;
//    } else {
//        newnode -> next = s -> head;
//        s -> head = newnode;
//    }
//}
//item pop(stack* s){
//    if(empty(s)){
//        printf("Stack rong/n");
//        return 0;
//    } else {
//        item n;
//        n = s ->head -> giatri;
//        s -> head = s -> head -> next;
//        return n;
//    }
//}
//void output(stack* s){
//    node* check = NULL;
//    check = (node*) calloc(1, sizeof(node));
//    check = s -> head;
//    while(check != NULL){
//        printf("Gia tri la %d\n", check ->giatri);
//        check = check -> next;
//    }
//}
//void delete(stack *s){
//    while(!empty(s)){
//        pop(s);
//    }
//}
//void hamcheckngoac(stack *s){
//    char xau[30];
//    memset(xau, 0, 30);
//    gets(xau);
//    for(int i = 0; xau[i] != '\0'; i++){
//        if(xau[i] == '(') push2(s, 1);
//        if(xau[i] == '[') push2(s, 2);
//        if(xau[i] == '{') push2(s, 3);
//        if(xau[i] == ')'){
//            if(pop(s) != 1){
//                printf("dau bi sai o day roi\n");
//                break;
//            } else{
//                printf("da xoa 1 dau %c\n", xau[i]);
//            }
//        }
//        if(xau[i] == ']'){
//            if(pop(s) != 2){
//                printf("dau bi sai o day roi\n");
//                break;
//            } else{
//                printf("da xoa 1 dau %c\n", xau[i]);
//            }
//        }
//        if(xau[i] == '}'){
//            if(pop(s) != 3){
//                printf("dau bi sai o day roi\n");
//                break;
//            } else{
//                printf("da xoa 1 dau %c\n", xau[i]);
//            }
//        }
//    }
//    if(empty(s)) printf("ham da nhap dau ngoac DUNG\n");
//    else printf("con thua... SAI roi\n");
//}
//int hampheptoan(int x, int y, char m){
//    if(m == '+'){ printf("gia tri phep tinh %d\n", x+y); return x + y;}
//    if(m == '-') return x - y;
//    if(m == '*') return x * y;
//    if(m == '^') {
//        int ketqua = 1;
//        for(int i = 0; i < y; i++){
//            ketqua = ketqua * x;
//        }
//        return ketqua;
//    }
//    printf("Ban nhap sai phep toan roi\n");
//    return 0;
//    //if(x == '/') return x / y;
//}
//void hamtinhbieuthucduoi(stack *s){
//    char xau[30];
//    printf("Nhap vao day bieu thuc\n");
//    gets(xau);
//    for(int i = 0; xau[i] != '\0'; i++){
//        if((xau[i] <= '9') && (xau[i] >= '0')) push2(s, (xau[i] - '0'));
//        if((xau[i] == '+') || (xau[i] == '-') || (xau[i] == '*')){
//            int x,y;
//            y = pop(s); printf("gia tri y la %d\n", y);
//            x = pop(s); printf("Gia tri x la %d\n", x);
//            push2(s, hampheptoan(x, y, xau[i]));
//        }
//    }
//    printf("Ket qua cua phep toan la %d\n", pop(s));
//}

//int main(){
//    stack* s =NULL;
//    s = make();
//    int n = 1;
//    while(n != 0){
//        printf("MENU\n");
//        printf("1. Push\n2. Pop\n3. Output\n4. Delete\n5. Check ngoac\n6. Tinh duoi\n");
//        printf("Nhap vao thao tac\n");
//        scanf("%d", &n);
//        while(getchar() != '\n');
//        switch (n) {
//            case 1:
//                push(s);
//                break;
//            case 2:
//                printf("gia tri bi out la %d\n",pop(s));
//                break;
//            case 3:
//                output(s);
//                break;
//                
//            case 4:
//                delete(s);
//                break;
//            case 5:
//                hamcheckngoac(s);
//                break;
//            case 6:
//                hamtinhbieuthucduoi(s);
//                break;
//            default:
//                n = 0;
//                break;
//        }
//    }
//    return 0;
//}
//
//
