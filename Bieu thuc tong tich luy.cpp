#include<stdio.h>

//Ham de quy de tinh tong S(n)
int calculateS(int n){
	if(n == 1){
		return 1;
		
	}else {
		return (n*(n + 1) / 2) + calculateS(n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	
	if(n <= 0 || n > 1000){
		return 1;
	}
	
	int result  = calculateS(n);
	printf("%d\n",result);
}
