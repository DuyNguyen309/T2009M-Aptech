#include <stdio.h>
int main(){
	int a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	if(a>1){
		if(a<=8){
			if(a==8){
				printf("Chu Nhat");
			}
			else{
				printf("Thu %d",a);
			}
		}
		else{
			printf("Khong phai ngay trong tuan");
		}
	}
	else{
		printf("Khong phai ngay trong tuan");
	}
}
	
