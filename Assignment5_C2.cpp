#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	if(n==0){
		printf("Uoc cua 0 la moi so khac 0\n");
		printf("S = Vo han");
	}
	else if(n>0){
		int S=0;
		for(int i=-1*n;i<=n;i++){
			if(i==0)
				continue;
			if(n%i==0){
				printf("Uoc cua %d la %d \n",n,i);
				S+=i;
			}
		}
		printf("S = %d",S);	
	}

	else{
		int S=0;
		for(int i=-1*n;i>=n;i--){
			if(i==0)
				continue;
			if(n%i==0){
				printf("Uoc cua %d la %d \n",n,i);
				S+=i;
			}
		}
		printf("S = %d",S);	
	}	
}
