#include <stdio.h>

int main(){
	int a[2][2][2]=
	{
	{{1,1},{1,1}},
	{{1,1},{1,1}}
	};
	printf("First Layer:\n");
	printf("%d %d \n%d %d\n",a[0][0][0],a[0][0][1],a[0][1][0],a[0][1][1]);
	printf("Second Layer:\n");
	printf("%d %d \n%d %d",a[1][0][0],a[1][0][1],a[1][1][0],a[1][1][1]);
}
