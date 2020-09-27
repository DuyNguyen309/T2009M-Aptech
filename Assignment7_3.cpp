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
		int j=i-1;
		int trg=arr[i];
		while(j>=0&&arr[j]>trg){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=trg;
	}
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,arr[i]);	
}
