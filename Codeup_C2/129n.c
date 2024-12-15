#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n,i,re=0;
//	scanf("%d", &n);
//
//	for (i = n - 1; i >= 1; i--) {
//		if (n % i == 0) {
//			re++;
//		}
//	}
//
//	printf("%d", re);
//	return 0; //1290 대금 만들기
//}

//int main(void)
//{
//	int a, b, c, i, re=0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	for (i = a; i >= 1; i--) {
//		if (a% i == 0 && b % i == 0 && c % i == 0) {
//			re = i;
//			break;
//		}
//	}
//	printf("%d", re);
//	return 0; // 1291 바이러스 백신
//}

//int main(void)
//{
//	int a, n = 10, sum = 0,i;
//	scanf("%d", &a);
//
//	for (i = 0; i < 10; i++) {
//		sum = sum + a % 10;
//		a /= 10;
//	}
//
//	if (sum % 7 == 4) printf("suspect");
//	else printf("citizen");
//	return 0; // 1292 범인을 잡아라 1
//}

//int main(void)
//{
//	int n, i, max = 0, min = 0;
//	int a[100];
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	max = a[0], min = a[0];
//
//	for (i = 1; i < n; i++) {
//		if (max < a[i]) {
//			max = a[i];
//		}
//		if (min > a[i]) {
//			min = a[i];
//		}
//	}
//
//	printf("%d %d", max, min);
//	return 0; // 1293 1등과 꼴등
//}

//#include<math.h>
//
//int main(void)
//{
//	float n, ln;
//	scanf("%f", &n);
//	ln = n / 4;
//	printf("%.0f", floor(ln * ln)); // 버림 함수
//	return 0; // 1296 직사각형의 최대 넓이
//}