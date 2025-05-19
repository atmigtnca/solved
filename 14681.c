#include<stdio.h>

int main(){
	int x,y,z;
	printf("x : ");
	scanf("%d",&x);
	printf("y : ");
	scanf("%d",&y);

	if ((x * y > 0) && (x > 0))
		z = 1;
	else if ((x * y > 0) && (x < 0))
		z = 3;
	else if (x < 0)
		z = 2;
	else
		z = 4;

	printf("%d\n", z);

	return 0;
}