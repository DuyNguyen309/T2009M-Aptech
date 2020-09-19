#include <stdio.h>
int main(){
	int n;	
	do{
		printf("Nhap so n=");
		scanf("%d",&n);
	}while(n<1);
	float S=0;
/*	for(int i=1;i<=n;i++){
		S+=1.0f/i;
	}printf("S=%f",S); */
	
/*	int i=1;
	while(i<=n){
		S+=1.0f/i;
		i++;
	}printf("S=%f",S); */
	
	int i=1;
	do{
		S+=1/float(i);
		i++;
	}while(i<=n);
	printf("S=%f",S);
}

