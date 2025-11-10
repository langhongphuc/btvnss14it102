#include <stdio.h>
int timSoLonNhat(int arr[], int size){
	int max = arr[0];
	for(int i=1; i< size; i++){
		if(arr[i]>max){
			max = arr[i]; 
		} 
	}
	return max; 
} 
int main(){
	int mangSo[5] = {10, 25, 5, 40, 15};
	int kickThuoc = sizeof(mangSo) / sizeof(mangSo[0]);
	int soLonNhat = timSoLonNhat(mangSo, kichThuoc);
	
	printf("So lon nhat trong mang la %d\n", soLonNhat);
	
	return 0; 
} 
