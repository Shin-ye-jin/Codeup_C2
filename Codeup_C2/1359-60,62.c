#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0; // 1359 숫자 피라미드 1
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = n; i >= 1; i--) {
//		for (j = 0; j < i; j++) {
//			printf("%d ", i);
//		}
//		printf("\n"); // 1360 숫자 피라미드 2
//	}
//}

//int r(int n) {
//	if (n== 1) {
//		return 1;
//	}
//	else {
//		return n + r(n - 1);
//	}
//}
//
//int main(void)
//{
//	int n, i, j, re = 0;
//	scanf("%d", &n);
//
//	re = r(n);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", re);
//			re--;
//		}
//		printf("\n");
//	}
//
//	return 0; // 1362 숫자 피라미드 3
//}