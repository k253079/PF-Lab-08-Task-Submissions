#include <stdio.h>

int main(){
		int a[3][3];
	int found=0;
		printf("Enter the 3x3 matrix:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		}
	for(int i=0;i<3;i++){
		int small=a[i][0];
		int index=0;
		for(int j=0;j<3;j++){
			if (a[i][j]<small)
			{
				small=a[i][j];
				index=j;
			}
		}
		int islarge = 1;
		for(int k=0;k<3;k++){
		if (a[k][index]>small){
			islarge=0;
			break;
		}
		}
		if(islarge==1){
			printf("Found saddle point at %d row and %d column:%d\n",i+1,index+1,small);
			found=1;
		}		
	}
		if(found==0){
			printf("No saddle point found\n");
		}
}

