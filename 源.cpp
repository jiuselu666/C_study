#define _CRT_SECURE_NO_WARNINGS
#include"memory.h"
//int main()
//{
//	
//	max();
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* arr[2] = { &a,&b };
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%p\n", *(arr[i]));
//
//	}
//
//	return 0;
//}
// 
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int arr3[] = { 11,12,13,14,15 };
//	int* parr[] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int* arr[10] = { }; 
//	int* (*p2)[10] =  &arr ;
//
//
//	return 0;
//}
//void swap(int* a, int* b)
//{
//	int t; //*a ��int���� ,a ��int * ����
//	t = *a;
//	*a = *b;
//	*b = t;
//
//	
//}
//
//
//int main()
//{
//	int a=3, b=5;
//
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}

//int main(void)
//{
//
//	int a[] = { 1,2,3,4,5 };
//	printf("%#X\n", &a[0]);
//	printf("%#X\n", a);
//	return 0;
//}
//void f(int* pa, int len)
//{
//	pa[3] = 88;
//
//}
//
//int main()
//{
//
//	int a[6] = { 1,2,3,4,5,6 };
//	printf("%d\n", a[3]);//4
//	
//	f(a,6);
//	printf("%d\n", a[3]);//88
//}
//void max(int* x,int* y,int* z,int* maxx)
//{
//	
//	int ma= 0;
//	*x > *y ? ma = *x : ma = *y;
//	*z > ma ? *maxx = *z : *maxx = ma;
//	
//}
//int main()
//{
//	
//	int maxx = 0;
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	max(&a, &b, &c, &maxx);
//	printf("%d",maxx);
//
//
//}
//int main()
//{
//	int i=0;
//	int len;
//	int* parr;
//	printf("���볤��\n");
//	scanf("%d", &len);
//	parr = (int*)malloc(sizeof(int) * len); //������һ����̬���飬��СΪlen���ȼ���int parr[len]
//	
//	for (i = 0; i < len; i++)//
//	{
//		
//		printf("�����±�Ϊ%d��ֵ\n",i);
//		scanf("%d", &parr[i]);//��̬�����������Ժ;�̬����һ����ʹ��
//
//	}
//	for (i = 0; i < len; i++)//��ӡ��̬�����Ԫ��
//	{
//
//		printf("����1��%d\n", parr[i]);
//
//	}
//	realloc(parr, sizeof(int) * len * 2);
//	for (i = 0; i < len; i++)//��ӡ��̬�����Ԫ��
//	{
//
//		printf("���ݱ���2��%d\n", parr[i]);
//
//	}
//	return 0;
// 
//}
//void h(int**** m)
//{
//	int i = 777;
//	***m = &i;
//
//}
//void g(int*** x)
//{
////	int i = 999;
////	**x = &i;
//	h(&x);
//	//printf("����ָ��X�ĵ�ַ%#X��ֵ=%d\n", &***x,***x);//
//}
//void f (int** z)
//{
//	
//
//	//int i = 888;
//	//*z = &i;
////	printf("����ָ��Z1�ĵ�ַ%#X��ֵ%d\n", &*zz,*zz);
////	printf("����ָ��z�ĵ�ַ%#X��ֵ%d\n", &**z, **z);
//
//
//	g(&z);
//
//}
//int main()
//{
//	int i = 10;
//	int* p = &i;
//	int** a = &p;
//	int*** b = &a;
////	printf("һ��ָ��p�ĵ�ַ%#X��ֵ%d\n", &p,*p);
//
////	printf("%d\n", p);
//
//	f(&p);
//	printf("%d\n", *p);
//	
//
//
//	return 0;
//}
////void f(int** q)
//{
//	int i = 10;
//	*q = &i;
//	
//	//**q = *q;
//	printf("%d", **q);
//}
//int main()
//{
//	int* p;
//	
//	f(&p);
//	printf("%d", *p);
//}
//void f(int* q)
//{
//	int i = 999;
//	q = (int*)malloc(sizeof(int));
//	*q = 999;
//
//}
//int main()
//
//{
//	int* p;
//	f(p);
//
//	return 0;
//}
//int main()
//{
//
//	int a[2] = { 1,2 };
//	int b[2] = {10,99};
//	*a = *(b+1);
//	printf("%d,%d\n", a[0],a[1]);
//	printf("%d", b[0]);
//
//
//}
//int main()
//{
//	struct student
//	{
//		float fen;
//		float aa;
//
//	};
//	student st{12.3,33.3};
//	student* pst = &st;
//
//	st.fen = 66;
//	
//	pst->aa = 99;
//	printf("%f,%f\n",st.aa,pst->fen);
	//(*pst).fen = 88;
	//printf("%f", st.fen);//pst->fen �ȼ���(*pst).fen Ҳ�ȼ���st.fen
//	return 0;
//}
//struct student
//{
//	int age;
//	char sex[10];
//	float score;//����
//	char name[100];
//
//};
//int i, j, len;
//struct student copy;
//
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
//void output(struct student* out)
//{
//	
//	for (i = 0; i < len; i++)
//	{
//		printf("��%d��ѧ������Ϣ", i + 1);
//		printf("age =%d\n", out[i].age);//���ﲻ��*out[i].sex ���������� ��Ҫ��-�����������Ա
//		printf("name =%s\n", out[i].name);
//		printf("score =%f\n", out[i].score);
//		printf("sex =%s\n", out[i].sex);
//
//		printf("\n");
//
//	}
//
//}
//void input(struct student* inp)
//{
//	
//	for (i = 0; i < len; i++)
//	{
//		printf("��%d��ѧ������Ϣ;\n", i + 1);
//		printf("age=\n");
//		scanf("%d", &inp[i].age);
//		printf("name=\n");
//		scanf("%s", inp[i].name);//��Ϊname[100]�Ѿ����������� name�����׵�ַ��
//		printf("score=\n");
//		scanf("%f", &inp[i].score);
//		printf("sex=\n");
//		scanf("%s", inp[i].sex);
//
//	}
//
//}
//int main()
//{
//	//��̬����һ��������ѧ����Ȼ�󰴷������������
//	struct student* sz;
//	printf("����ѧ��������\n");
//	scanf("%d",&len);
//	sz= (struct student*)malloc(sizeof(struct student)*len);
//	input(sz);
//	maopao(sz);
//	output(sz);
//	free(sz);
//
//
//	return 0;
//}
//enum week
//{
//	one, two, three
//
//};
//int main()
//{
//	enum week day = one;
//
//	switch (day)
//	{
//	case 0:
//		printf("����һ");
//		break;
//	case 1:
//		break;
//	case 2:
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}
//int main()
//{
//
//	printf("%#x", 130);
//
//
//}
//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	p = &a;
//	printf("%#x\n",p);
//	printf("%#x", *p);
//
//	return 0;
//}