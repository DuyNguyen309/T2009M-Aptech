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
	int S=0,count=0;
	for(int i=0;i<n;i++)
		if(arr[i]>0){
			count++;
			for(;i<n-1;i++)
				if(arr[i+1]==arr[i]+1)
					count++;
				else
					break;	
			if(S<count)
				S=count;
			count=0;	
		}
	if(S==0)
		printf("Khong co so duong nao");
	else if(S==1)
		printf("Khong co so duong lien tiep nao");
	else
		printf("So luong so duong lien tiep nhieu nhat: %d",S);			
}
