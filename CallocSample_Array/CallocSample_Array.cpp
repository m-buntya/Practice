//==========================================================
//	calloc�T���v�� �z��
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()

int main()
{
	srand(time(nullptr));

	int na;
	printf("�v�f��:");
	scanf_s("%d", &na);

	int* a = (int*)calloc(na, sizeof(int));
	if (a == nullptr) {
		puts("�L����̊m�ۂɎ��s���܂���\n");
	}
	else {
		printf("%d�̐�������͂��܂�\n", na);
		for (int i = 0; i < na; i++) {
			a[i] = rand() % 100;
		}
		printf("�e�v�f�̒l�͎��̂Ƃ���ł�\n");
		for (int i = 0; i < na; i++) {
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}
	return 0;
}