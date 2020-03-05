////
////  Stack_tinhbieuthuc.c
////  MinhDev
////
////  Created by Hoang Anh on 10/17/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//// cau truc stack
//typedef char item;
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
//    scanf("%c", &n);
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
//        printf("Gia tri la %c\n", check ->giatri);
//        check = check -> next;
//    }
//}
//void delete(stack *s){
//    while(!empty(s)){
//        pop(s);
//    }
//}
//
//char hampheptoan(int x, int y, char m){
//    if(m == '+'){ printf("gia tri phep tinh %d\n", x+y); return (x + y) + '0';}
//    if(m == '-') return (x - y) + '0';
//    if(m == '*') return (x * y) + '0';
//    if(m == '^') {
//        int ketqua = 1;
//        for(int i = 0; i < y; i++){
//            ketqua = ketqua * x;
//        }
//        return ketqua + '0';
//    }
//    printf("Ban nhap sai phep toan roi\n");
//    return 0;
//    //if(x == '/') return x / y;
//}
//void process(stack *s1, stack *s2){
//    int x,y;
//    y = pop(s1) - '0';
//    x = pop(s1) - '0';
//    push2(s1, hampheptoan(x, y, pop(s2)));
//}
//int hamuutien(char x){
//    if((x == '+') || (x == '-')) return 1;
//    if(x == '*') return 2;
//    if(x == '^') return 3;
//    return 0;
//}
//void hamtinhbieuthuc(){
//    stack *s1 = make();
//    stack *s2 = make();
//    int check = 0;
//    char xau[30];
//    printf("Nhap vao xau\n");
//    gets(xau);
//    for(int i = 0; xau[i] != '\0'; i++){
//        if((xau[i] <= '9') && (xau[i] >= '0')) push2(s1, (xau[i]));
//        if((xau[i] == '+') || (xau[i] == '-')) check = 1;
//        if(xau[i] == '*') check = 1;
//        if(xau[i] == '^') check = 1;
//        if(check == 1){
//            if(empty(s2)){
//                push2(s2, xau[i]);
//            } else {
//                if(hamuutien(xau[i]) >= hamuutien(s2 ->head ->giatri)){
//                    push2(s2, xau[i]);
//                } else{
//                    while(hamuutien(xau[i]) < hamuutien(s2 ->head ->giatri)){
//                        process(s1, s2);
//                    }
//                    push2(s2, xau[i]);
//                }
//            }
//
//        }
//        if(xau[i] == '(') push2(s2, xau[i]);
//        if(xau[i] == ')'){
//            do{
//                process(s1, s2);
//            } while(s2 ->head ->giatri != '(');
//            pop(s2);
//        }
//        check = 0;
//    }
//    while(!empty(s2)){
//        process(s1, s2);
//    }
//    int ketqua;
//    ketqua = pop(s1) - '0';
//}
//int main(){
//    stack* s =NULL;
//    s = make();
//    int n = 1;
//    while(n != 0){
//        printf("MENU\n");
//        printf("1. Push\n2. Pop\n3. Output\n4. Delete\n");
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
//                hamtinhbieuthuc();
//                break;
//            case 6:
//                
//                break;
//            default:
//                n = 0;
//                break;
//        }
//    }
//    return 0;
//}
//
