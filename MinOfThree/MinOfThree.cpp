//==========================================================
// 3�l�̍ŏ��l
//==========================================================
#include <stdio.h>
#include <stdlib.h>  // srand(),rand()
#include <time.h>    // time()
// �֐��v���g�^�C�v
int MinOfThree(int a, int b, int c);

int main()
{
	srand(time(nullptr));
	int a = rand() % 100;
	int b = rand() % 100;
	int c = rand() % 100;
	int ans = MinOfThree(a, b, c);
	printf("MinOfThree(%d,%d,%d) => %d\n", a, b, c, ans);
	return 0;
}
int MinOfThree(int a, int b, int c)
{
	int min = a;
	if (b < min)
		b = min;
	if (c < min)
		c = min;

	return min;

}