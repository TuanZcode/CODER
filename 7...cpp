#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so co phan tu cua day: ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap vao day so:\n");
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Vi tri cua cac so 7 trong day la: ");
	int found = 0; //Bien kiem tra xem co so 7 nao khong
	for(int i = n-1 ;i>=0;i--){
		if(arr[i] == 7){
			printf("%d ",i);
			found = 1;
		}
	}
	if(!found){
		printf("Not found");
		
	}
	return 0;
}
