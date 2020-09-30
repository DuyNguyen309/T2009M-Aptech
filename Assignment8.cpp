#include <stdio.h>
#include <math.h>
#include "Assignment8.h"
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	printf("So nguyen to lon tiep theo gan %d = %d\n",n,SoNguyenTo(n));
	printf("Tong cac chu so cua %d = %d\n",n,TongChuSo(n));
	
	int a,b,c;
	printf("Nhap so a = ");
	scanf("%d",&a);
	printf("Nhap so b = ");
	scanf("%d",&b);
	printf("Nhap so c = ");
	scanf("%d",&c);
	
	printf("Chu vi tam giac 3 canh abc = %d\n",ChuViTG(a,b,c));
	printf("Dien tich tam giac 3 canh abc = %f\n",DienTichTG(a,b,c));
	
	int x,y;
	printf("Nhap so x = ");
	scanf("%d",&x);
	printf("Nhap so y = ");
	scanf("%d",&y);
	
	printf("UCLN cua %d va %d = %d\n",x,y,UCLN(x,y));
	printf("BCNN cua %d va %d = %d\n",x,y,BCNN(x,y));
}
