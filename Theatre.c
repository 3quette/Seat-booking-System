#include<stdio.h>
int ReserveSeat();
int Seat[5][8];
int i,j;
int main(){
	ReserveSeat();
}
	void printArray(){
		for(i=0;i<5;i++){
			for(j=0;j<8;j++){
			printf("|_%d_|",Seat[i][j]);
		}
		printf("\n");}
	}
int ReserveSeat(){
	int row,col;
	char ans,n,y;
	printf("\t\t\t____Welcome To The Theater Show____\n");
    do{
    	printArray();
    		printf("ENTER ROW");
	       	scanf("%d",&row);
	       	printf("ENTER COLOUMN");
	       	scanf("%d",&col);
	       	if(row>4||row<0 || col>7||col<0){
	       		printf("invalid Values\n");
			   }
	       	else if(Seat[row][col]!=1){
	       		Seat[row][col]=1;
	       		printf("YOUR SEAT HAS BEEN BOOKED\n WOULD YOU LIKE TO RESERVE ANOTHER SEAT?\n");
	            printf("PRESS 'Y' to conitinue\n");
	         	scanf(" %c",&ans);
			   }
			else if(ans==n){
				break;
			}  
			else if(Seat[row][col]==1){
				printf("Seat is already booked\n");
			}   
	        }
    	while(ans!=n);
	}
	

