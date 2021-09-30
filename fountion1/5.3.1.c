#include <stdio.h>
#define max 10 
int inputmatt(int m[2][2]);
void showmatt (int m[2][2]);
void addmatt(int a[2][2],int b[2][2],int c[2][2]); 
void multimatt(int a[2][2],int b[2][2],int c[2][2]);
 
int main() 
{ 	int mattA[2][2],num,mattB[2][2],mattC[2][2];
	printf("matrixA\n");
	num = inputmatt(mattA);
	showmatt(mattA);
	printf("matrixB\n");
	num = inputmatt(mattB);
	showmatt(mattB);
	printf("matrix a+b\n");
	addmatt(mattA,mattB,mattC);
	showmatt(mattC);
	printf("matrix a X b\n");
	multimatt(mattA,mattB,mattC);
	showmatt(mattC);
	return 0;
}
int inputmatt(int m[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("m[%d][%d]=",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
}
void showmatt (int m[2][2]){
	int i,j; 
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}
void addmatt(int a[2][2],int b[2][2],int c[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}
void multimatt(int a[2][2],int b[2][2],int c[2][2]){
	int i,j,k,sum;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				sum = sum + a[i][k]*b[k][j];
			}
			c[i][j] = sum;
			sum=0;
		}
	}
}

