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
	int min;
	bool flag=false;
	for(int i=0;i<n;i++)
		if(arr[i]>0){
			min=arr[i];
			flag=true;
			break;
		}
	for(int i=0;i<n;i++)
		if(0<arr[i]&&arr[i]<min)
			min=arr[i];
	if(flag==true)		
		printf("So duong nho nhat la %d",min);
	else
		printf("Khong ton tai gia tri duong");							
}
