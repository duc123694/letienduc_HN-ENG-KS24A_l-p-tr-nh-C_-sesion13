#include<stdio.h>
int UCLN(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main(){
	int a,b;
	printf("Moi nhap so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("Moi nhap so nguyen thu hai: ");
	scanf("%d",&b);
	UCLN(a,b);
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,UCLN(a,b));
	return 0;
}
