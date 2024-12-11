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
//	return 0; //1287 구구단을 *로 출력하기
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

//int main(void)
//{
//	int re, h, w, max = 0, i;
//
//	for (i = 0; i < 3; i++) {
//		scanf("%d %d", &h, &w);
//		re = h * w;
//		if (max < re) {
//			max = re;
//		}
//	}
//
//	printf("%d", max);
//	return 0; //1289 가장 큰 운동장
//}