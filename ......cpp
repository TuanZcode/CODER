#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b % a == 0){
		printf("%d",b);
	}
    int c = b % a;
switch (c){

	case 1:
	printf("%d",b-1);
	break;
	case 2: 
	printf("%d",b-2);
	break;
	case 3:
	printf("%d",b-3);
	break;
	case 4:
	printf("%d",b-4);
	break;
}
}

