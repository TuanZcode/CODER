#include<stdio.h>

int main(){
	//Khai bao bien a va b
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	if(a <= 1000000 && b <= 1000000){
		int result = a & b;
		
		printf("%d\n",result);
		
	}else {
		printf("Nhap gia tri khong hop le");
	}
}
