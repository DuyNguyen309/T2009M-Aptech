#include <stdio.h>
int main(){
	int S=0;
/*	for(int i=1,a=1;a<=100;i=i+2,a++){
		S+=i;
	}printf("S=%d",S); */
	
/*	int i=1,a=1;
	while(a<=100){
		S+=i;
		i=i+2;
		a++;
	}printf("S=%d",S); */ 
	
	int i=1,a=1;
	do{
		S+=i;
		i=i+2;
		a++;
	}while(a<=100);
	printf("S=%d",S);
}
