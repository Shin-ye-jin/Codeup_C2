#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n,i,j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= n * i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; //1287 �������� *�� ����ϱ�
//}

//int f(n) {
//	if (n <= 1) {
//		return 1;
//	}
//	else {
//		return n * f(n - 1);
//	}
//}
//
//int main(void)
//{
//	int n, r,result=0;
//	scanf("%d %d", &n, &r);
//
//	result = f(n) / (f(n - r)*f(r));
//	printf("%d", result);
//	return 0; // 1288 nCr (Tiny)
//}