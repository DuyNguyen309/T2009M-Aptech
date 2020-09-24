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
	int max=0,S=0,count=0,X=0;
	for(int i=0;i<n;i++)
		if(arr[i]>0){
			S+=arr[i];
			bool flag=false;
			for(;i<n-1;i++)
				if(arr[i+1]>0){
					S+=arr[i+1];
					flag=true;
				}
				else
					break;			
			if(flag==true)
				if(max<S)
					max=S;				
			S=0;		
		}
	if(max==0)
		printf("Khong co chuoi so duong nao");
	else
		printf("Chuoi so duong co tong lon nhat: %d",max);				
}
