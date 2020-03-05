//#include <stdio.h>
//#include <stdlib.h>
////#include <mm_malloc.h>
//#include <string.h>
//#define OPER 0
//#define VALUE 1
//
//#define ADD 0
//#define SUB 1
//#define MUL 2
//#define DIV 3
//
//typedef struct _NODE
//{
//    int type;
//    int oper;
//    float value;
//    struct _NODE* left;
//    struct _NODE* right;
//}NODE;
//
//typedef struct _STACK
//{
//    char oper[1024];
//    int index;
//}STACK;
//
//typedef struct _QUEUE
//{
//    int value[1024];
//    int type[1024];
//    int start;
//    int stop;
//}QUEUE;
//
//void makestack(STACK* stack)
//{
//    stack->index = -1;
//}
//
//int IsEmptyStack(STACK* stack)
//{
//    if (stack != NULL)
//        return stack->index == -1;
//    else
//        return 1;
//}
//
//void Push(STACK* stack, char oper)
//{
//    if (stack != NULL)
//    {
//        stack->oper[++stack->index] = oper;
//    }
//}
//
//char Pop(STACK* stack)
//{
//    if (stack != NULL && !IsEmptyStack(stack))
//        return stack->oper[stack->index--];
//    else
//        return 0;
//}
//
//void makequeue(QUEUE* queue)
//{
//    queue ->stop = -1;
//    queue ->start = 0;
//}
//
//int IsEmptyQueue(QUEUE* queue)
//{
//    if (queue != NULL)
//        return (queue->stop < queue->start);
//    else
//        return 1;
//}
//
//void QueueOper(QUEUE* queue, char oper)
//{
//    if (queue != NULL)
//    {
//        queue->value[++queue->stop] = oper - '0';
//        queue->type[queue->stop] = OPER;
//    }
//}
//
//void QueueValue(QUEUE* queue, int value)
//{
//    queue->value[++queue->stop] = value;
//    queue->type[queue->stop] = VALUE;
//}
//
//int DeQueue(QUEUE* queue, int* oper)
//{
//    int type = -1;
//    if (queue != NULL && !IsEmptyQueue(queue))
//    {
//        type = queue->type[queue->start];
//        *oper = queue->value[queue->start++];
//    }
//    return type;
//}
//
//
//// chuyen ve duoi
//
//int capbaccuadau(char oper)
//{
//    if((oper == '+') || (oper == '-')) return 0;
//    else{
//        return 1;
//    }
//}
//
//void chuyenduoi(STACK* stack, QUEUE* queue, char* input){
//    printf("xau ban dau la\n");
//    printf("%s", input);
//    for(int i = 0; i < strlen(input); i++)
//    {
//        if(input[i] <= '9' && input[i] >= '0'){
//            QueueValue(queue, input[i] - '0');
//        } else{
//            if(IsEmptyStack(stack) || capbaccuadau(input[i]) > capbaccuadau(stack->oper[stack ->index])){
//                Push(stack, input[i]);
//            } else{
//                while(!IsEmptyStack(stack) && capbaccuadau(input[i] <= capbaccuadau(stack->oper[stack->index]))){
//                    QueueOper(queue, Pop(stack));
//                }
//                Push(stack, input[i]);
//            }
//        }
//    }
//    
//    while(!IsEmptyStack(stack)){
//        QueueOper(queue, Pop(stack));
//    }
//}
//
//void outputxauduoi(QUEUE* queue){
//    printf("\n");
//    for(int i = queue->start; i <= queue->stop; i++){
//        if(queue->type[i] == VALUE) printf("%d", queue->value[i]);
//        else{
//            printf("%c", queue->value[i] + '0');
//        }
//    }
//}
//
////thiet lap cay
//typedef struct _NODE2{
//    int type;
//    int value;
//    struct _NODE2* up_left;
//    struct _NODE2* up_right;
//    struct _NODE2* down_left;
//    struct _NODE2* down_right;
//} NODE2;
//
//typedef struct __stacknode{
//    NODE2* nut[30];
//    int point;
//} stacknode;
//
//void make_stack(stacknode* stack){
//    
//    stack ->point = -1;
//}
//
//void push_stack(stacknode* stack, NODE2 *node){
//    (stack->nut)[++(stack->point)] = node;
//}
//
//NODE2* pop_stack(stacknode* stack){
//    return stack->nut[stack ->point--];
//}
//
//NODE2* taocay(stacknode* stack, QUEUE* queue){
//    NODE2* trara = NULL;
//    trara = calloc(1, sizeof(NODE2));
//    for(int i = queue->start; i <= queue->stop; i++){
//        NODE2 *new = NULL;
//        new = calloc(1, sizeof(NODE2));
//        if(queue->type[i] == OPER){
//            new->type = OPER;
//            new->value = queue->value[i];
//            NODE2 *a = pop_stack(stack);
//            NODE2 *b = pop_stack(stack);
//            a->up_left = new;
//            new->down_right = a;
//            b->up_right = new;
//            new->down_left = b;
//            push_stack(stack, new);
//            
//        } else{
//            new->type = VALUE;
//            new->value = queue->value[i];
//            push_stack(stack, new);
//        }
//        trara = new;
//    }
//    return trara;
//}
//
//void Output(NODE2* root){
//    NODE2 *check;
//    check = root;
//    if(check->type == OPER){
//        //printf("aaaaaaa\n");
//        printf("%c\n", (check->value) + '0');
//    } else{
//        printf("%d\n", check->value);
//    }
//    if(check->down_left != NULL) Output(check->down_left);
//    if(check->down_right != NULL) Output(check->down_right);
//}
//
//int main()
//{
//    char input[30];
//    printf("Nhap vao xau\n");
//    gets(input);
//    QUEUE* queue = NULL;
//    STACK* stack = NULL;
//    stacknode *stack2 = NULL;
//    stack2 = malloc(sizeof(stacknode));
//    make_stack(stack2);
//    
//    queue = calloc(1, sizeof(QUEUE));
//    stack = calloc(1, sizeof(STACK));
//    makequeue(queue);
//    makestack(stack);
//    chuyenduoi(stack, queue, input);
//    outputxauduoi(queue);
//    printf("\n");
//    Output(taocay(stack2, queue));
//    
//}
//
//
//
//
//
//
