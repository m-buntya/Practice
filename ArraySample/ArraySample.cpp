//==========================================================
//	�z��T���v�� ������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()

int main()
{
	int a[] = { 1, 2, 3, 4, 5 }; // ���z��̏������q
	int na = sizeof(a) / sizeof(a[0]);

	printf("�z��a�̗v�f���́A%d�ł�\n", na);

	for (int i = 0; i < na; i++) {
		printf("a[%d] =%d\n", i, a[i]);
	}
	return 0;
}
