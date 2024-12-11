#include<stdio.h>
void taoMaTran(int rows, int cols, int matrix[][100]){
	printf("Moi nhap gia tri cua mang: \n");
	for(int i=0;i< rows;i++){
		for(int j=0;j< cols;j++){
			printf("Nhap phan tu vi tri [%d][%d]: ", i + 1, j + 1);
			scanf("%d",&matrix[i][j]);
		}
	}
}
void inMaTran(int rows, int cols, int matrix[][100]){
	printf("Ma tran vua nhap: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int arr[100][100];
	int a,b;
	printf("Moi nhap so hang: ");
	scanf("%d",&a);
	printf("Moi nhap so cot ");
	scanf("%d",&b);
	taoMaTran(a,b,arr);
	inMaTran(a,b,arr);
	return 0;
}
