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
//			if (maosz[j].score < maosz[j + 1].score) //>�Ǵ�С����<�ǴӴ�С
//			{
//
//				copy = maosz[j]; //��Ϊ����Ҫ��λ���ǽṹ���λ�ö����Ƿ�����λ�ã����Բ�дsz[j].score
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