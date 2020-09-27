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
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>0+i;j--)
			if(arr[j]<arr[j-1]){
				int trg=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=trg;
			}
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,arr[i]);		
			
	int X;
	printf("Nhap so X = ");	
	scanf("%d",&X);	
	
	int low=0;
	int high=n-1;
	int mid;
	bool flag;
	while(low<=high){
		mid=(low+high)/2;
		flag=false;
		if(X==arr[mid]){
			flag=true;
			break;
		}
		else if(X>arr[mid])
			low=mid+1;
		else
			high=mid-1;	
	}
	if(flag)
		printf("Gia tri nho nhat gan X: arr[%d] = %d",(mid-1),arr[mid-1]);
	else
		if(X>arr[mid])
			printf("Gia tri nho nhat gan X: arr[%d] = %d",mid,arr[mid]);
		else
			if(mid!=0)
				printf("Gia tri nho nhat gan X: arr[%d] = %d",(mid-1),arr[mid-1]);
			else
				printf("Khong ton tai gia tri nho hon X trong mang");					
}
