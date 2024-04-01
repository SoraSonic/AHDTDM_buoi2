#include <stdio.h>
#include <math.h>

int KtSoChinhPhuong(float x)
{
	float a = sqrt(x);
	int b = (int)sqrt(x);
	if (a == b)
		return 1;
	return 0;
}

void DemSoChinhPhuong(int x)
{
	int temp = 0;
	for (int i = 1; i <= x; i++)
	if (KtSoChinhPhuong(i))
	{
		printf("%d ", i);
		temp++;
	}
}

///////////
int main(void){
	int x = 0;
	scanf("%d", &x);
	DemSoChinhPhuong(x);

}
