#include <stdio.h>
/*
 *第3章 栈和队列
 * */

#define maxSize 100

//顺序栈的定义
typedef struct
{
    int data[maxSize]; //存放栈中元素，maxSize是已定义的常量
    int top;           //栈顶指针
}SqStack;              //顺序栈类型定义

//链栈结点的定义
typedef struct LNode
{
    int data;            //数据域
    struct LNode *next;  //指针域
}LNode;                  //链栈结点定义

//顺序队列定义
typedef struct
{
    int data[maxSize];
    int front;           //队首指针
    int rear;            //队尾指针
}SqQueue;                //顺序队类型定义

/*
 * 链队定义
 * */
//队结点类型定义
typedef struct QNode
{
    int data;            //数据域
    struct QNode *next;  //指针域
}QNode;                  //队结点类型定义

//链队类型定义
typedef struct
{
    QNode *front;        //队头指针
    QNode *rear;         //队尾指针
}LiQueue;                //链队类型定义

int main() {
    printf("Hello, World!\n");
    return 0;
}