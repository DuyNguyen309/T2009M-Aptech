#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	for(;;){
		n--;
		if(n%2==0)
			printf("%d",n);
		}
}
