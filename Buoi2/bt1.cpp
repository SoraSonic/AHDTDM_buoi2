#include <stdio.h>
void TimBoiSo(int x){
	for (int i = 1; (i*x)<100; i++)
		printf("%d ", i*x);
}

int main(void){
	// Your code here!
	printf("cac so la boi cua 7: ");
	TimBoiSo(7);

}
