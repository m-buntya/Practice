//=====================================================
//  3�l�̍ő�l
//=====================================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
//  �֐��v���g�^�C�v
int MaxOfThree(int a, int b, int c);

int main()
{
    srand(time(NULL));
    int a = rand() % 100;
    int b = rand() % 100;
    int c = rand() % 100;
    int ans = MaxOfThree(a, b, c);
    printf("MaxOfThree(%d, %d, %d): %d\n", a, b, c, ans);
    return 0;
}

int MaxOfThree(int a, int b, int c)
{
    printf("3�̐����̍ő�l�����߂܂��B\n");// ������3�l�̍ő�l���Z�肷��R�[�h�������Ă��������B
    printf("a�̒l:"); scanf_s("%d", &a);
    printf("b�̒l:"); scanf_s("%d", &b);
    printf("c�̒l:"); scanf_s("%d", &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("�ő�l��%d�ł��B\n", max);
    return 0;
}
