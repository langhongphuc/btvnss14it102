#include <stdio.h>
void inMang(int arr[], int kichThuoc){
	printf("Cac phan tu trong mang:");
	for(int i=0; i< kichThuoc; i++){
		printf("%d", arr[i]);
	} 
	printf("\n"); 
}
int main(){
	int myArr[] = {1,2,3,4,5,6,7,8,9,10};
	int kichThuocMang = sizeof(myArr) / sizeof(myArr[0]);
	inMang(myArr, kichThuocMang);
	
	return 0; 
} 
