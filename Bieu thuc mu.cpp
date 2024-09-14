#include<stdio.h>

//Ham de quy de tinh luy thua
long long power (int base ,int exponent){
	
	if(exponent == 0){
		return 1;
	}
	else {
		return base * power(base,exponent - 1);
	}
}

//Ham de quy de tinh gia tri cua S(n)
long long calculateS(int n){
	if(n == 0){
		return 0;
		
	}else{
		return power(n,n) + calculateS(n - 1);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	
	if(n <= 0 || n >= 10){
		return 1; //Ket thuc chuong trinh voi ma loi 1
		
	}
	
	//tinh va in ra gia tri cua S(n
	printf("%lld\n",calculateS(n));
	
}
