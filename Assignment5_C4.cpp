#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	if(n<3)
		printf("Khong ton tai so nguyen to < %d",n);
	else{
		for(int i=2;i<n;i++){
		int count=0;
		for(int j=2;j<=sqrt(i);j++)
			if(i%j==0)
				count++;
		if(count==0)
			printf("%5d",i);		
		}
	}	
}

