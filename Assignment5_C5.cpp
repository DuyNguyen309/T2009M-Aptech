#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	do{
		printf("Nhap so a = ");
		scanf("%d",&a);
		printf("Nhap so b = ");
		scanf("%d",&b);
	}while(!(a<b));
	
	if(b<2)
		printf("Khong ton tai so nguyen to trong doan tu %d den %d",a,b);
	else if(b>=2&&a<2){
		for(int i=2;i<=b;i++){
			int count=0;
			for(int j=2;j<=sqrt(i);j++)
				if(i%j==0){
					count++;
					break;
				}
			if(count==0)
				printf("%5d",i);		
		}
	}
	else{
		for(int i=a;i<=b;i++){
			int count=0;
			for(int j=2;j<=sqrt(i);j++)
				if(i%j==0){
					count++;
					break;
				}
			if(count==0)
				printf("%5d",i);		
		}
	}	
}
