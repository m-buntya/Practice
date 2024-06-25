//==========================================================
//	�J�����̌���
//==========================================================
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // sscanf(),scanf(),printf()
// �֐��v���g�^�C�v
int NumberOfDigits(int num);
void calcDigit(int num);

int main(int argc, char* argv[])
{
	int num;
	if (argc >= 2) {
		sscanf(argv[1], "%d", &num);
		calcDigit(num);
	}
	else {
		while (true) {
			do {
				printf("���̐���:");
				scanf("%d", &num);
			} while (num <= 0);
			calcDigit(num);
		}
	}
	return 0;
}
void calcDigit(int num)
{
	int digit = NumberOfDigits(num);
	printf("%d�̌����� %d\n", num, digit);
}

int NumberOfDigits(int num)
{
	int digits = 0;
	if (num == 0)
	{
		return 1;//0�̏ꍇ�A�P���Ƃ��Ĉ���
	}
	while (num != 0) {
		num /= 10;
		digits++;
	}
	return digits;
}