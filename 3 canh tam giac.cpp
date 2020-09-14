#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				int P=a+b+c;
				float S,p=P/2.0;
				printf("P=%d \n",P);
				printf("S=%f",(sqrt(p*(p-a)*(p-b)*(p-c))));
			}
			else{
				printf("Khong phai 3 canh tam giac");
			}
		}
		else{
			printf("Khong phai 3 canh tam giac");
		}
	}
	else{
		printf("Khong phai 3 canh tam giac");
	}
}
