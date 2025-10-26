#include<stdio.h>

int main()
{	int n;
	printf("Enter A number:");
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		
		int mult=i*n;
		printf("%d x %d = %d\n",n,i,mult);

		
	}
}
