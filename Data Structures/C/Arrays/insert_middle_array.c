#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int con;
void main(void){
		//con value means condition value to terminate the program
	printf("\nInput the con value : ");
	scanf("%d",&con);
	do{
	int i,pos,val,array[MAX]={1,4,9,11,34,20};
	int size=6;

	
	printf("before inserting : ");
	
	for(i=0;i<size;i++){
		printf(" %d ",array[i]);
	}
	
	printf("\nEnter the position : ");
	scanf("%d",&pos);
	printf("enter the value : ");
	scanf("%d",&val);
	for(i=10;i>=pos;i--){
		array[i+1]=array[i];
	}
	array[pos]=val;
	size++;
	printf("after inserting : ");
	for(i=0;i<size;i++){
		printf(" %d ",array[i]);
		}
		printf("\n\n");
		con=con-1; //decrese the con value
	}while(con!=-1);
}
