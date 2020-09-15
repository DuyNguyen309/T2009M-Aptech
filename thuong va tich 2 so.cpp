#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
	if(a>=b){
		if(b!=0){
			float D=(float)a/b;
			printf("Thuong 2 so:%f",D);
		}
		else{
			printf("Infinity");
		}
	}
	else{
		int M=a*b;
		printf("Tich 2 so:%d",M);
	}
}
