#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("Nhap chuoi s1: ");
	scanf("%s",s1);
	printf("Nhap chuoi s2: ");
	scanf("%s",s2);
	printf("S1 sau khi nhap: %s\n",s1);
	printf("S2 sau khi nhap: %s\n",s2);
	
	if(strlen(s1)<strlen(s2))
		printf("s2 khong nam trong s1\n");
	else{
		int max=0;
		for(int i=0;i<=strlen(s1)-strlen(s2);i++)
			for(int j=i,k=0,count=0;k<strlen(s2);j++,k++)
				if(s1[j]==s2[k]){
					count++;
					if(max<count)
						max=count;
				}
		if(max==strlen(s2))
			printf("s2 nam trong s1");
		else
			printf("s2 khong nam trong s1");	
	}
}
