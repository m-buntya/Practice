//==========================================================
//	�����`��\������
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf()
// �֐��v���g�^�C�v
void PrintSquare(int n);

int main()
{
	while (true) {
		int n;
		do {
			puts("�����`��\�����܂�");
			printf("�i����: ");
			scanf("%d", &n);
		} while (n <= 0);
		PrintSquare(n);//�����`�̕\���炵��
	}
	return 0;
}

void PrintSquare(int n)
{
	for (int i = 0; i<n; i++) {
		for (int j = 0; j < n; j++)
			putchar('*');
		putchar('\n');// �������R�[�f�B���O���Ă�������
	}
	
}