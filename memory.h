#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
int i, j, len;
void max()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int ma, maxx;
	a > b ? ma = a : ma = b;
	c > ma ? maxx = c : maxx = ma;
	printf("%d", maxx);

}
//void maopao(struct student* maosz)
//{
//
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (maosz[j].score < maosz[j + 1].score) //>是从小到大，<是从大到小
//			{
//
//				copy = maosz[j]; //因为这里要移位的是结构体的位置而不是分数的位置，所以不写sz[j].score
//				maosz[j] = maosz[j + 1];
//				maosz[j + 1] = copy;
//			}
//
//
//		}
//
//
//	}
//
//}