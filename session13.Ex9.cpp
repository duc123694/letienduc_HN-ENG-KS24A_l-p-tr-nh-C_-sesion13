#include<stdio.h>
void nhapMang(int a,int b,int arr[][100]){
	printf("nhap gia tri cua mang %d va %d \n ",a,b);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Moi nhap phan tu arr[%d][%d] = ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
void inMang(int a,int b,int arr[][100]){
	printf("Mang sau khi duoc nhap la \n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}	
}
void inGoc(int arr[][100], int n, int m) {
    printf("Cac phan tu o goc ma tran:\n");
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("arr[0][%d] = %d\n", m - 1, arr[0][m - 1]);
    printf("arr[%d][0] = %d\n", n - 1, arr[n - 1][0]);
    printf("arr[%d][%d] = %d\n", n - 1, m - 1, arr[n - 1][m - 1]);
}
void inBien(int arr[][100], int n, int m) {
    printf("Cac phan tu o duong bien ma tran:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[0][i]); 
    }
    for (int i = 1; i < n - 1; i++) {
        printf("%d ", arr[i][0]); 
        printf("%d ", arr[i][m - 1]); 
    }
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[n - 1][i]); 
    }
    printf("\n");
}
void inCheo(int arr[][100], int n, int m) {
    printf("Cac phan tu o duong cheo chinh va cheo phu:\n");
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]); 
        printf("%d ", arr[i][m - 1 - i]); 
    }
    printf("\n");
}
void menu() {
    printf("\nMENU\n");
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3. In ra cac phan tu o goc theo ma tran\n");
    printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
    printf("7. Thoat\n");
}

int main() {
    int arr[100][100];
    int n, m, choice;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    
    do {
        menu();
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang(n,m,arr);
                break;
            case 2:
                inMang(n,m,arr);
                break;
            case 3:
                inGoc(arr, n, m);
                break;
            case 4:
                inBien(arr, n, m);
                break;
            case 5:
                inCheo(arr, n, m);
                break;
            case 6:
                break;
            case 7:
                printf("Thoat chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
                break;
        }
    } while (choice != 7);
    
    return 0;
}


