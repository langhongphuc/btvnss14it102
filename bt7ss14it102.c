#include <stdio.h>
#include <math.h>

void soNguyenTo(int n){
	if(n<2){
		return false; 
	} 
	if(n==2){
		return true; 
	}
	if(n%2==0){
		return false; 
	}
	
	for(int 1=3; i<=sqrt(n); i+=2){
		if(n%i==0){
			return false; 
		} 
	} 
	return true; 
} 

int main() {
	int number;
	printf("Nhap mot so nguyen duong:");
	scanf("%d",&number);
	
	if(soNguyenTo(number)) {
		printf("%d la so nguyen to\n", number);
		 
	}else {
		printf("Khong phai la so nguyen to");
	}
	return 0; 
}
