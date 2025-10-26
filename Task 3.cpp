#include<stdio.h>

int main(){
	int a[2][2],b[2][2];
	printf("Enter first Matrix:\n");
	scanf("%d %d",&a[0][0],&a[0][1]);
	scanf("%d %d",&a[1][0],&a[1][1]);
	printf("Enter second Matrix:\n");
	scanf("%d %d",&b[0][0],&b[0][1]);
	scanf("%d %d",&b[1][0],&b[1][1]);
	
	printf("The sum of the matrix:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(i==1 && j==0){
				printf("\n");
			}
			printf("%d ",a[i][j]+b[i][j]);
		}
	}
}
