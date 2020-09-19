#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n=");
		scanf("%d",&n);
	}while(n<2);
		
/*	int i;
	for(i=2;n%i!=0;i++);
		if(i==n)
			printf("%d la so nguyen to",n);
		else
			printf("%d la hop so",n); */
	
/*	int i=2;
	while(n%i!=0){
		i++;
	}
		if(i==n)
			printf("%d la so nguyen to",n);
		else
			printf("%d la hop so",n); */
	
	int i=1;		
	do{
		i++;
	}while(n%i!=0);
		if(i==n)
			printf("%d la so nguyen to",n);
		else
			printf("%d la hop so",n);			
}

