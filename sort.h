#ifndef _SORT_H_
#define _SORT_H_
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////��������
void Swap(int* a, int* b);//����
void TestSortEfficient();//����Ч��
void PrintArray(int* ar, int left, int right);//��ӡ

void InsertSort_1(int* ar, int left, int right);//ֱ�Ӳ������򣨴�ǰ����

void InsertSort_2(int* ar, int left, int right);//ֱ�Ӳ������򣨴Ӻ���ǰ��

#endif/*_SORT_H_*/