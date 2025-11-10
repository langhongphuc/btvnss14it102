#include <stdio.h>
int tinhTong (int a, int b) {
	return a + b; 
}
int main() {
	int num1, num2;
	printf("Nhap so thu nhat:");
	scanf("%d",&num1);
	printf("Nhap so thu hai:");
	scanf("%d",&num2);
	
	int ketQua = tinhTong(num1, num2);
	printf("Tong cua %d va %d la %d", num1, num2, ketQua);
	
	return 0; 
}
