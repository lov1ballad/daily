#ifndef _SORT_H_
#define _SORT_H_
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////声明函数
void Swap(int* a, int* b);//交换
void TestSortEfficient();//测试效率
void PrintArray(int* ar, int left, int right);//打印

void InsertSort_1(int* ar, int left, int right);//直接插入排序（从前往后）

void InsertSort_2(int* ar, int left, int right);//直接插入排序（从后向前）

#endif/*_SORT_H_*/