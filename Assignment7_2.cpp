#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap so n = ");
		scanf("%d",&n);
	}while(n<1);
	
	int arr[n];
	bool flag;
	for(int i=0;i<n;i++)
		do{
			printf("arr[%d] = ",i);
			scanf("%d",&arr[i]);
			flag=false;
			int x=i-1;
			while(x>=0){
				if(arr[x]==arr[i]){
					flag=true;
					break;
				}
				x--;		
			}
		}while(flag);
	printf("Mang sau khi khai bao:\n");
	for(int i=0;i<n;i++)
		printf("arr[%d] = %d\n",i,arr[i]);	
}
