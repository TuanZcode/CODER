#include<stdio.h>

int P(int n){
	if(n == 1){
		return 1;
	}else {
		return n * ((n % 2 == 0) ? -1 : 1) + P(n-1);
		
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",P(n));
	return 0;
	
}
