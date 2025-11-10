#include <stdio.h>
unsigned long long tinhGiaiThua (int n) {
	if(n==0) {
		return 1; 
	}
	
	if(n<0) {
		printf("Khong hop le, yeu cau nhap so duong\n");
		return 0; 
	}
	
	unsigned long long giaiThua = 1;
	for(int i=1; i<=n; i++){
		giaiThua *= i; 
	} 
	return giaiThua; 
}
int main() {
	int number;
	printf("Nhap 1 so nguyen:");
	scanf("%d", &number);
	
	unsigned long long ketQua = tinhGiaiThua(number);
	
	if(number >=0) {
		printf("Giai thua cua %d la %llu\n", number, ketQua); 
	}
	return 0; 
}
