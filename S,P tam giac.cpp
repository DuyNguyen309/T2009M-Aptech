#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	
	do{
		printf("Nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
	}while(a+b<=c||a+c<=b||b+c<=a);
	
	int P=a+b+c;
	float S,p=P/2.0f;
	printf("Dien tich tam giac la:%f \n",(sqrt(p*(p-a)*(p-b)*(p-c))));
	printf("Chu vi tam giac:%d",P);
}
