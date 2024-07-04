//==========================================================
//	ピラミッドを表示する
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// 関数プロトタイプ
void PrintPyramid(int n);

int main()
{
	while (true) {
		int n;
		do {
			printf("何段のピラミッドですか? ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintPyramid(n);
	}
	return 0;
}

void PrintPyramid(int n)
{
	int i, j,k;
	for (i = 0; i <= n; i++) {
		for (k = 0; k < n - i; k++)
			putchar(' ');
		for (j = 0; j < i * 2-1 ; j++)
			putchar('*');
		putchar('\n');
	}
}