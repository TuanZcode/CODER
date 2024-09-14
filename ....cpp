#include<stdio.h>
int main(){
	int rows,cols;
	scanf("%d%d",&rows,&cols);
	int seats[rows][cols];
	for(int i = 0;i<rows;i++){
		for(int j = 0;j<cols;j++){
			scanf("%d",&seats[i][j]);
			
		}
	}
	int row,col;
	scanf("%d%d",&row,&col);
	if(seats[row - 1][col - 1] == 0){
		printf("your seat is booked. Please complete the paymrnt.\n");
		
	} else{
		printf("Seat %d%d is sold.",row,col);
	}
}
