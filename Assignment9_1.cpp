#include <stdio.h>
#include <string.h>
int main(){
	int n;
	do{
		printf("Nhap so n = ");
		scanf("%d",&n);
	}while(n<1);
	
	char s[n][20];
	for(int i=0;i<n;i++){
		printf("Nhap chuoi s[%d]: ",i);
		scanf("%s",s[i]);
		for(int j=0;j<i;j++)
			for(int k=0;k<i-j;k++)
				if(strcmp(s[k],s[k+1])>0){
					char a[20];
					strcpy(a,s[k]);
					strcpy(s[k],s[k+1]);
					strcpy(s[k+1],a);
				}
	}
	printf("Chuoi sap xep theo thu tu Alphabet:\n");
	for(int i=0;i<n;i++)
		printf("s[%d]: %s\n",i,s[i]);	
}
