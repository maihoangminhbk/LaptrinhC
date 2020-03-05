////
////  stack.c
////  MinhDev
////
////  Created by Hoang Anh on 12/20/19.
////  Copyright © 2019 Hoang Anh. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define max 100
//
//typedef struct value{
//    char name[30];
//    char email[50];
//    int MSSV;
//} value;
//
////Khai bao stack
//typedef struct stack{
//    value list[max];
//    int count;
//} stack;
//
//void make_stack(stack* input_stack){
//    input_stack->count = -1;
//}
//
//int isEmpty_stack(stack* input_stack){
//    return input_stack->count == -1;
//}
//
//int isFull_stack(stack* input_stack){
//    return input_stack->count == max;
//}
//
//void en_stack(stack* input_stack, value input_value){
//    if(!isFull_stack(input_stack)){
//        input_stack->list[++input_stack->count] = input_value;
//    }
//}
//
//value* de_stack(stack* input_stack){
//    if(isEmpty_stack(input_stack)){
//        printf("Stack rong roi\n");
//        return 0;
//    } else {
//        value* output = NULL;
//        output = (value*) calloc(1, sizeof(value));
//        *output = input_stack->list[input_stack->count--];
//        return output;
//    }
//}
//
//void print_stack(stack* input_stack){
//    for(int i = 0; i <= input_stack->count; i++){
//        printf("ten la %s\t email la %s\t MSSV %d\n",
//               input_stack->list[i].name,
//               input_stack->list[i].email,
//               input_stack->list[i].MSSV);
//    }
//}
//
//void doc_file(stack* input_stack){
//    FILE* f = fopen("/Users/hoanganh/Desktop/iOS/MinhDev/2_Nen/Bai_mau_thi_HK/stack.txt", "r");
//    value output_value;
//    while(!feof(f)){
//        memset(output_value.name, 0, sizeof(char));
//        memset(output_value.email, 0, sizeof(char));
//        fgets(output_value.name, 30, f);
//        if(output_value.name[strlen(output_value.name) - 1] == '\n'){
//            output_value.name[strlen(output_value.name) - 1] = '\0';
//        }
//        fgets(output_value.email, 50, f);
//        if(output_value.email[strlen(output_value.email) - 1] == '\n'){
//            output_value.email[strlen(output_value.email) - 1] = '\0';
//        }
//        fscanf(f, "%d\n", &output_value.MSSV);
//        if(output_value.name[0] != '\0') en_stack(input_stack, output_value);
//    }
//    fclose(f);
//}
//
//int main(){
//    stack* input_stack;
//    input_stack = (stack*) calloc(1, sizeof(stack));
//    make_stack(input_stack);
//    doc_file(input_stack);
//    print_stack(input_stack);
//}

