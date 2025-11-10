#include <stdio.h>
int timUocChungLonNhat(int a, int b){
	while (b!=0){
		int temp = b;
		b = a%b;
		a = temp; 
	}
	return a; 
} 
int main(){
	int num1 = 100;
	int num2 = 50;
	int ucln = timUocChungLonNhat(num1, num2);
	printf("Uoc chung lon nhat cua %d va %d la %d", num1, num2, ucln);
	
	return 0; 
} 
