#include <stdio.h>
int main(){
	int n,S=0;
	do{	
		printf("Nhap so n=");
		scanf("%d",&n);
	}while(n<=0);
	
/*	for(int i=1;i<=n;i++){
		S+=i;
	}printf("S=%d",S); */
	
/*	int i=1;
	while(i<=n){
		S+=i;
		i++;
	}printf("S=%d",S); */
	
	int i=1;
	do{
		S+=i;
		i++;
	}while(i<=n);
	printf("S=%d",S);
}
