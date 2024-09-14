#include<stdio.h>
#include<math.h>

//Ham de quy de tinh gia tri S(n)

double calculate_S(int n){
	if(n==1){
		return sqrt(1);
	}else {
		return sqrt(n + calculate_S(n-1));
	}
} 

int main(){
	int n;
	
	printf("Nhap gia tri n (0 < n <= 10): ");
	scanf("%d",&n);
	
	//Kiem tra dieu kien n
	if(0 < n && n <= 10){
		double result = calculate_S(n);
		printf("Gia tri cua S(%d) la: %.2f\n",n,result);
		
	}else {
		printf("Nhap n khong hop le. vui long nhap lai\n");
		
		
	}
}
