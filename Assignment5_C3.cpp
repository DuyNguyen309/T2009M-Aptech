#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d",&a);
	printf("Nhap so b = ");
	scanf("%d",&b);
	
	if(a==0&&b==0)
		printf("Khong ton tai UCLN");
	else if(a==0&&b!=0){
		if(b<0)
			printf("UCLN cua a va b la %d",(b*-1));
		else
			printf("UCLN cua a va b la %d",b);
	}
	else if(a!=0&&b==0){
		if(a<0)
			printf("UCLN cua a va b la %d",(a*-1));
		else 
			printf("UCLN cua a va b la %d",a);	
	}
	else if(a<0&&b>0){
		a=a*-1;
		for(;a!=b;){
			if(a>b)
				a=a-b;
			else
				b=b-a;	
		}
		printf("UCLN cua a va b la %d",a);
	}
	else if(a>0&&b<0){
		b=b*-1;
		for(;a!=b;){
			if(a>b)
				a=a-b;
			else
				b=b-a;	
		}
		printf("UCLN cua a va b la %d",a);
	}
	else if(a<0&&b<0){
		a=a*-1;
		b=b*-1;
		for(;a!=b;){
			if(a>b)
				a=a-b;
			else
				b=b-a;	
		}
		printf("UCLN cua a va b la %d",a);
	}
	else{
		for(;a!=b;){
			if(a>b)
				a=a-b;
			else
				b=b-a;	
		}
		printf("UCLN cua a va b la %d",a);
	}			
}

