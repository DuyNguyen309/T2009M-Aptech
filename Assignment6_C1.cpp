#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n = ");
		scanf("%d",&n);
	}while(n<1);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int S=0;
	for(int i=0;i<n;i++)
		if(arr[i]%2!=0)
			S=arr[i];
	if(S!=0)		
		printf("So le cuoi cung la %d",S);
	else 
		printf("Khong co so le nao");			
}
