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
	int max=0,S;
	for(int i=0;i<n;i++)
		if(arr[i]>0){
			int count=0;
			S=arr[i];
			for(;i<n-1;i++)
				if(arr[i+1]>0){
					S+=arr[i+1];
					count++;
				}
				else
					break;			
			if(count!=0)
				if(max<S)
					max=S;						
		}
	if(max==0)
		printf("Khong co chuoi so duong nao");
	else
		printf("Chuoi so duong co tong lon nhat: %d",max);				
}
