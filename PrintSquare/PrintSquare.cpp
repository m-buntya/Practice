//==========================================================
//	正方形を表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintSquare(int n);

int main()
{
	while (true) {
		int n;
		do {
			puts("正方形を表示します");
			printf("段数は: ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintSquare(n);//正方形の表示らしい
	}
	return 0;
}

void PrintSquare(int n)
{
	for (int i = 0; i<n; i++) {
		for (int j = 0; j < n; j++)
			putchar('*');
		putchar('\n');// ここをコーディングしてください
	}
	
}